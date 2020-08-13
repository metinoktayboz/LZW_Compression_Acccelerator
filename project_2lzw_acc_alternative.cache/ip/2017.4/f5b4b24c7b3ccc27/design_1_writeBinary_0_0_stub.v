// Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2017.4 (win64) Build 2086221 Fri Dec 15 20:55:39 MST 2017
// Date        : Fri Jun 19 19:21:28 2020
// Host        : mo-B running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_1_writeBinary_0_0_stub.v
// Design      : design_1_writeBinary_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z020clg484-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* x_core_info = "writeBinary,Vivado 2017.4" *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix(s_axi_S_AXI_BUNDLE_AWADDR, 
  s_axi_S_AXI_BUNDLE_AWVALID, s_axi_S_AXI_BUNDLE_AWREADY, s_axi_S_AXI_BUNDLE_WDATA, 
  s_axi_S_AXI_BUNDLE_WSTRB, s_axi_S_AXI_BUNDLE_WVALID, s_axi_S_AXI_BUNDLE_WREADY, 
  s_axi_S_AXI_BUNDLE_BRESP, s_axi_S_AXI_BUNDLE_BVALID, s_axi_S_AXI_BUNDLE_BREADY, 
  s_axi_S_AXI_BUNDLE_ARADDR, s_axi_S_AXI_BUNDLE_ARVALID, s_axi_S_AXI_BUNDLE_ARREADY, 
  s_axi_S_AXI_BUNDLE_RDATA, s_axi_S_AXI_BUNDLE_RRESP, s_axi_S_AXI_BUNDLE_RVALID, 
  s_axi_S_AXI_BUNDLE_RREADY, ap_clk, ap_rst_n, interrupt)
/* synthesis syn_black_box black_box_pad_pin="s_axi_S_AXI_BUNDLE_AWADDR[4:0],s_axi_S_AXI_BUNDLE_AWVALID,s_axi_S_AXI_BUNDLE_AWREADY,s_axi_S_AXI_BUNDLE_WDATA[31:0],s_axi_S_AXI_BUNDLE_WSTRB[3:0],s_axi_S_AXI_BUNDLE_WVALID,s_axi_S_AXI_BUNDLE_WREADY,s_axi_S_AXI_BUNDLE_BRESP[1:0],s_axi_S_AXI_BUNDLE_BVALID,s_axi_S_AXI_BUNDLE_BREADY,s_axi_S_AXI_BUNDLE_ARADDR[4:0],s_axi_S_AXI_BUNDLE_ARVALID,s_axi_S_AXI_BUNDLE_ARREADY,s_axi_S_AXI_BUNDLE_RDATA[31:0],s_axi_S_AXI_BUNDLE_RRESP[1:0],s_axi_S_AXI_BUNDLE_RVALID,s_axi_S_AXI_BUNDLE_RREADY,ap_clk,ap_rst_n,interrupt" */;
  input [4:0]s_axi_S_AXI_BUNDLE_AWADDR;
  input s_axi_S_AXI_BUNDLE_AWVALID;
  output s_axi_S_AXI_BUNDLE_AWREADY;
  input [31:0]s_axi_S_AXI_BUNDLE_WDATA;
  input [3:0]s_axi_S_AXI_BUNDLE_WSTRB;
  input s_axi_S_AXI_BUNDLE_WVALID;
  output s_axi_S_AXI_BUNDLE_WREADY;
  output [1:0]s_axi_S_AXI_BUNDLE_BRESP;
  output s_axi_S_AXI_BUNDLE_BVALID;
  input s_axi_S_AXI_BUNDLE_BREADY;
  input [4:0]s_axi_S_AXI_BUNDLE_ARADDR;
  input s_axi_S_AXI_BUNDLE_ARVALID;
  output s_axi_S_AXI_BUNDLE_ARREADY;
  output [31:0]s_axi_S_AXI_BUNDLE_RDATA;
  output [1:0]s_axi_S_AXI_BUNDLE_RRESP;
  output s_axi_S_AXI_BUNDLE_RVALID;
  input s_axi_S_AXI_BUNDLE_RREADY;
  input ap_clk;
  input ap_rst_n;
  output interrupt;
endmodule
