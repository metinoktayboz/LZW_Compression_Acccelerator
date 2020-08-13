// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

// S_AXI_BUNDLE
// 0x000 : Control signals
//         bit 0  - ap_start (Read/Write/COH)
//         bit 1  - ap_done (Read/COR)
//         bit 2  - ap_idle (Read)
//         bit 3  - ap_ready (Read)
//         bit 7  - auto_restart (Read/Write)
//         others - reserved
// 0x004 : Global Interrupt Enable Register
//         bit 0  - Global Interrupt Enable (Read/Write)
//         others - reserved
// 0x008 : IP Interrupt Enable Register (Read/Write)
//         bit 0  - Channel 0 (ap_done)
//         bit 1  - Channel 1 (ap_ready)
//         others - reserved
// 0x00c : IP Interrupt Status Register (Read/TOW)
//         bit 0  - Channel 0 (ap_done)
//         bit 1  - Channel 1 (ap_ready)
//         others - reserved
// 0x100 : Data signal of code
//         bit 31~0 - code[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of leftover_i
//         bit 31~0 - leftover_i[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of leftover_o
//         bit 31~0 - leftover_o[31:0] (Read)
// 0x114 : Control signal of leftover_o
//         bit 0  - leftover_o_ap_vld (Read/COR)
//         others - reserved
// 0x118 : Data signal of leftoverBits_i
//         bit 31~0 - leftoverBits_i[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of leftoverBits_o
//         bit 31~0 - leftoverBits_o[31:0] (Read)
// 0x124 : Control signal of leftoverBits_o
//         bit 0  - leftoverBits_o_ap_vld (Read/COR)
//         others - reserved
// 0x128 : Data signal of count_i
//         bit 31~0 - count_i[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of count_o
//         bit 31~0 - count_o[31:0] (Read)
// 0x134 : Control signal of count_o
//         bit 0  - count_o_ap_vld (Read/COR)
//         others - reserved
// 0x080 ~
// 0x0ff : Memory 'output_r' (20 * 32b)
//         Word n : bit [31:0] - output_r[n]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XWRITEBINARY_S_AXI_BUNDLE_ADDR_AP_CTRL             0x000
#define XWRITEBINARY_S_AXI_BUNDLE_ADDR_GIE                 0x004
#define XWRITEBINARY_S_AXI_BUNDLE_ADDR_IER                 0x008
#define XWRITEBINARY_S_AXI_BUNDLE_ADDR_ISR                 0x00c
#define XWRITEBINARY_S_AXI_BUNDLE_ADDR_CODE_DATA           0x100
#define XWRITEBINARY_S_AXI_BUNDLE_BITS_CODE_DATA           32
#define XWRITEBINARY_S_AXI_BUNDLE_ADDR_LEFTOVER_I_DATA     0x108
#define XWRITEBINARY_S_AXI_BUNDLE_BITS_LEFTOVER_I_DATA     32
#define XWRITEBINARY_S_AXI_BUNDLE_ADDR_LEFTOVER_O_DATA     0x110
#define XWRITEBINARY_S_AXI_BUNDLE_BITS_LEFTOVER_O_DATA     32
#define XWRITEBINARY_S_AXI_BUNDLE_ADDR_LEFTOVER_O_CTRL     0x114
#define XWRITEBINARY_S_AXI_BUNDLE_ADDR_LEFTOVERBITS_I_DATA 0x118
#define XWRITEBINARY_S_AXI_BUNDLE_BITS_LEFTOVERBITS_I_DATA 32
#define XWRITEBINARY_S_AXI_BUNDLE_ADDR_LEFTOVERBITS_O_DATA 0x120
#define XWRITEBINARY_S_AXI_BUNDLE_BITS_LEFTOVERBITS_O_DATA 32
#define XWRITEBINARY_S_AXI_BUNDLE_ADDR_LEFTOVERBITS_O_CTRL 0x124
#define XWRITEBINARY_S_AXI_BUNDLE_ADDR_COUNT_I_DATA        0x128
#define XWRITEBINARY_S_AXI_BUNDLE_BITS_COUNT_I_DATA        32
#define XWRITEBINARY_S_AXI_BUNDLE_ADDR_COUNT_O_DATA        0x130
#define XWRITEBINARY_S_AXI_BUNDLE_BITS_COUNT_O_DATA        32
#define XWRITEBINARY_S_AXI_BUNDLE_ADDR_COUNT_O_CTRL        0x134
#define XWRITEBINARY_S_AXI_BUNDLE_ADDR_OUTPUT_R_BASE       0x080
#define XWRITEBINARY_S_AXI_BUNDLE_ADDR_OUTPUT_R_HIGH       0x0ff
#define XWRITEBINARY_S_AXI_BUNDLE_WIDTH_OUTPUT_R           32
#define XWRITEBINARY_S_AXI_BUNDLE_DEPTH_OUTPUT_R           20

