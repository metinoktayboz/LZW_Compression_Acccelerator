#include <stdio.h>
#include "platform.h"
#include "xil_printf.h"
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "xwritebinary.h"
//#include "lzw_acc_2_source.h" // LZW compression
#define WB_DEVICE_ID XPAR_WRITEBINARY_0_DEVICE_ID

XWritebinary WBInst;

enum {
    dictionarySize = 4095, // maximum number of entries defined for the dictionary (2^12 = 4096)
    codeLength = 12, // the codes which are taking place of the substrings
    emptyPrefix = -1, // empty prefix for ASCII characters
    maxValue = dictionarySize - 1
};



struct DictNode {
    int value; // the position in the list
    int prefix; // prefix for byte > 255
    int character; // the last byte of the string
    struct DictNode *next;
};

void dictionaryInit();
void appendNode(struct DictNode *node);
void dictionaryDestroy();
int dictionaryLookup(int prefix, int character);
int dictionaryPrefix(int value);
int dictionaryCharacter(int value);
void dictionaryAdd(int prefix, int character, int value);
void writeBinary(int  output[20], int code,int *leftover,int *leftoverBits,int *count);


// the dictionary
struct DictNode *dictionary, *tail;

// initialize the dictionary of ASCII characters @12bits
void dictionaryInit() {
    int i;
    struct DictNode *node;
    for (i = 0; i < 256; i++) { // ASCII
        node = (struct DictNode *)malloc(sizeof(struct DictNode));
        node->prefix = emptyPrefix;
        node->character = i;
        appendNode(node);
    }
}

// add node to the list
void appendNode(struct DictNode *node) {
    if (dictionary != NULL) tail->next = node;
    else dictionary = node;
    tail = node;
    node->next = NULL;
}

// destroy the whole dictionary down to NULL
void dictionaryDestroy() {
    while (dictionary != NULL) {
        dictionary = dictionary->next; /* the head now links to the next element */
    }
}

// is prefix + character in the dictionary?
int dictionaryLookup(int prefix, int character) {
    struct DictNode *node;
    for (node = dictionary; node != NULL; node = node->next) { // ...traverse forward
        if (node->prefix == prefix && node->character == character) return node->value;
    }
    return emptyPrefix;
}

int dictionaryPrefix(int value) {
    struct DictNode *node;
    for (node = dictionary; node != NULL; node = node->next) { // ...traverse forward
        if (node->value == value) return node->prefix;
    }
    return -1;
}

int dictionaryCharacter(int value) {
    struct DictNode *node;
    for (node = dictionary; node != NULL; node = node->next) { // ...traverse forward
        if (node->value == value) {
            //printf("\nNODE %i %i %i\n", node->value, node->prefix, node->character);
            return node->character;
        }
    }
    return -1;
}

// add prefix + character to the dictionary
void dictionaryAdd(int prefix, int character, int value) {
    struct DictNode *node;
    node = (struct DictNode *)malloc(sizeof(struct DictNode));
    node->value = value;
    node->prefix = prefix;
    node->character = character;
    //printf("\n(%i) = (%i) + (%i)\n", node->value, node->prefix, node->character);
    appendNode(node);
}

int leftover = 0;
int leftoverBits;
int count =0;


void writeBinary(int  output[20], int code,int *leftover,int *leftoverBits,int *count) {

	int temp_leftover = *leftover;
	int temp_leftoverBits = *leftoverBits;
	int temp_count = *count;
    if (temp_leftover > 0) {
        int previousCode = (temp_leftoverBits << 4) + (code >> 8);

        output[temp_count++]=previousCode; //fputc(previousCode, output);
        output[temp_count++]=code;   //fputc(code, output);

        temp_leftover = 0; // no leftover now
    } else {
        temp_leftoverBits = code & 0xF; // save leftover, the last 00001111
        temp_leftover = 1;
        output[temp_count++]= code >> 4; //fputc(code >> 4, output);
    }

    *leftover = temp_leftover;
    *leftoverBits = temp_leftoverBits;
    *count = temp_count;
}





void compress(int inputFile[10], int outputFile[20]) {
    int prefix = inputFile[0];

    int character;
    int i;
    int ii;
    int nextCode;
    int index;
    int status;
    unsigned int * writebinary_core = (unsigned int *)0x43C00000;

    // LZW starts out with a dictionary of 256 characters (in the case of 8 codeLength) and uses those as the "standard"
    //  character set.
    nextCode = 256; // next code is the next available string code
    dictionaryInit();
    // while (there is still data to be read)
    for(i=1;i<10;i++) { // ch = read a character;
        character = inputFile[i];
        // if (dictionary contains prefix+character)
        if ((index = dictionaryLookup(prefix, character)) != -1) prefix = index; // prefix = prefix+character
        else { // ...no, try to add it
            // encode s to output file
          //  writeBinary(outputFile, prefix,&leftover,&leftoverBits,&count);

        	status = XWritebinary_Initialize(&WBInst, WB_DEVICE_ID);
        	XWritebinary_Set_code(&WBInst, prefix);
        	//printf("%d \n\r",XWritebinary_Get_code(&WBInst));
        	XWritebinary_Set_leftover_i(&WBInst, &leftover);
        	XWritebinary_Set_leftoverBits_i(&WBInst, &leftoverBits);
        	XWritebinary_Set_count_i(&WBInst, &count);
            XWritebinary_Start(&WBInst);
          //  printf("%d \n\r",XWritebinary_IsDone(&WBInst));
            while(XWritebinary_IsDone(&WBInst)!=1);
            for(ii = 0 ; ii<20 ; ii++){
            	//outputFile[ii] = XWritebinary_ReadReg(writebinary_core, 32+ii);
                outputFile[ii]= ((uint32_t)writebinary_core[ii+32]);
                }



            // add prefix+character to dictionary
            if (nextCode < dictionarySize) dictionaryAdd(prefix, character, nextCode++);

            // prefix = character
            prefix = character; //... output the last string after adding the new one
        }
    }
    // encode s to output file
   // writeBinary(outputFile, prefix,&leftover,&leftoverBits,&count); // output the last code

   // status = XWritebinary_Initialize(&WBInst, WB_DEVICE_ID);
	XWritebinary_Set_code(&WBInst, prefix);
	//printf("%d \n\r",XWritebinary_Get_code(&WBInst));
	XWritebinary_Set_leftover_i(&WBInst, &leftover);
	XWritebinary_Set_leftoverBits_i(&WBInst, &leftoverBits);
	XWritebinary_Set_count_i(&WBInst, &count);
    XWritebinary_Start(&WBInst);

    while(XWritebinary_IsDone(&WBInst)!=1);

    for(ii = 0 ; ii<20 ; ii++){
    	 // outputFile[ii] = XWritebinary_ReadReg(writebinary_core, 32+ii);
    	outputFile[ii]= ((uint32_t)writebinary_core[ii+32]);
    }

    //printf("%d \n\r",XWritebinary_IsDone(&WBInst));



    if (leftover > 0){
        outputFile[count++]=leftoverBits<<4;
    } //fputc(leftoverBits << 4, outputFile);

    // free the dictionary here
    dictionaryDestroy();
}



int main() { // number of arguments, arguments array
    //clock_t start, end;
   // double cpu_time_used;
int *f = 0x080;

	//  unsigned int * writebinary_core = (unsigned int *)0x43C00000;
	 // printf("arr adress: %08x\n", writebinary_core[32]);







    int outputFile[20];
    int inputFile[10] = {66,65,66,65,65,66,65,65,65};
    int x;
    /*for(x=0;x<20;x++){
        outputFile[x]=0;
    }*/
    outputFile[0]=10;
    printf("%d \n\r", XWritebinary_ReadReg(0x43C00000,132));
   // printf("%d\n", inputFile[1]);
    //start = clock();
    compress(inputFile,outputFile);
    //end = clock();

    int j=0;
    /*for(j;j<20;j++){
       // if(outputFile[j]!=0)
        printf("mtn[%d] = %d\n",j, outputFile[j]);
    }*/

   // printf("%d\n", XWritebinary_Read_output_r_Words(&WBInst,4,3 , 20));

    //cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    //printf("%f",cpu_time_used);

    return 0;
}
