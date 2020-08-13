// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

// S_AXI_BUNDLE
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of ap_return
//        bit 31~0 - ap_return[31:0] (Read)
// 0x18 : Data signal of code
//        bit 31~0 - code[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of out_r
//        bit 31~0 - out_r[31:0] (Read/Write)
// 0x24 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XWRITEBINARY_S_AXI_BUNDLE_ADDR_AP_CTRL    0x00
#define XWRITEBINARY_S_AXI_BUNDLE_ADDR_GIE        0x04
#define XWRITEBINARY_S_AXI_BUNDLE_ADDR_IER        0x08
#define XWRITEBINARY_S_AXI_BUNDLE_ADDR_ISR        0x0c
#define XWRITEBINARY_S_AXI_BUNDLE_ADDR_AP_RETURN  0x10
#define XWRITEBINARY_S_AXI_BUNDLE_BITS_AP_RETURN  32
#define XWRITEBINARY_S_AXI_BUNDLE_ADDR_CODE_DATA  0x18
#define XWRITEBINARY_S_AXI_BUNDLE_BITS_CODE_DATA  32
#define XWRITEBINARY_S_AXI_BUNDLE_ADDR_OUT_R_DATA 0x20
#define XWRITEBINARY_S_AXI_BUNDLE_BITS_OUT_R_DATA 32

