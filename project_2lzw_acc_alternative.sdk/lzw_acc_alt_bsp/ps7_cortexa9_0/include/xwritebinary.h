// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef XWRITEBINARY_H
#define XWRITEBINARY_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xwritebinary_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 S_axi_bundle_BaseAddress;
} XWritebinary_Config;
#endif

typedef struct {
    u32 S_axi_bundle_BaseAddress;
    u32 IsReady;
} XWritebinary;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XWritebinary_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XWritebinary_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XWritebinary_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XWritebinary_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XWritebinary_Initialize(XWritebinary *InstancePtr, u16 DeviceId);
XWritebinary_Config* XWritebinary_LookupConfig(u16 DeviceId);
int XWritebinary_CfgInitialize(XWritebinary *InstancePtr, XWritebinary_Config *ConfigPtr);
#else
int XWritebinary_Initialize(XWritebinary *InstancePtr, const char* InstanceName);
int XWritebinary_Release(XWritebinary *InstancePtr);
#endif

void XWritebinary_Start(XWritebinary *InstancePtr);
u32 XWritebinary_IsDone(XWritebinary *InstancePtr);
u32 XWritebinary_IsIdle(XWritebinary *InstancePtr);
u32 XWritebinary_IsReady(XWritebinary *InstancePtr);
void XWritebinary_EnableAutoRestart(XWritebinary *InstancePtr);
void XWritebinary_DisableAutoRestart(XWritebinary *InstancePtr);
u32 XWritebinary_Get_return(XWritebinary *InstancePtr);

void XWritebinary_Set_code(XWritebinary *InstancePtr, u32 Data);
u32 XWritebinary_Get_code(XWritebinary *InstancePtr);
void XWritebinary_Set_out_r(XWritebinary *InstancePtr, u32 Data);
u32 XWritebinary_Get_out_r(XWritebinary *InstancePtr);

void XWritebinary_InterruptGlobalEnable(XWritebinary *InstancePtr);
void XWritebinary_InterruptGlobalDisable(XWritebinary *InstancePtr);
void XWritebinary_InterruptEnable(XWritebinary *InstancePtr, u32 Mask);
void XWritebinary_InterruptDisable(XWritebinary *InstancePtr, u32 Mask);
void XWritebinary_InterruptClear(XWritebinary *InstancePtr, u32 Mask);
u32 XWritebinary_InterruptGetEnabled(XWritebinary *InstancePtr);
u32 XWritebinary_InterruptGetStatus(XWritebinary *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
