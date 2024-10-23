// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_Client;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop_Client* __PVT__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst;
    Vtop_Client* __PVT__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst;
    Vtop_Client* __PVT__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst;
    Vtop_Client* __PVT__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst;
    Vtop_Client* __PVT__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst;
    Vtop_Client* __PVT__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst;
    Vtop_Client* __PVT__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst;
    Vtop_Client* __PVT__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst;
    Vtop_Client* __PVT__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst;
    Vtop_Client* __PVT__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst;
    Vtop_Client* __PVT__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst;
    Vtop_Client* __PVT__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst;
    Vtop_Client* __PVT__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst;
    Vtop_Client* __PVT__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst;
    Vtop_Client* __PVT__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst;
    Vtop_Client* __PVT__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*7:0*/ __VdfgRegularize_hd87f99a1_0_0;
        CData/*7:0*/ __VdfgRegularize_hd87f99a1_0_1;
        CData/*7:0*/ __VdfgRegularize_hd87f99a1_0_2;
        CData/*7:0*/ __VdfgRegularize_hd87f99a1_0_3;
        CData/*7:0*/ __VdfgRegularize_hd87f99a1_0_4;
        CData/*7:0*/ __VdfgRegularize_hd87f99a1_0_5;
        CData/*7:0*/ __VdfgRegularize_hd87f99a1_0_6;
        CData/*7:0*/ __VdfgRegularize_hd87f99a1_0_7;
        CData/*7:0*/ __VdfgRegularize_hd87f99a1_0_8;
        CData/*7:0*/ __VdfgRegularize_hd87f99a1_0_9;
        CData/*7:0*/ __VdfgRegularize_hd87f99a1_0_10;
        CData/*7:0*/ __VdfgRegularize_hd87f99a1_0_11;
        CData/*7:0*/ __VdfgRegularize_hd87f99a1_1_0;
        CData/*7:0*/ __VdfgRegularize_hd87f99a1_2_0;
        CData/*7:0*/ __VdfgRegularize_hd87f99a1_3_0;
        CData/*7:0*/ __VdfgRegularize_hd87f99a1_4_0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__e_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__e_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__e_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__e_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__e_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__e_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__e_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__e_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__e_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__e_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__e_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__e_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__e_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__e_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__e_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__e_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__DOT__n;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__DOT__w;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__DOT__n;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__DOT__w;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__DOT__n;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__DOT__w;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__DOT__n;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__DOT__w;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__DOT__n;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__DOT__w;
    };
    struct {
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__DOT__n;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__DOT__w;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__DOT__n;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__DOT__w;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__DOT__n;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__DOT__w;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__DOT__n;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__DOT__w;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__DOT__n;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__DOT__w;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__DOT__n;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__DOT__w;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__DOT__n;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__DOT__w;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__DOT__n;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__DOT__w;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__DOT__n;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__DOT__w;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__DOT__n;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__DOT__w;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__DOT__n;
        VlWide<17>/*516:0*/ top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__DOT__w;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*16:0*/, 96> top__DOT__destx;
        VlUnpacked<IData/*16:0*/, 96> top__DOT__desty;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
