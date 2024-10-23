// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_Client.h"
#include "Vtop__Syms.h"

VL_ATTR_COLD void Vtop_Client___stl_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst__0(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___stl_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst__0\n"); );
    // Body
    vlSelf->__PVT___08_ = (1ULL + vlSelf->__PVT__attempts);
    vlSelf->__PVT___07_ = (1ULL + vlSelf->__PVT__sent0);
    vlSelf->__PVT___03_ = (1ULL + vlSelf->__PVT__sent);
    vlSelf->__PVT___02_ = (1ULL + vlSelf->__PVT__now);
    vlSelf->__PVT___10_ = ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (6ULL > vlSelf->__PVT__attempts));
    vlSelf->__PVT___32_ = ((vlSelf->__PVT__attempts 
                            > vlSelf->__PVT__sent0) 
                           & VL_GTS_IQQ(64, 6ULL, vlSelf->__PVT__sent0));
}
