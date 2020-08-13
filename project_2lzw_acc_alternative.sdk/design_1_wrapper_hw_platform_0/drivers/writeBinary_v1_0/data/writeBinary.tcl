# ==============================================================
# File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
# Version: 2017.4
# Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
# 
# ==============================================================

proc generate {drv_handle} {
    xdefine_include_file $drv_handle "xparameters.h" "XWritebinary" \
        "NUM_INSTANCES" \
        "DEVICE_ID" \
        "C_S_AXI_S_AXI_BUNDLE_BASEADDR" \
        "C_S_AXI_S_AXI_BUNDLE_HIGHADDR"

    xdefine_config_file $drv_handle "xwritebinary_g.c" "XWritebinary" \
        "DEVICE_ID" \
        "C_S_AXI_S_AXI_BUNDLE_BASEADDR"

    xdefine_canonical_xpars $drv_handle "xparameters.h" "XWritebinary" \
        "DEVICE_ID" \
        "C_S_AXI_S_AXI_BUNDLE_BASEADDR" \
        "C_S_AXI_S_AXI_BUNDLE_HIGHADDR"
}

