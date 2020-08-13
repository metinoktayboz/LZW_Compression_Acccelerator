-- Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2017.4 (win64) Build 2086221 Fri Dec 15 20:55:39 MST 2017
-- Date        : Fri Jun 19 19:21:28 2020
-- Host        : mo-B running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
--               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_1_writeBinary_0_0_stub.vhdl
-- Design      : design_1_writeBinary_0_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7z020clg484-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  Port ( 
    s_axi_S_AXI_BUNDLE_AWADDR : in STD_LOGIC_VECTOR ( 4 downto 0 );
    s_axi_S_AXI_BUNDLE_AWVALID : in STD_LOGIC;
    s_axi_S_AXI_BUNDLE_AWREADY : out STD_LOGIC;
    s_axi_S_AXI_BUNDLE_WDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_S_AXI_BUNDLE_WSTRB : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_S_AXI_BUNDLE_WVALID : in STD_LOGIC;
    s_axi_S_AXI_BUNDLE_WREADY : out STD_LOGIC;
    s_axi_S_AXI_BUNDLE_BRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_S_AXI_BUNDLE_BVALID : out STD_LOGIC;
    s_axi_S_AXI_BUNDLE_BREADY : in STD_LOGIC;
    s_axi_S_AXI_BUNDLE_ARADDR : in STD_LOGIC_VECTOR ( 4 downto 0 );
    s_axi_S_AXI_BUNDLE_ARVALID : in STD_LOGIC;
    s_axi_S_AXI_BUNDLE_ARREADY : out STD_LOGIC;
    s_axi_S_AXI_BUNDLE_RDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_S_AXI_BUNDLE_RRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_S_AXI_BUNDLE_RVALID : out STD_LOGIC;
    s_axi_S_AXI_BUNDLE_RREADY : in STD_LOGIC;
    ap_clk : in STD_LOGIC;
    ap_rst_n : in STD_LOGIC;
    interrupt : out STD_LOGIC
  );

end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix;

architecture stub of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "s_axi_S_AXI_BUNDLE_AWADDR[4:0],s_axi_S_AXI_BUNDLE_AWVALID,s_axi_S_AXI_BUNDLE_AWREADY,s_axi_S_AXI_BUNDLE_WDATA[31:0],s_axi_S_AXI_BUNDLE_WSTRB[3:0],s_axi_S_AXI_BUNDLE_WVALID,s_axi_S_AXI_BUNDLE_WREADY,s_axi_S_AXI_BUNDLE_BRESP[1:0],s_axi_S_AXI_BUNDLE_BVALID,s_axi_S_AXI_BUNDLE_BREADY,s_axi_S_AXI_BUNDLE_ARADDR[4:0],s_axi_S_AXI_BUNDLE_ARVALID,s_axi_S_AXI_BUNDLE_ARREADY,s_axi_S_AXI_BUNDLE_RDATA[31:0],s_axi_S_AXI_BUNDLE_RRESP[1:0],s_axi_S_AXI_BUNDLE_RVALID,s_axi_S_AXI_BUNDLE_RREADY,ap_clk,ap_rst_n,interrupt";
attribute x_core_info : string;
attribute x_core_info of stub : architecture is "writeBinary,Vivado 2017.4";
begin
end;
