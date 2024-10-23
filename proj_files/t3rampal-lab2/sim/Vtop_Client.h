// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_CLIENT_H_
#define VERILATED_VTOP_CLIENT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_Client final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(i_ack,0,0);
    VL_IN8(o_v,0,0);
    VL_IN8(X,1,0);
    VL_IN8(Y,1,0);
    CData/*0:0*/ __PVT___10_;
    CData/*0:0*/ __PVT___20_;
    CData/*0:0*/ __PVT___32_;
    CData/*1:0*/ __PVT___53_;
    CData/*1:0*/ __PVT___54_;
    VL_INW(o,516,0,17);
    VL_OUTW(i,516,0,17);
    QData/*63:0*/ __PVT___02_;
    QData/*63:0*/ __PVT___03_;
    QData/*63:0*/ __PVT___07_;
    QData/*63:0*/ __PVT___08_;
    QData/*63:0*/ __PVT__attempts;
    QData/*63:0*/ __PVT__now;
    QData/*63:0*/ __PVT__sent;
    QData/*63:0*/ __PVT__sent0;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_Client(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_Client();
    VL_UNCOPYABLE(Vtop_Client);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
