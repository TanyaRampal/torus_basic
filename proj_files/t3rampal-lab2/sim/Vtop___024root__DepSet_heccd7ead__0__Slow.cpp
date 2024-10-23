// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x75745f78U;
    __Vtemp_1[2U] = 0x2f696e70U;
    __Vtemp_1[3U] = 0x64617461U;
    __Vtemp_1[4U] = 0x2e2e2fU;
    VL_READMEM_N(true, 17, 96, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_1)
                 ,  &(vlSelf->top__DOT__destx), 0, ~0ULL);
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x75745f79U;
    __Vtemp_2[2U] = 0x2f696e70U;
    __Vtemp_2[3U] = 0x64617461U;
    __Vtemp_2[4U] = 0x2e2e2fU;
    VL_READMEM_N(true, 17, 96, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_2)
                 ,  &(vlSelf->top__DOT__desty), 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/test_torus.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 96; ++__Vi0) {
        vlSelf->top__DOT__destx[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 96; ++__Vi0) {
        vlSelf->top__DOT__desty[__Vi0] = VL_RAND_RESET_I(17);
    }
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__e_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__e_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__e_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__e_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__e_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__e_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__e_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__e_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__e_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__e_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__e_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__e_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__e_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__e_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__e_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__e_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__DOT__n);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__DOT__w);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__DOT__n);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__DOT__w);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__DOT__n);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__DOT__w);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__DOT__n);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__DOT__w);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__DOT__n);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__DOT__w);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__DOT__n);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__DOT__w);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__DOT__n);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__DOT__w);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__DOT__n);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__DOT__w);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__DOT__n);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__DOT__w);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__DOT__n);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__DOT__w);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__DOT__n);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__DOT__w);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__DOT__n);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__DOT__w);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__DOT__n);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__DOT__w);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__DOT__n);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__DOT__w);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__DOT__n);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__DOT__w);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__DOT__n);
    VL_RAND_RESET_W(517, vlSelf->top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__DOT__w);
    vlSelf->__VdfgRegularize_hd87f99a1_0_0 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_hd87f99a1_0_1 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_hd87f99a1_0_2 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_hd87f99a1_0_3 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_hd87f99a1_0_4 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_hd87f99a1_0_5 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_hd87f99a1_0_6 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_hd87f99a1_0_7 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_hd87f99a1_0_8 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_hd87f99a1_0_9 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_hd87f99a1_0_10 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_hd87f99a1_0_11 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_hd87f99a1_1_0 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_hd87f99a1_2_0 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_hd87f99a1_3_0 = VL_RAND_RESET_I(8);
    vlSelf->__VdfgRegularize_hd87f99a1_4_0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
