// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_Client.h"

VL_ATTR_COLD void Vtop_Client___eval_static__TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___eval_static__TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst\n"); );
    // Body
    vlSelf->__PVT__attempts = 0ULL;
    vlSelf->__PVT__now = 0ULL;
    vlSelf->__PVT__sent = 0ULL;
    vlSelf->__PVT__sent0 = 0ULL;
}

VL_ATTR_COLD void Vtop_Client___ctor_var_reset(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->i_ack = VL_RAND_RESET_I(1);
    vlSelf->o_v = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(517, vlSelf->o);
    vlSelf->X = VL_RAND_RESET_I(2);
    vlSelf->Y = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(517, vlSelf->i);
    vlSelf->__PVT___02_ = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___03_ = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___07_ = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___08_ = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___10_ = VL_RAND_RESET_I(1);
    vlSelf->__PVT___20_ = VL_RAND_RESET_I(1);
    vlSelf->__PVT___32_ = VL_RAND_RESET_I(1);
    vlSelf->__PVT__attempts = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__now = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__sent = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__sent0 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___53_ = VL_RAND_RESET_I(2);
    vlSelf->__PVT___54_ = VL_RAND_RESET_I(2);
}
