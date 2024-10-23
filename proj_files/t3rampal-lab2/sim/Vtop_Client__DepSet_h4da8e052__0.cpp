// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_Client.h"
#include "Vtop__Syms.h"

VL_INLINE_OPT void Vtop_Client___ico_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst__0(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___ico_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst__0\n"); );
    // Body
    vlSelf->__PVT___10_ = ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (6ULL > vlSelf->__PVT__attempts));
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst__0(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst__0\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & ((IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_0) 
                              >> 1U))))) {
        __Vtemp_1[0U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0U];
        __Vtemp_1[1U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[1U];
        __Vtemp_1[2U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[2U];
        __Vtemp_1[3U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[3U];
        __Vtemp_1[4U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[4U];
        __Vtemp_1[5U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[5U];
        __Vtemp_1[6U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[6U];
        __Vtemp_1[7U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[7U];
        __Vtemp_1[8U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[8U];
        __Vtemp_1[9U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[9U];
        __Vtemp_1[0xaU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xaU];
        __Vtemp_1[0xbU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xbU];
        __Vtemp_1[0xcU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xcU];
        __Vtemp_1[0xdU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xdU];
        __Vtemp_1[0xeU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xeU];
        __Vtemp_1[0xfU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xfU];
        VL_WRITEF_NX("M,%0#,%0#,0,0\n",0,64,vlSelf->__PVT__now,
                     512,__Vtemp_1.data());
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.rst)) 
                     & (6ULL > vlSelf->__PVT__attempts)))) {
        VL_WRITEF_NX("A,%0#,%0#,%0#,%0#\n",0,64,vlSelf->__PVT__now,
                     64,vlSelf->__PVT__attempts,16,
                     (IData)(vlSelf->__PVT___54_),16,
                     vlSelf->__PVT___53_);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_0))))) {
        VL_WRITEF_NX("S,%0#,%0#,%1#,%1#\n",0,64,vlSelf->__PVT__now,
                     64,vlSelf->__PVT__sent,2,(3U & 
                                               (vlSelf->i[0x10U] 
                                                >> 2U)),
                     2,(3U & vlSelf->i[0x10U]));
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_0)))) {
        vlSelf->__PVT__sent = vlSelf->__PVT___03_;
    }
    if (vlSelf->__PVT___10_) {
        vlSelf->__PVT__attempts = vlSelf->__PVT___08_;
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__now = 0ULL;
        vlSelf->i[0x10U] = (0xfU & vlSelf->i[0x10U]);
        vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->i[0x10U] = (0x13U & vlSelf->i[0x10U]);
        vlSelf->i[0x10U] = (0x1cU & vlSelf->i[0x10U]);
    } else {
        vlSelf->__PVT__now = vlSelf->__PVT___02_;
        if (vlSelf->__PVT___20_) {
            vlSelf->i[0x10U] = ((0xfU & vlSelf->i[0x10U]) 
                                | (0x1fU & ((IData)(vlSelf->__PVT___32_) 
                                            << 4U)));
            if (vlSelf->__PVT___32_) {
                vlSelf->i[0U] = (IData)(vlSelf->__PVT__sent0);
                vlSelf->i[1U] = (IData)((vlSelf->__PVT__sent0 
                                         >> 0x20U));
                vlSelf->i[2U] = 0U;
                vlSelf->i[3U] = 0U;
                vlSelf->i[4U] = 0U;
                vlSelf->i[5U] = 0U;
                vlSelf->i[6U] = 0U;
                vlSelf->i[7U] = 0U;
                vlSelf->i[8U] = 0U;
                vlSelf->i[9U] = 0U;
                vlSelf->i[0xaU] = 0U;
                vlSelf->i[0xbU] = 0U;
                vlSelf->i[0xcU] = 0U;
                vlSelf->i[0xdU] = 0U;
                vlSelf->i[0xeU] = 0U;
                vlSelf->i[0xfU] = 0U;
            } else {
                vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
                vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
                vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
                vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
                vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
                vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
                vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
                vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
                vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
                vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
                vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
                vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
                vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
                vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
                vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
                vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
            }
            vlSelf->i[0x10U] = ((0x13U & vlSelf->i[0x10U]) 
                                | (0x1fU & (((IData)(vlSelf->__PVT___32_)
                                              ? (IData)(vlSelf->__PVT___54_)
                                              : 0U) 
                                            << 2U)));
            vlSelf->i[0x10U] = ((0x1cU & vlSelf->i[0x10U]) 
                                | ((IData)(vlSelf->__PVT___32_)
                                    ? (0x1fU & (IData)(vlSelf->__PVT___53_))
                                    : 0U));
        }
    }
    vlSelf->__PVT___08_ = (1ULL + vlSelf->__PVT__attempts);
    vlSelf->__PVT___10_ = ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (6ULL > vlSelf->__PVT__attempts));
    vlSelf->__PVT___02_ = (1ULL + vlSelf->__PVT__now);
    vlSelf->__PVT___03_ = (1ULL + vlSelf->__PVT__sent);
    if ((6ULL > vlSelf->__PVT__sent0)) {
        if ((0x5fU >= (0x7fU & (IData)(vlSelf->__PVT__sent0)))) {
            vlSelf->__PVT___54_ = (3U & vlSymsp->TOP.top__DOT__destx
                                   [(0x7fU & (IData)(vlSelf->__PVT__sent0))]);
            vlSelf->__PVT___53_ = (3U & vlSymsp->TOP.top__DOT__desty
                                   [(0x7fU & (IData)(vlSelf->__PVT__sent0))]);
        } else {
            vlSelf->__PVT___54_ = 0U;
            vlSelf->__PVT___53_ = 0U;
        }
    } else {
        vlSelf->__PVT___54_ = 0U;
        vlSelf->__PVT___53_ = 0U;
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSelf->__PVT___32_) 
                                          & (IData)(vlSelf->__PVT___20_)))) {
        vlSelf->__PVT__sent0 = vlSelf->__PVT___07_;
    }
    vlSelf->__PVT___07_ = (1ULL + vlSelf->__PVT__sent0);
    vlSelf->__PVT___32_ = ((vlSelf->__PVT__attempts 
                            > vlSelf->__PVT__sent0) 
                           & VL_GTS_IQQ(64, 6ULL, vlSelf->__PVT__sent0));
}

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst__1(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst__1\n"); );
    // Body
    vlSelf->__PVT___20_ = (1U & ((~ (vlSelf->i[0x10U] 
                                     >> 4U)) | (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_0)));
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h86fe8637_0;

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst__0(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst__0\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    VlWide<16>/*511:0*/ __Vtemp_3;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & ((IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_1) 
                              >> 1U))))) {
        __Vtemp_1[0U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0U];
        __Vtemp_1[1U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[1U];
        __Vtemp_1[2U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[2U];
        __Vtemp_1[3U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[3U];
        __Vtemp_1[4U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[4U];
        __Vtemp_1[5U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[5U];
        __Vtemp_1[6U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[6U];
        __Vtemp_1[7U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[7U];
        __Vtemp_1[8U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[8U];
        __Vtemp_1[9U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[9U];
        __Vtemp_1[0xaU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xaU];
        __Vtemp_1[0xbU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xbU];
        __Vtemp_1[0xcU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xcU];
        __Vtemp_1[0xdU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xdU];
        __Vtemp_1[0xeU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xeU];
        __Vtemp_1[0xfU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xfU];
        VL_WRITEF_NX("M,%0#,%0#,0,1\n",0,64,vlSelf->__PVT__now,
                     512,__Vtemp_1.data());
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.rst)) 
                     & (6ULL > vlSelf->__PVT__attempts)))) {
        VL_WRITEF_NX("A,%0#,%0#,%0#,%0#\n",0,64,vlSelf->__PVT__now,
                     64,(0x18ULL + vlSelf->__PVT__attempts),
                     16,(IData)(vlSelf->__PVT___54_),
                     16,vlSelf->__PVT___53_);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_1))))) {
        VL_WRITEF_NX("S,%0#,%0#,%1#,%1#\n",0,64,vlSelf->__PVT__now,
                     64,(0x18ULL + vlSelf->__PVT__sent),
                     2,(3U & (vlSelf->i[0x10U] >> 2U)),
                     2,(3U & vlSelf->i[0x10U]));
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_1)))) {
        vlSelf->__PVT__sent = vlSelf->__PVT___03_;
    }
    if (vlSelf->__PVT___10_) {
        vlSelf->__PVT__attempts = vlSelf->__PVT___08_;
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__now = 0ULL;
        vlSelf->i[0x10U] = (0xfU & vlSelf->i[0x10U]);
        vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->i[0x10U] = (0x13U & vlSelf->i[0x10U]);
        vlSelf->i[0x10U] = (0x1cU & vlSelf->i[0x10U]);
    } else {
        vlSelf->__PVT__now = vlSelf->__PVT___02_;
        if (vlSelf->__PVT___20_) {
            vlSelf->i[0x10U] = ((0xfU & vlSelf->i[0x10U]) 
                                | (0x1fU & ((IData)(vlSelf->__PVT___32_) 
                                            << 4U)));
            __Vtemp_2[0U] = (IData)(vlSelf->__PVT__sent0);
            __Vtemp_2[1U] = (IData)((vlSelf->__PVT__sent0 
                                     >> 0x20U));
            __Vtemp_2[2U] = 0U;
            __Vtemp_2[3U] = 0U;
            __Vtemp_2[4U] = 0U;
            __Vtemp_2[5U] = 0U;
            __Vtemp_2[6U] = 0U;
            __Vtemp_2[7U] = 0U;
            __Vtemp_2[8U] = 0U;
            __Vtemp_2[9U] = 0U;
            __Vtemp_2[0xaU] = 0U;
            __Vtemp_2[0xbU] = 0U;
            __Vtemp_2[0xcU] = 0U;
            __Vtemp_2[0xdU] = 0U;
            __Vtemp_2[0xeU] = 0U;
            __Vtemp_2[0xfU] = 0U;
            VL_ADD_W(16, __Vtemp_3, Vtop__ConstPool__CONST_h86fe8637_0, __Vtemp_2);
            if (vlSelf->__PVT___32_) {
                vlSelf->i[0U] = __Vtemp_3[0U];
                vlSelf->i[1U] = __Vtemp_3[1U];
                vlSelf->i[2U] = __Vtemp_3[2U];
                vlSelf->i[3U] = __Vtemp_3[3U];
                vlSelf->i[4U] = __Vtemp_3[4U];
                vlSelf->i[5U] = __Vtemp_3[5U];
                vlSelf->i[6U] = __Vtemp_3[6U];
                vlSelf->i[7U] = __Vtemp_3[7U];
                vlSelf->i[8U] = __Vtemp_3[8U];
                vlSelf->i[9U] = __Vtemp_3[9U];
                vlSelf->i[0xaU] = __Vtemp_3[0xaU];
                vlSelf->i[0xbU] = __Vtemp_3[0xbU];
                vlSelf->i[0xcU] = __Vtemp_3[0xcU];
                vlSelf->i[0xdU] = __Vtemp_3[0xdU];
                vlSelf->i[0xeU] = __Vtemp_3[0xeU];
                vlSelf->i[0xfU] = __Vtemp_3[0xfU];
            } else {
                vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
                vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
                vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
                vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
                vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
                vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
                vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
                vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
                vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
                vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
                vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
                vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
                vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
                vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
                vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
                vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
            }
            vlSelf->i[0x10U] = ((0x13U & vlSelf->i[0x10U]) 
                                | (0x1fU & (((IData)(vlSelf->__PVT___32_)
                                              ? (IData)(vlSelf->__PVT___54_)
                                              : 0U) 
                                            << 2U)));
            vlSelf->i[0x10U] = ((0x1cU & vlSelf->i[0x10U]) 
                                | ((IData)(vlSelf->__PVT___32_)
                                    ? (0x1fU & (IData)(vlSelf->__PVT___53_))
                                    : 0U));
        }
    }
    vlSelf->__PVT___08_ = (1ULL + vlSelf->__PVT__attempts);
    vlSelf->__PVT___10_ = ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (6ULL > vlSelf->__PVT__attempts));
    vlSelf->__PVT___02_ = (1ULL + vlSelf->__PVT__now);
    vlSelf->__PVT___03_ = (1ULL + vlSelf->__PVT__sent);
    if ((6ULL > vlSelf->__PVT__sent0)) {
        if ((0x5fU >= (0x7fU & ((IData)(0x18U) + (IData)(vlSelf->__PVT__sent0))))) {
            vlSelf->__PVT___54_ = (3U & vlSymsp->TOP.top__DOT__destx
                                   [(0x7fU & ((IData)(0x18U) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
            vlSelf->__PVT___53_ = (3U & vlSymsp->TOP.top__DOT__desty
                                   [(0x7fU & ((IData)(0x18U) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
        } else {
            vlSelf->__PVT___54_ = 0U;
            vlSelf->__PVT___53_ = 0U;
        }
    } else {
        vlSelf->__PVT___54_ = 0U;
        vlSelf->__PVT___53_ = 0U;
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSelf->__PVT___32_) 
                                          & (IData)(vlSelf->__PVT___20_)))) {
        vlSelf->__PVT__sent0 = vlSelf->__PVT___07_;
    }
    vlSelf->__PVT___07_ = (1ULL + vlSelf->__PVT__sent0);
    vlSelf->__PVT___32_ = ((vlSelf->__PVT__attempts 
                            > vlSelf->__PVT__sent0) 
                           & VL_GTS_IQQ(64, 6ULL, vlSelf->__PVT__sent0));
}

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst__1(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst__1\n"); );
    // Body
    vlSelf->__PVT___20_ = (1U & ((~ (vlSelf->i[0x10U] 
                                     >> 4U)) | (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_1)));
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h26dc0368_0;

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst__0(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst__0\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    VlWide<16>/*511:0*/ __Vtemp_3;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & ((IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_2) 
                              >> 1U))))) {
        __Vtemp_1[0U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0U];
        __Vtemp_1[1U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[1U];
        __Vtemp_1[2U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[2U];
        __Vtemp_1[3U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[3U];
        __Vtemp_1[4U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[4U];
        __Vtemp_1[5U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[5U];
        __Vtemp_1[6U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[6U];
        __Vtemp_1[7U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[7U];
        __Vtemp_1[8U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[8U];
        __Vtemp_1[9U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[9U];
        __Vtemp_1[0xaU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xaU];
        __Vtemp_1[0xbU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xbU];
        __Vtemp_1[0xcU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xcU];
        __Vtemp_1[0xdU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xdU];
        __Vtemp_1[0xeU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xeU];
        __Vtemp_1[0xfU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xfU];
        VL_WRITEF_NX("M,%0#,%0#,0,2\n",0,64,vlSelf->__PVT__now,
                     512,__Vtemp_1.data());
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.rst)) 
                     & (6ULL > vlSelf->__PVT__attempts)))) {
        VL_WRITEF_NX("A,%0#,%0#,%0#,%0#\n",0,64,vlSelf->__PVT__now,
                     64,(0x30ULL + vlSelf->__PVT__attempts),
                     16,(IData)(vlSelf->__PVT___54_),
                     16,vlSelf->__PVT___53_);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_2))))) {
        VL_WRITEF_NX("S,%0#,%0#,%1#,%1#\n",0,64,vlSelf->__PVT__now,
                     64,(0x30ULL + vlSelf->__PVT__sent),
                     2,(3U & (vlSelf->i[0x10U] >> 2U)),
                     2,(3U & vlSelf->i[0x10U]));
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_2)))) {
        vlSelf->__PVT__sent = vlSelf->__PVT___03_;
    }
    if (vlSelf->__PVT___10_) {
        vlSelf->__PVT__attempts = vlSelf->__PVT___08_;
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__now = 0ULL;
        vlSelf->i[0x10U] = (0xfU & vlSelf->i[0x10U]);
        vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->i[0x10U] = (0x13U & vlSelf->i[0x10U]);
        vlSelf->i[0x10U] = (0x1cU & vlSelf->i[0x10U]);
    } else {
        vlSelf->__PVT__now = vlSelf->__PVT___02_;
        if (vlSelf->__PVT___20_) {
            vlSelf->i[0x10U] = ((0xfU & vlSelf->i[0x10U]) 
                                | (0x1fU & ((IData)(vlSelf->__PVT___32_) 
                                            << 4U)));
            __Vtemp_2[0U] = (IData)(vlSelf->__PVT__sent0);
            __Vtemp_2[1U] = (IData)((vlSelf->__PVT__sent0 
                                     >> 0x20U));
            __Vtemp_2[2U] = 0U;
            __Vtemp_2[3U] = 0U;
            __Vtemp_2[4U] = 0U;
            __Vtemp_2[5U] = 0U;
            __Vtemp_2[6U] = 0U;
            __Vtemp_2[7U] = 0U;
            __Vtemp_2[8U] = 0U;
            __Vtemp_2[9U] = 0U;
            __Vtemp_2[0xaU] = 0U;
            __Vtemp_2[0xbU] = 0U;
            __Vtemp_2[0xcU] = 0U;
            __Vtemp_2[0xdU] = 0U;
            __Vtemp_2[0xeU] = 0U;
            __Vtemp_2[0xfU] = 0U;
            VL_ADD_W(16, __Vtemp_3, Vtop__ConstPool__CONST_h26dc0368_0, __Vtemp_2);
            if (vlSelf->__PVT___32_) {
                vlSelf->i[0U] = __Vtemp_3[0U];
                vlSelf->i[1U] = __Vtemp_3[1U];
                vlSelf->i[2U] = __Vtemp_3[2U];
                vlSelf->i[3U] = __Vtemp_3[3U];
                vlSelf->i[4U] = __Vtemp_3[4U];
                vlSelf->i[5U] = __Vtemp_3[5U];
                vlSelf->i[6U] = __Vtemp_3[6U];
                vlSelf->i[7U] = __Vtemp_3[7U];
                vlSelf->i[8U] = __Vtemp_3[8U];
                vlSelf->i[9U] = __Vtemp_3[9U];
                vlSelf->i[0xaU] = __Vtemp_3[0xaU];
                vlSelf->i[0xbU] = __Vtemp_3[0xbU];
                vlSelf->i[0xcU] = __Vtemp_3[0xcU];
                vlSelf->i[0xdU] = __Vtemp_3[0xdU];
                vlSelf->i[0xeU] = __Vtemp_3[0xeU];
                vlSelf->i[0xfU] = __Vtemp_3[0xfU];
            } else {
                vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
                vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
                vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
                vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
                vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
                vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
                vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
                vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
                vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
                vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
                vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
                vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
                vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
                vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
                vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
                vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
            }
            vlSelf->i[0x10U] = ((0x13U & vlSelf->i[0x10U]) 
                                | (0x1fU & (((IData)(vlSelf->__PVT___32_)
                                              ? (IData)(vlSelf->__PVT___54_)
                                              : 0U) 
                                            << 2U)));
            vlSelf->i[0x10U] = ((0x1cU & vlSelf->i[0x10U]) 
                                | ((IData)(vlSelf->__PVT___32_)
                                    ? (0x1fU & (IData)(vlSelf->__PVT___53_))
                                    : 0U));
        }
    }
    vlSelf->__PVT___08_ = (1ULL + vlSelf->__PVT__attempts);
    vlSelf->__PVT___10_ = ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (6ULL > vlSelf->__PVT__attempts));
    vlSelf->__PVT___02_ = (1ULL + vlSelf->__PVT__now);
    vlSelf->__PVT___03_ = (1ULL + vlSelf->__PVT__sent);
    if ((6ULL > vlSelf->__PVT__sent0)) {
        if ((0x5fU >= (0x7fU & ((IData)(0x30U) + (IData)(vlSelf->__PVT__sent0))))) {
            vlSelf->__PVT___54_ = (3U & vlSymsp->TOP.top__DOT__destx
                                   [(0x7fU & ((IData)(0x30U) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
            vlSelf->__PVT___53_ = (3U & vlSymsp->TOP.top__DOT__desty
                                   [(0x7fU & ((IData)(0x30U) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
        } else {
            vlSelf->__PVT___54_ = 0U;
            vlSelf->__PVT___53_ = 0U;
        }
    } else {
        vlSelf->__PVT___54_ = 0U;
        vlSelf->__PVT___53_ = 0U;
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSelf->__PVT___32_) 
                                          & (IData)(vlSelf->__PVT___20_)))) {
        vlSelf->__PVT__sent0 = vlSelf->__PVT___07_;
    }
    vlSelf->__PVT___07_ = (1ULL + vlSelf->__PVT__sent0);
    vlSelf->__PVT___32_ = ((vlSelf->__PVT__attempts 
                            > vlSelf->__PVT__sent0) 
                           & VL_GTS_IQQ(64, 6ULL, vlSelf->__PVT__sent0));
}

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst__1(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst__1\n"); );
    // Body
    vlSelf->__PVT___20_ = (1U & ((~ (vlSelf->i[0x10U] 
                                     >> 4U)) | (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_2)));
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h40b48568_0;

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst__0(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst__0\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    VlWide<16>/*511:0*/ __Vtemp_3;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & ((IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_3) 
                              >> 1U))))) {
        __Vtemp_1[0U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0U];
        __Vtemp_1[1U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[1U];
        __Vtemp_1[2U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[2U];
        __Vtemp_1[3U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[3U];
        __Vtemp_1[4U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[4U];
        __Vtemp_1[5U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[5U];
        __Vtemp_1[6U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[6U];
        __Vtemp_1[7U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[7U];
        __Vtemp_1[8U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[8U];
        __Vtemp_1[9U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[9U];
        __Vtemp_1[0xaU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xaU];
        __Vtemp_1[0xbU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xbU];
        __Vtemp_1[0xcU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xcU];
        __Vtemp_1[0xdU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xdU];
        __Vtemp_1[0xeU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xeU];
        __Vtemp_1[0xfU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xfU];
        VL_WRITEF_NX("M,%0#,%0#,0,3\n",0,64,vlSelf->__PVT__now,
                     512,__Vtemp_1.data());
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.rst)) 
                     & (6ULL > vlSelf->__PVT__attempts)))) {
        VL_WRITEF_NX("A,%0#,%0#,%0#,%0#\n",0,64,vlSelf->__PVT__now,
                     64,(0x48ULL + vlSelf->__PVT__attempts),
                     16,(IData)(vlSelf->__PVT___54_),
                     16,vlSelf->__PVT___53_);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_3))))) {
        VL_WRITEF_NX("S,%0#,%0#,%1#,%1#\n",0,64,vlSelf->__PVT__now,
                     64,(0x48ULL + vlSelf->__PVT__sent),
                     2,(3U & (vlSelf->i[0x10U] >> 2U)),
                     2,(3U & vlSelf->i[0x10U]));
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_3)))) {
        vlSelf->__PVT__sent = vlSelf->__PVT___03_;
    }
    if (vlSelf->__PVT___10_) {
        vlSelf->__PVT__attempts = vlSelf->__PVT___08_;
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__now = 0ULL;
        vlSelf->i[0x10U] = (0xfU & vlSelf->i[0x10U]);
        vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->i[0x10U] = (0x13U & vlSelf->i[0x10U]);
        vlSelf->i[0x10U] = (0x1cU & vlSelf->i[0x10U]);
    } else {
        vlSelf->__PVT__now = vlSelf->__PVT___02_;
        if (vlSelf->__PVT___20_) {
            vlSelf->i[0x10U] = ((0xfU & vlSelf->i[0x10U]) 
                                | (0x1fU & ((IData)(vlSelf->__PVT___32_) 
                                            << 4U)));
            __Vtemp_2[0U] = (IData)(vlSelf->__PVT__sent0);
            __Vtemp_2[1U] = (IData)((vlSelf->__PVT__sent0 
                                     >> 0x20U));
            __Vtemp_2[2U] = 0U;
            __Vtemp_2[3U] = 0U;
            __Vtemp_2[4U] = 0U;
            __Vtemp_2[5U] = 0U;
            __Vtemp_2[6U] = 0U;
            __Vtemp_2[7U] = 0U;
            __Vtemp_2[8U] = 0U;
            __Vtemp_2[9U] = 0U;
            __Vtemp_2[0xaU] = 0U;
            __Vtemp_2[0xbU] = 0U;
            __Vtemp_2[0xcU] = 0U;
            __Vtemp_2[0xdU] = 0U;
            __Vtemp_2[0xeU] = 0U;
            __Vtemp_2[0xfU] = 0U;
            VL_ADD_W(16, __Vtemp_3, Vtop__ConstPool__CONST_h40b48568_0, __Vtemp_2);
            if (vlSelf->__PVT___32_) {
                vlSelf->i[0U] = __Vtemp_3[0U];
                vlSelf->i[1U] = __Vtemp_3[1U];
                vlSelf->i[2U] = __Vtemp_3[2U];
                vlSelf->i[3U] = __Vtemp_3[3U];
                vlSelf->i[4U] = __Vtemp_3[4U];
                vlSelf->i[5U] = __Vtemp_3[5U];
                vlSelf->i[6U] = __Vtemp_3[6U];
                vlSelf->i[7U] = __Vtemp_3[7U];
                vlSelf->i[8U] = __Vtemp_3[8U];
                vlSelf->i[9U] = __Vtemp_3[9U];
                vlSelf->i[0xaU] = __Vtemp_3[0xaU];
                vlSelf->i[0xbU] = __Vtemp_3[0xbU];
                vlSelf->i[0xcU] = __Vtemp_3[0xcU];
                vlSelf->i[0xdU] = __Vtemp_3[0xdU];
                vlSelf->i[0xeU] = __Vtemp_3[0xeU];
                vlSelf->i[0xfU] = __Vtemp_3[0xfU];
            } else {
                vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
                vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
                vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
                vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
                vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
                vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
                vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
                vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
                vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
                vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
                vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
                vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
                vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
                vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
                vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
                vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
            }
            vlSelf->i[0x10U] = ((0x13U & vlSelf->i[0x10U]) 
                                | (0x1fU & (((IData)(vlSelf->__PVT___32_)
                                              ? (IData)(vlSelf->__PVT___54_)
                                              : 0U) 
                                            << 2U)));
            vlSelf->i[0x10U] = ((0x1cU & vlSelf->i[0x10U]) 
                                | ((IData)(vlSelf->__PVT___32_)
                                    ? (0x1fU & (IData)(vlSelf->__PVT___53_))
                                    : 0U));
        }
    }
    vlSelf->__PVT___08_ = (1ULL + vlSelf->__PVT__attempts);
    vlSelf->__PVT___10_ = ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (6ULL > vlSelf->__PVT__attempts));
    vlSelf->__PVT___02_ = (1ULL + vlSelf->__PVT__now);
    vlSelf->__PVT___03_ = (1ULL + vlSelf->__PVT__sent);
    if ((6ULL > vlSelf->__PVT__sent0)) {
        if ((0x5fU >= (0x7fU & ((IData)(0x48U) + (IData)(vlSelf->__PVT__sent0))))) {
            vlSelf->__PVT___54_ = (3U & vlSymsp->TOP.top__DOT__destx
                                   [(0x7fU & ((IData)(0x48U) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
            vlSelf->__PVT___53_ = (3U & vlSymsp->TOP.top__DOT__desty
                                   [(0x7fU & ((IData)(0x48U) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
        } else {
            vlSelf->__PVT___54_ = 0U;
            vlSelf->__PVT___53_ = 0U;
        }
    } else {
        vlSelf->__PVT___54_ = 0U;
        vlSelf->__PVT___53_ = 0U;
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSelf->__PVT___32_) 
                                          & (IData)(vlSelf->__PVT___20_)))) {
        vlSelf->__PVT__sent0 = vlSelf->__PVT___07_;
    }
    vlSelf->__PVT___07_ = (1ULL + vlSelf->__PVT__sent0);
    vlSelf->__PVT___32_ = ((vlSelf->__PVT__attempts 
                            > vlSelf->__PVT__sent0) 
                           & VL_GTS_IQQ(64, 6ULL, vlSelf->__PVT__sent0));
}

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst__1(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst__1\n"); );
    // Body
    vlSelf->__PVT___20_ = (1U & ((~ (vlSelf->i[0x10U] 
                                     >> 4U)) | (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_3)));
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h4ce3e598_0;

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst__0(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst__0\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    VlWide<16>/*511:0*/ __Vtemp_3;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & ((IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_4) 
                              >> 1U))))) {
        __Vtemp_1[0U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0U];
        __Vtemp_1[1U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[1U];
        __Vtemp_1[2U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[2U];
        __Vtemp_1[3U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[3U];
        __Vtemp_1[4U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[4U];
        __Vtemp_1[5U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[5U];
        __Vtemp_1[6U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[6U];
        __Vtemp_1[7U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[7U];
        __Vtemp_1[8U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[8U];
        __Vtemp_1[9U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[9U];
        __Vtemp_1[0xaU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xaU];
        __Vtemp_1[0xbU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xbU];
        __Vtemp_1[0xcU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xcU];
        __Vtemp_1[0xdU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xdU];
        __Vtemp_1[0xeU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xeU];
        __Vtemp_1[0xfU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xfU];
        VL_WRITEF_NX("M,%0#,%0#,1,0\n",0,64,vlSelf->__PVT__now,
                     512,__Vtemp_1.data());
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.rst)) 
                     & (6ULL > vlSelf->__PVT__attempts)))) {
        VL_WRITEF_NX("A,%0#,%0#,%0#,%0#\n",0,64,vlSelf->__PVT__now,
                     64,(6ULL + vlSelf->__PVT__attempts),
                     16,(IData)(vlSelf->__PVT___54_),
                     16,vlSelf->__PVT___53_);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_4))))) {
        VL_WRITEF_NX("S,%0#,%0#,%1#,%1#\n",0,64,vlSelf->__PVT__now,
                     64,(6ULL + vlSelf->__PVT__sent),
                     2,(3U & (vlSelf->i[0x10U] >> 2U)),
                     2,(3U & vlSelf->i[0x10U]));
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_4)))) {
        vlSelf->__PVT__sent = vlSelf->__PVT___03_;
    }
    if (vlSelf->__PVT___10_) {
        vlSelf->__PVT__attempts = vlSelf->__PVT___08_;
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__now = 0ULL;
        vlSelf->i[0x10U] = (0xfU & vlSelf->i[0x10U]);
        vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->i[0x10U] = (0x13U & vlSelf->i[0x10U]);
        vlSelf->i[0x10U] = (0x1cU & vlSelf->i[0x10U]);
    } else {
        vlSelf->__PVT__now = vlSelf->__PVT___02_;
        if (vlSelf->__PVT___20_) {
            vlSelf->i[0x10U] = ((0xfU & vlSelf->i[0x10U]) 
                                | (0x1fU & ((IData)(vlSelf->__PVT___32_) 
                                            << 4U)));
            __Vtemp_2[0U] = (IData)(vlSelf->__PVT__sent0);
            __Vtemp_2[1U] = (IData)((vlSelf->__PVT__sent0 
                                     >> 0x20U));
            __Vtemp_2[2U] = 0U;
            __Vtemp_2[3U] = 0U;
            __Vtemp_2[4U] = 0U;
            __Vtemp_2[5U] = 0U;
            __Vtemp_2[6U] = 0U;
            __Vtemp_2[7U] = 0U;
            __Vtemp_2[8U] = 0U;
            __Vtemp_2[9U] = 0U;
            __Vtemp_2[0xaU] = 0U;
            __Vtemp_2[0xbU] = 0U;
            __Vtemp_2[0xcU] = 0U;
            __Vtemp_2[0xdU] = 0U;
            __Vtemp_2[0xeU] = 0U;
            __Vtemp_2[0xfU] = 0U;
            VL_ADD_W(16, __Vtemp_3, Vtop__ConstPool__CONST_h4ce3e598_0, __Vtemp_2);
            if (vlSelf->__PVT___32_) {
                vlSelf->i[0U] = __Vtemp_3[0U];
                vlSelf->i[1U] = __Vtemp_3[1U];
                vlSelf->i[2U] = __Vtemp_3[2U];
                vlSelf->i[3U] = __Vtemp_3[3U];
                vlSelf->i[4U] = __Vtemp_3[4U];
                vlSelf->i[5U] = __Vtemp_3[5U];
                vlSelf->i[6U] = __Vtemp_3[6U];
                vlSelf->i[7U] = __Vtemp_3[7U];
                vlSelf->i[8U] = __Vtemp_3[8U];
                vlSelf->i[9U] = __Vtemp_3[9U];
                vlSelf->i[0xaU] = __Vtemp_3[0xaU];
                vlSelf->i[0xbU] = __Vtemp_3[0xbU];
                vlSelf->i[0xcU] = __Vtemp_3[0xcU];
                vlSelf->i[0xdU] = __Vtemp_3[0xdU];
                vlSelf->i[0xeU] = __Vtemp_3[0xeU];
                vlSelf->i[0xfU] = __Vtemp_3[0xfU];
            } else {
                vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
                vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
                vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
                vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
                vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
                vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
                vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
                vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
                vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
                vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
                vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
                vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
                vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
                vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
                vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
                vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
            }
            vlSelf->i[0x10U] = ((0x13U & vlSelf->i[0x10U]) 
                                | (0x1fU & (((IData)(vlSelf->__PVT___32_)
                                              ? (IData)(vlSelf->__PVT___54_)
                                              : 0U) 
                                            << 2U)));
            vlSelf->i[0x10U] = ((0x1cU & vlSelf->i[0x10U]) 
                                | ((IData)(vlSelf->__PVT___32_)
                                    ? (0x1fU & (IData)(vlSelf->__PVT___53_))
                                    : 0U));
        }
    }
    vlSelf->__PVT___08_ = (1ULL + vlSelf->__PVT__attempts);
    vlSelf->__PVT___10_ = ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (6ULL > vlSelf->__PVT__attempts));
    vlSelf->__PVT___02_ = (1ULL + vlSelf->__PVT__now);
    vlSelf->__PVT___03_ = (1ULL + vlSelf->__PVT__sent);
    if ((6ULL > vlSelf->__PVT__sent0)) {
        if ((0x5fU >= (0x7fU & ((IData)(6U) + (IData)(vlSelf->__PVT__sent0))))) {
            vlSelf->__PVT___54_ = (3U & vlSymsp->TOP.top__DOT__destx
                                   [(0x7fU & ((IData)(6U) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
            vlSelf->__PVT___53_ = (3U & vlSymsp->TOP.top__DOT__desty
                                   [(0x7fU & ((IData)(6U) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
        } else {
            vlSelf->__PVT___54_ = 0U;
            vlSelf->__PVT___53_ = 0U;
        }
    } else {
        vlSelf->__PVT___54_ = 0U;
        vlSelf->__PVT___53_ = 0U;
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSelf->__PVT___32_) 
                                          & (IData)(vlSelf->__PVT___20_)))) {
        vlSelf->__PVT__sent0 = vlSelf->__PVT___07_;
    }
    vlSelf->__PVT___07_ = (1ULL + vlSelf->__PVT__sent0);
    vlSelf->__PVT___32_ = ((vlSelf->__PVT__attempts 
                            > vlSelf->__PVT__sent0) 
                           & VL_GTS_IQQ(64, 6ULL, vlSelf->__PVT__sent0));
}

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst__1(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst__1\n"); );
    // Body
    vlSelf->__PVT___20_ = (1U & ((~ (vlSelf->i[0x10U] 
                                     >> 4U)) | (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_4)));
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_hf33fc0cb_0;

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst__0(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst__0\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    VlWide<16>/*511:0*/ __Vtemp_3;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & ((IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_5) 
                              >> 1U))))) {
        __Vtemp_1[0U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0U];
        __Vtemp_1[1U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[1U];
        __Vtemp_1[2U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[2U];
        __Vtemp_1[3U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[3U];
        __Vtemp_1[4U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[4U];
        __Vtemp_1[5U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[5U];
        __Vtemp_1[6U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[6U];
        __Vtemp_1[7U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[7U];
        __Vtemp_1[8U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[8U];
        __Vtemp_1[9U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[9U];
        __Vtemp_1[0xaU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xaU];
        __Vtemp_1[0xbU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xbU];
        __Vtemp_1[0xcU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xcU];
        __Vtemp_1[0xdU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xdU];
        __Vtemp_1[0xeU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xeU];
        __Vtemp_1[0xfU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xfU];
        VL_WRITEF_NX("M,%0#,%0#,1,1\n",0,64,vlSelf->__PVT__now,
                     512,__Vtemp_1.data());
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.rst)) 
                     & (6ULL > vlSelf->__PVT__attempts)))) {
        VL_WRITEF_NX("A,%0#,%0#,%0#,%0#\n",0,64,vlSelf->__PVT__now,
                     64,(0x1eULL + vlSelf->__PVT__attempts),
                     16,(IData)(vlSelf->__PVT___54_),
                     16,vlSelf->__PVT___53_);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_5))))) {
        VL_WRITEF_NX("S,%0#,%0#,%1#,%1#\n",0,64,vlSelf->__PVT__now,
                     64,(0x1eULL + vlSelf->__PVT__sent),
                     2,(3U & (vlSelf->i[0x10U] >> 2U)),
                     2,(3U & vlSelf->i[0x10U]));
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_5)))) {
        vlSelf->__PVT__sent = vlSelf->__PVT___03_;
    }
    if (vlSelf->__PVT___10_) {
        vlSelf->__PVT__attempts = vlSelf->__PVT___08_;
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__now = 0ULL;
        vlSelf->i[0x10U] = (0xfU & vlSelf->i[0x10U]);
        vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->i[0x10U] = (0x13U & vlSelf->i[0x10U]);
        vlSelf->i[0x10U] = (0x1cU & vlSelf->i[0x10U]);
    } else {
        vlSelf->__PVT__now = vlSelf->__PVT___02_;
        if (vlSelf->__PVT___20_) {
            vlSelf->i[0x10U] = ((0xfU & vlSelf->i[0x10U]) 
                                | (0x1fU & ((IData)(vlSelf->__PVT___32_) 
                                            << 4U)));
            __Vtemp_2[0U] = (IData)(vlSelf->__PVT__sent0);
            __Vtemp_2[1U] = (IData)((vlSelf->__PVT__sent0 
                                     >> 0x20U));
            __Vtemp_2[2U] = 0U;
            __Vtemp_2[3U] = 0U;
            __Vtemp_2[4U] = 0U;
            __Vtemp_2[5U] = 0U;
            __Vtemp_2[6U] = 0U;
            __Vtemp_2[7U] = 0U;
            __Vtemp_2[8U] = 0U;
            __Vtemp_2[9U] = 0U;
            __Vtemp_2[0xaU] = 0U;
            __Vtemp_2[0xbU] = 0U;
            __Vtemp_2[0xcU] = 0U;
            __Vtemp_2[0xdU] = 0U;
            __Vtemp_2[0xeU] = 0U;
            __Vtemp_2[0xfU] = 0U;
            VL_ADD_W(16, __Vtemp_3, Vtop__ConstPool__CONST_hf33fc0cb_0, __Vtemp_2);
            if (vlSelf->__PVT___32_) {
                vlSelf->i[0U] = __Vtemp_3[0U];
                vlSelf->i[1U] = __Vtemp_3[1U];
                vlSelf->i[2U] = __Vtemp_3[2U];
                vlSelf->i[3U] = __Vtemp_3[3U];
                vlSelf->i[4U] = __Vtemp_3[4U];
                vlSelf->i[5U] = __Vtemp_3[5U];
                vlSelf->i[6U] = __Vtemp_3[6U];
                vlSelf->i[7U] = __Vtemp_3[7U];
                vlSelf->i[8U] = __Vtemp_3[8U];
                vlSelf->i[9U] = __Vtemp_3[9U];
                vlSelf->i[0xaU] = __Vtemp_3[0xaU];
                vlSelf->i[0xbU] = __Vtemp_3[0xbU];
                vlSelf->i[0xcU] = __Vtemp_3[0xcU];
                vlSelf->i[0xdU] = __Vtemp_3[0xdU];
                vlSelf->i[0xeU] = __Vtemp_3[0xeU];
                vlSelf->i[0xfU] = __Vtemp_3[0xfU];
            } else {
                vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
                vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
                vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
                vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
                vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
                vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
                vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
                vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
                vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
                vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
                vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
                vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
                vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
                vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
                vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
                vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
            }
            vlSelf->i[0x10U] = ((0x13U & vlSelf->i[0x10U]) 
                                | (0x1fU & (((IData)(vlSelf->__PVT___32_)
                                              ? (IData)(vlSelf->__PVT___54_)
                                              : 0U) 
                                            << 2U)));
            vlSelf->i[0x10U] = ((0x1cU & vlSelf->i[0x10U]) 
                                | ((IData)(vlSelf->__PVT___32_)
                                    ? (0x1fU & (IData)(vlSelf->__PVT___53_))
                                    : 0U));
        }
    }
    vlSelf->__PVT___08_ = (1ULL + vlSelf->__PVT__attempts);
    vlSelf->__PVT___10_ = ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (6ULL > vlSelf->__PVT__attempts));
    vlSelf->__PVT___02_ = (1ULL + vlSelf->__PVT__now);
    vlSelf->__PVT___03_ = (1ULL + vlSelf->__PVT__sent);
    if ((6ULL > vlSelf->__PVT__sent0)) {
        if ((0x5fU >= (0x7fU & ((IData)(0x1eU) + (IData)(vlSelf->__PVT__sent0))))) {
            vlSelf->__PVT___54_ = (3U & vlSymsp->TOP.top__DOT__destx
                                   [(0x7fU & ((IData)(0x1eU) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
            vlSelf->__PVT___53_ = (3U & vlSymsp->TOP.top__DOT__desty
                                   [(0x7fU & ((IData)(0x1eU) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
        } else {
            vlSelf->__PVT___54_ = 0U;
            vlSelf->__PVT___53_ = 0U;
        }
    } else {
        vlSelf->__PVT___54_ = 0U;
        vlSelf->__PVT___53_ = 0U;
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSelf->__PVT___32_) 
                                          & (IData)(vlSelf->__PVT___20_)))) {
        vlSelf->__PVT__sent0 = vlSelf->__PVT___07_;
    }
    vlSelf->__PVT___07_ = (1ULL + vlSelf->__PVT__sent0);
    vlSelf->__PVT___32_ = ((vlSelf->__PVT__attempts 
                            > vlSelf->__PVT__sent0) 
                           & VL_GTS_IQQ(64, 6ULL, vlSelf->__PVT__sent0));
}

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst__1(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst__1\n"); );
    // Body
    vlSelf->__PVT___20_ = (1U & ((~ (vlSelf->i[0x10U] 
                                     >> 4U)) | (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_5)));
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h2dd65daf_0;

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst__0(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst__0\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    VlWide<16>/*511:0*/ __Vtemp_3;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & ((IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_6) 
                              >> 1U))))) {
        __Vtemp_1[0U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0U];
        __Vtemp_1[1U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[1U];
        __Vtemp_1[2U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[2U];
        __Vtemp_1[3U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[3U];
        __Vtemp_1[4U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[4U];
        __Vtemp_1[5U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[5U];
        __Vtemp_1[6U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[6U];
        __Vtemp_1[7U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[7U];
        __Vtemp_1[8U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[8U];
        __Vtemp_1[9U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[9U];
        __Vtemp_1[0xaU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xaU];
        __Vtemp_1[0xbU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xbU];
        __Vtemp_1[0xcU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xcU];
        __Vtemp_1[0xdU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xdU];
        __Vtemp_1[0xeU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xeU];
        __Vtemp_1[0xfU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xfU];
        VL_WRITEF_NX("M,%0#,%0#,1,2\n",0,64,vlSelf->__PVT__now,
                     512,__Vtemp_1.data());
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.rst)) 
                     & (6ULL > vlSelf->__PVT__attempts)))) {
        VL_WRITEF_NX("A,%0#,%0#,%0#,%0#\n",0,64,vlSelf->__PVT__now,
                     64,(0x36ULL + vlSelf->__PVT__attempts),
                     16,(IData)(vlSelf->__PVT___54_),
                     16,vlSelf->__PVT___53_);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_6))))) {
        VL_WRITEF_NX("S,%0#,%0#,%1#,%1#\n",0,64,vlSelf->__PVT__now,
                     64,(0x36ULL + vlSelf->__PVT__sent),
                     2,(3U & (vlSelf->i[0x10U] >> 2U)),
                     2,(3U & vlSelf->i[0x10U]));
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_6)))) {
        vlSelf->__PVT__sent = vlSelf->__PVT___03_;
    }
    if (vlSelf->__PVT___10_) {
        vlSelf->__PVT__attempts = vlSelf->__PVT___08_;
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__now = 0ULL;
        vlSelf->i[0x10U] = (0xfU & vlSelf->i[0x10U]);
        vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->i[0x10U] = (0x13U & vlSelf->i[0x10U]);
        vlSelf->i[0x10U] = (0x1cU & vlSelf->i[0x10U]);
    } else {
        vlSelf->__PVT__now = vlSelf->__PVT___02_;
        if (vlSelf->__PVT___20_) {
            vlSelf->i[0x10U] = ((0xfU & vlSelf->i[0x10U]) 
                                | (0x1fU & ((IData)(vlSelf->__PVT___32_) 
                                            << 4U)));
            __Vtemp_2[0U] = (IData)(vlSelf->__PVT__sent0);
            __Vtemp_2[1U] = (IData)((vlSelf->__PVT__sent0 
                                     >> 0x20U));
            __Vtemp_2[2U] = 0U;
            __Vtemp_2[3U] = 0U;
            __Vtemp_2[4U] = 0U;
            __Vtemp_2[5U] = 0U;
            __Vtemp_2[6U] = 0U;
            __Vtemp_2[7U] = 0U;
            __Vtemp_2[8U] = 0U;
            __Vtemp_2[9U] = 0U;
            __Vtemp_2[0xaU] = 0U;
            __Vtemp_2[0xbU] = 0U;
            __Vtemp_2[0xcU] = 0U;
            __Vtemp_2[0xdU] = 0U;
            __Vtemp_2[0xeU] = 0U;
            __Vtemp_2[0xfU] = 0U;
            VL_ADD_W(16, __Vtemp_3, Vtop__ConstPool__CONST_h2dd65daf_0, __Vtemp_2);
            if (vlSelf->__PVT___32_) {
                vlSelf->i[0U] = __Vtemp_3[0U];
                vlSelf->i[1U] = __Vtemp_3[1U];
                vlSelf->i[2U] = __Vtemp_3[2U];
                vlSelf->i[3U] = __Vtemp_3[3U];
                vlSelf->i[4U] = __Vtemp_3[4U];
                vlSelf->i[5U] = __Vtemp_3[5U];
                vlSelf->i[6U] = __Vtemp_3[6U];
                vlSelf->i[7U] = __Vtemp_3[7U];
                vlSelf->i[8U] = __Vtemp_3[8U];
                vlSelf->i[9U] = __Vtemp_3[9U];
                vlSelf->i[0xaU] = __Vtemp_3[0xaU];
                vlSelf->i[0xbU] = __Vtemp_3[0xbU];
                vlSelf->i[0xcU] = __Vtemp_3[0xcU];
                vlSelf->i[0xdU] = __Vtemp_3[0xdU];
                vlSelf->i[0xeU] = __Vtemp_3[0xeU];
                vlSelf->i[0xfU] = __Vtemp_3[0xfU];
            } else {
                vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
                vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
                vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
                vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
                vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
                vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
                vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
                vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
                vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
                vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
                vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
                vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
                vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
                vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
                vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
                vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
            }
            vlSelf->i[0x10U] = ((0x13U & vlSelf->i[0x10U]) 
                                | (0x1fU & (((IData)(vlSelf->__PVT___32_)
                                              ? (IData)(vlSelf->__PVT___54_)
                                              : 0U) 
                                            << 2U)));
            vlSelf->i[0x10U] = ((0x1cU & vlSelf->i[0x10U]) 
                                | ((IData)(vlSelf->__PVT___32_)
                                    ? (0x1fU & (IData)(vlSelf->__PVT___53_))
                                    : 0U));
        }
    }
    vlSelf->__PVT___08_ = (1ULL + vlSelf->__PVT__attempts);
    vlSelf->__PVT___10_ = ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (6ULL > vlSelf->__PVT__attempts));
    vlSelf->__PVT___02_ = (1ULL + vlSelf->__PVT__now);
    vlSelf->__PVT___03_ = (1ULL + vlSelf->__PVT__sent);
    if ((6ULL > vlSelf->__PVT__sent0)) {
        if ((0x5fU >= (0x7fU & ((IData)(0x36U) + (IData)(vlSelf->__PVT__sent0))))) {
            vlSelf->__PVT___54_ = (3U & vlSymsp->TOP.top__DOT__destx
                                   [(0x7fU & ((IData)(0x36U) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
            vlSelf->__PVT___53_ = (3U & vlSymsp->TOP.top__DOT__desty
                                   [(0x7fU & ((IData)(0x36U) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
        } else {
            vlSelf->__PVT___54_ = 0U;
            vlSelf->__PVT___53_ = 0U;
        }
    } else {
        vlSelf->__PVT___54_ = 0U;
        vlSelf->__PVT___53_ = 0U;
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSelf->__PVT___32_) 
                                          & (IData)(vlSelf->__PVT___20_)))) {
        vlSelf->__PVT__sent0 = vlSelf->__PVT___07_;
    }
    vlSelf->__PVT___07_ = (1ULL + vlSelf->__PVT__sent0);
    vlSelf->__PVT___32_ = ((vlSelf->__PVT__attempts 
                            > vlSelf->__PVT__sent0) 
                           & VL_GTS_IQQ(64, 6ULL, vlSelf->__PVT__sent0));
}

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst__1(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst__1\n"); );
    // Body
    vlSelf->__PVT___20_ = (1U & ((~ (vlSelf->i[0x10U] 
                                     >> 4U)) | (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_6)));
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h9432eb0f_0;

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst__0(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst__0\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    VlWide<16>/*511:0*/ __Vtemp_3;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & ((IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_7) 
                              >> 1U))))) {
        __Vtemp_1[0U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0U];
        __Vtemp_1[1U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[1U];
        __Vtemp_1[2U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[2U];
        __Vtemp_1[3U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[3U];
        __Vtemp_1[4U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[4U];
        __Vtemp_1[5U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[5U];
        __Vtemp_1[6U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[6U];
        __Vtemp_1[7U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[7U];
        __Vtemp_1[8U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[8U];
        __Vtemp_1[9U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[9U];
        __Vtemp_1[0xaU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xaU];
        __Vtemp_1[0xbU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xbU];
        __Vtemp_1[0xcU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xcU];
        __Vtemp_1[0xdU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xdU];
        __Vtemp_1[0xeU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xeU];
        __Vtemp_1[0xfU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xfU];
        VL_WRITEF_NX("M,%0#,%0#,1,3\n",0,64,vlSelf->__PVT__now,
                     512,__Vtemp_1.data());
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.rst)) 
                     & (6ULL > vlSelf->__PVT__attempts)))) {
        VL_WRITEF_NX("A,%0#,%0#,%0#,%0#\n",0,64,vlSelf->__PVT__now,
                     64,(0x4eULL + vlSelf->__PVT__attempts),
                     16,(IData)(vlSelf->__PVT___54_),
                     16,vlSelf->__PVT___53_);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_7))))) {
        VL_WRITEF_NX("S,%0#,%0#,%1#,%1#\n",0,64,vlSelf->__PVT__now,
                     64,(0x4eULL + vlSelf->__PVT__sent),
                     2,(3U & (vlSelf->i[0x10U] >> 2U)),
                     2,(3U & vlSelf->i[0x10U]));
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_7)))) {
        vlSelf->__PVT__sent = vlSelf->__PVT___03_;
    }
    if (vlSelf->__PVT___10_) {
        vlSelf->__PVT__attempts = vlSelf->__PVT___08_;
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__now = 0ULL;
        vlSelf->i[0x10U] = (0xfU & vlSelf->i[0x10U]);
        vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->i[0x10U] = (0x13U & vlSelf->i[0x10U]);
        vlSelf->i[0x10U] = (0x1cU & vlSelf->i[0x10U]);
    } else {
        vlSelf->__PVT__now = vlSelf->__PVT___02_;
        if (vlSelf->__PVT___20_) {
            vlSelf->i[0x10U] = ((0xfU & vlSelf->i[0x10U]) 
                                | (0x1fU & ((IData)(vlSelf->__PVT___32_) 
                                            << 4U)));
            __Vtemp_2[0U] = (IData)(vlSelf->__PVT__sent0);
            __Vtemp_2[1U] = (IData)((vlSelf->__PVT__sent0 
                                     >> 0x20U));
            __Vtemp_2[2U] = 0U;
            __Vtemp_2[3U] = 0U;
            __Vtemp_2[4U] = 0U;
            __Vtemp_2[5U] = 0U;
            __Vtemp_2[6U] = 0U;
            __Vtemp_2[7U] = 0U;
            __Vtemp_2[8U] = 0U;
            __Vtemp_2[9U] = 0U;
            __Vtemp_2[0xaU] = 0U;
            __Vtemp_2[0xbU] = 0U;
            __Vtemp_2[0xcU] = 0U;
            __Vtemp_2[0xdU] = 0U;
            __Vtemp_2[0xeU] = 0U;
            __Vtemp_2[0xfU] = 0U;
            VL_ADD_W(16, __Vtemp_3, Vtop__ConstPool__CONST_h9432eb0f_0, __Vtemp_2);
            if (vlSelf->__PVT___32_) {
                vlSelf->i[0U] = __Vtemp_3[0U];
                vlSelf->i[1U] = __Vtemp_3[1U];
                vlSelf->i[2U] = __Vtemp_3[2U];
                vlSelf->i[3U] = __Vtemp_3[3U];
                vlSelf->i[4U] = __Vtemp_3[4U];
                vlSelf->i[5U] = __Vtemp_3[5U];
                vlSelf->i[6U] = __Vtemp_3[6U];
                vlSelf->i[7U] = __Vtemp_3[7U];
                vlSelf->i[8U] = __Vtemp_3[8U];
                vlSelf->i[9U] = __Vtemp_3[9U];
                vlSelf->i[0xaU] = __Vtemp_3[0xaU];
                vlSelf->i[0xbU] = __Vtemp_3[0xbU];
                vlSelf->i[0xcU] = __Vtemp_3[0xcU];
                vlSelf->i[0xdU] = __Vtemp_3[0xdU];
                vlSelf->i[0xeU] = __Vtemp_3[0xeU];
                vlSelf->i[0xfU] = __Vtemp_3[0xfU];
            } else {
                vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
                vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
                vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
                vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
                vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
                vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
                vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
                vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
                vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
                vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
                vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
                vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
                vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
                vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
                vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
                vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
            }
            vlSelf->i[0x10U] = ((0x13U & vlSelf->i[0x10U]) 
                                | (0x1fU & (((IData)(vlSelf->__PVT___32_)
                                              ? (IData)(vlSelf->__PVT___54_)
                                              : 0U) 
                                            << 2U)));
            vlSelf->i[0x10U] = ((0x1cU & vlSelf->i[0x10U]) 
                                | ((IData)(vlSelf->__PVT___32_)
                                    ? (0x1fU & (IData)(vlSelf->__PVT___53_))
                                    : 0U));
        }
    }
    vlSelf->__PVT___08_ = (1ULL + vlSelf->__PVT__attempts);
    vlSelf->__PVT___10_ = ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (6ULL > vlSelf->__PVT__attempts));
    vlSelf->__PVT___02_ = (1ULL + vlSelf->__PVT__now);
    vlSelf->__PVT___03_ = (1ULL + vlSelf->__PVT__sent);
    if ((6ULL > vlSelf->__PVT__sent0)) {
        if ((0x5fU >= (0x7fU & ((IData)(0x4eU) + (IData)(vlSelf->__PVT__sent0))))) {
            vlSelf->__PVT___54_ = (3U & vlSymsp->TOP.top__DOT__destx
                                   [(0x7fU & ((IData)(0x4eU) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
            vlSelf->__PVT___53_ = (3U & vlSymsp->TOP.top__DOT__desty
                                   [(0x7fU & ((IData)(0x4eU) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
        } else {
            vlSelf->__PVT___54_ = 0U;
            vlSelf->__PVT___53_ = 0U;
        }
    } else {
        vlSelf->__PVT___54_ = 0U;
        vlSelf->__PVT___53_ = 0U;
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSelf->__PVT___32_) 
                                          & (IData)(vlSelf->__PVT___20_)))) {
        vlSelf->__PVT__sent0 = vlSelf->__PVT___07_;
    }
    vlSelf->__PVT___07_ = (1ULL + vlSelf->__PVT__sent0);
    vlSelf->__PVT___32_ = ((vlSelf->__PVT__attempts 
                            > vlSelf->__PVT__sent0) 
                           & VL_GTS_IQQ(64, 6ULL, vlSelf->__PVT__sent0));
}

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst__1(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst__1\n"); );
    // Body
    vlSelf->__PVT___20_ = (1U & ((~ (vlSelf->i[0x10U] 
                                     >> 4U)) | (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_7)));
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h26aa42a1_0;

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst__0(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst__0\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    VlWide<16>/*511:0*/ __Vtemp_3;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & ((IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_8) 
                              >> 1U))))) {
        __Vtemp_1[0U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0U];
        __Vtemp_1[1U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[1U];
        __Vtemp_1[2U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[2U];
        __Vtemp_1[3U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[3U];
        __Vtemp_1[4U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[4U];
        __Vtemp_1[5U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[5U];
        __Vtemp_1[6U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[6U];
        __Vtemp_1[7U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[7U];
        __Vtemp_1[8U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[8U];
        __Vtemp_1[9U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[9U];
        __Vtemp_1[0xaU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xaU];
        __Vtemp_1[0xbU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xbU];
        __Vtemp_1[0xcU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xcU];
        __Vtemp_1[0xdU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xdU];
        __Vtemp_1[0xeU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xeU];
        __Vtemp_1[0xfU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xfU];
        VL_WRITEF_NX("M,%0#,%0#,2,0\n",0,64,vlSelf->__PVT__now,
                     512,__Vtemp_1.data());
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.rst)) 
                     & (6ULL > vlSelf->__PVT__attempts)))) {
        VL_WRITEF_NX("A,%0#,%0#,%0#,%0#\n",0,64,vlSelf->__PVT__now,
                     64,(0xcULL + vlSelf->__PVT__attempts),
                     16,(IData)(vlSelf->__PVT___54_),
                     16,vlSelf->__PVT___53_);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_8))))) {
        VL_WRITEF_NX("S,%0#,%0#,%1#,%1#\n",0,64,vlSelf->__PVT__now,
                     64,(0xcULL + vlSelf->__PVT__sent),
                     2,(3U & (vlSelf->i[0x10U] >> 2U)),
                     2,(3U & vlSelf->i[0x10U]));
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_8)))) {
        vlSelf->__PVT__sent = vlSelf->__PVT___03_;
    }
    if (vlSelf->__PVT___10_) {
        vlSelf->__PVT__attempts = vlSelf->__PVT___08_;
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__now = 0ULL;
        vlSelf->i[0x10U] = (0xfU & vlSelf->i[0x10U]);
        vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->i[0x10U] = (0x13U & vlSelf->i[0x10U]);
        vlSelf->i[0x10U] = (0x1cU & vlSelf->i[0x10U]);
    } else {
        vlSelf->__PVT__now = vlSelf->__PVT___02_;
        if (vlSelf->__PVT___20_) {
            vlSelf->i[0x10U] = ((0xfU & vlSelf->i[0x10U]) 
                                | (0x1fU & ((IData)(vlSelf->__PVT___32_) 
                                            << 4U)));
            __Vtemp_2[0U] = (IData)(vlSelf->__PVT__sent0);
            __Vtemp_2[1U] = (IData)((vlSelf->__PVT__sent0 
                                     >> 0x20U));
            __Vtemp_2[2U] = 0U;
            __Vtemp_2[3U] = 0U;
            __Vtemp_2[4U] = 0U;
            __Vtemp_2[5U] = 0U;
            __Vtemp_2[6U] = 0U;
            __Vtemp_2[7U] = 0U;
            __Vtemp_2[8U] = 0U;
            __Vtemp_2[9U] = 0U;
            __Vtemp_2[0xaU] = 0U;
            __Vtemp_2[0xbU] = 0U;
            __Vtemp_2[0xcU] = 0U;
            __Vtemp_2[0xdU] = 0U;
            __Vtemp_2[0xeU] = 0U;
            __Vtemp_2[0xfU] = 0U;
            VL_ADD_W(16, __Vtemp_3, Vtop__ConstPool__CONST_h26aa42a1_0, __Vtemp_2);
            if (vlSelf->__PVT___32_) {
                vlSelf->i[0U] = __Vtemp_3[0U];
                vlSelf->i[1U] = __Vtemp_3[1U];
                vlSelf->i[2U] = __Vtemp_3[2U];
                vlSelf->i[3U] = __Vtemp_3[3U];
                vlSelf->i[4U] = __Vtemp_3[4U];
                vlSelf->i[5U] = __Vtemp_3[5U];
                vlSelf->i[6U] = __Vtemp_3[6U];
                vlSelf->i[7U] = __Vtemp_3[7U];
                vlSelf->i[8U] = __Vtemp_3[8U];
                vlSelf->i[9U] = __Vtemp_3[9U];
                vlSelf->i[0xaU] = __Vtemp_3[0xaU];
                vlSelf->i[0xbU] = __Vtemp_3[0xbU];
                vlSelf->i[0xcU] = __Vtemp_3[0xcU];
                vlSelf->i[0xdU] = __Vtemp_3[0xdU];
                vlSelf->i[0xeU] = __Vtemp_3[0xeU];
                vlSelf->i[0xfU] = __Vtemp_3[0xfU];
            } else {
                vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
                vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
                vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
                vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
                vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
                vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
                vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
                vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
                vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
                vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
                vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
                vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
                vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
                vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
                vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
                vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
            }
            vlSelf->i[0x10U] = ((0x13U & vlSelf->i[0x10U]) 
                                | (0x1fU & (((IData)(vlSelf->__PVT___32_)
                                              ? (IData)(vlSelf->__PVT___54_)
                                              : 0U) 
                                            << 2U)));
            vlSelf->i[0x10U] = ((0x1cU & vlSelf->i[0x10U]) 
                                | ((IData)(vlSelf->__PVT___32_)
                                    ? (0x1fU & (IData)(vlSelf->__PVT___53_))
                                    : 0U));
        }
    }
    vlSelf->__PVT___08_ = (1ULL + vlSelf->__PVT__attempts);
    vlSelf->__PVT___10_ = ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (6ULL > vlSelf->__PVT__attempts));
    vlSelf->__PVT___02_ = (1ULL + vlSelf->__PVT__now);
    vlSelf->__PVT___03_ = (1ULL + vlSelf->__PVT__sent);
    if ((6ULL > vlSelf->__PVT__sent0)) {
        if ((0x5fU >= (0x7fU & ((IData)(0xcU) + (IData)(vlSelf->__PVT__sent0))))) {
            vlSelf->__PVT___54_ = (3U & vlSymsp->TOP.top__DOT__destx
                                   [(0x7fU & ((IData)(0xcU) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
            vlSelf->__PVT___53_ = (3U & vlSymsp->TOP.top__DOT__desty
                                   [(0x7fU & ((IData)(0xcU) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
        } else {
            vlSelf->__PVT___54_ = 0U;
            vlSelf->__PVT___53_ = 0U;
        }
    } else {
        vlSelf->__PVT___54_ = 0U;
        vlSelf->__PVT___53_ = 0U;
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSelf->__PVT___32_) 
                                          & (IData)(vlSelf->__PVT___20_)))) {
        vlSelf->__PVT__sent0 = vlSelf->__PVT___07_;
    }
    vlSelf->__PVT___07_ = (1ULL + vlSelf->__PVT__sent0);
    vlSelf->__PVT___32_ = ((vlSelf->__PVT__attempts 
                            > vlSelf->__PVT__sent0) 
                           & VL_GTS_IQQ(64, 6ULL, vlSelf->__PVT__sent0));
}

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst__1(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst__1\n"); );
    // Body
    vlSelf->__PVT___20_ = (1U & ((~ (vlSelf->i[0x10U] 
                                     >> 4U)) | (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_8)));
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_hd239a26b_0;

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst__0(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst__0\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    VlWide<16>/*511:0*/ __Vtemp_3;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & ((IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_9) 
                              >> 1U))))) {
        __Vtemp_1[0U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0U];
        __Vtemp_1[1U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[1U];
        __Vtemp_1[2U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[2U];
        __Vtemp_1[3U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[3U];
        __Vtemp_1[4U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[4U];
        __Vtemp_1[5U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[5U];
        __Vtemp_1[6U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[6U];
        __Vtemp_1[7U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[7U];
        __Vtemp_1[8U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[8U];
        __Vtemp_1[9U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[9U];
        __Vtemp_1[0xaU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xaU];
        __Vtemp_1[0xbU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xbU];
        __Vtemp_1[0xcU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xcU];
        __Vtemp_1[0xdU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xdU];
        __Vtemp_1[0xeU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xeU];
        __Vtemp_1[0xfU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xfU];
        VL_WRITEF_NX("M,%0#,%0#,2,1\n",0,64,vlSelf->__PVT__now,
                     512,__Vtemp_1.data());
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.rst)) 
                     & (6ULL > vlSelf->__PVT__attempts)))) {
        VL_WRITEF_NX("A,%0#,%0#,%0#,%0#\n",0,64,vlSelf->__PVT__now,
                     64,(0x24ULL + vlSelf->__PVT__attempts),
                     16,(IData)(vlSelf->__PVT___54_),
                     16,vlSelf->__PVT___53_);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_9))))) {
        VL_WRITEF_NX("S,%0#,%0#,%1#,%1#\n",0,64,vlSelf->__PVT__now,
                     64,(0x24ULL + vlSelf->__PVT__sent),
                     2,(3U & (vlSelf->i[0x10U] >> 2U)),
                     2,(3U & vlSelf->i[0x10U]));
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_9)))) {
        vlSelf->__PVT__sent = vlSelf->__PVT___03_;
    }
    if (vlSelf->__PVT___10_) {
        vlSelf->__PVT__attempts = vlSelf->__PVT___08_;
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__now = 0ULL;
        vlSelf->i[0x10U] = (0xfU & vlSelf->i[0x10U]);
        vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->i[0x10U] = (0x13U & vlSelf->i[0x10U]);
        vlSelf->i[0x10U] = (0x1cU & vlSelf->i[0x10U]);
    } else {
        vlSelf->__PVT__now = vlSelf->__PVT___02_;
        if (vlSelf->__PVT___20_) {
            vlSelf->i[0x10U] = ((0xfU & vlSelf->i[0x10U]) 
                                | (0x1fU & ((IData)(vlSelf->__PVT___32_) 
                                            << 4U)));
            __Vtemp_2[0U] = (IData)(vlSelf->__PVT__sent0);
            __Vtemp_2[1U] = (IData)((vlSelf->__PVT__sent0 
                                     >> 0x20U));
            __Vtemp_2[2U] = 0U;
            __Vtemp_2[3U] = 0U;
            __Vtemp_2[4U] = 0U;
            __Vtemp_2[5U] = 0U;
            __Vtemp_2[6U] = 0U;
            __Vtemp_2[7U] = 0U;
            __Vtemp_2[8U] = 0U;
            __Vtemp_2[9U] = 0U;
            __Vtemp_2[0xaU] = 0U;
            __Vtemp_2[0xbU] = 0U;
            __Vtemp_2[0xcU] = 0U;
            __Vtemp_2[0xdU] = 0U;
            __Vtemp_2[0xeU] = 0U;
            __Vtemp_2[0xfU] = 0U;
            VL_ADD_W(16, __Vtemp_3, Vtop__ConstPool__CONST_hd239a26b_0, __Vtemp_2);
            if (vlSelf->__PVT___32_) {
                vlSelf->i[0U] = __Vtemp_3[0U];
                vlSelf->i[1U] = __Vtemp_3[1U];
                vlSelf->i[2U] = __Vtemp_3[2U];
                vlSelf->i[3U] = __Vtemp_3[3U];
                vlSelf->i[4U] = __Vtemp_3[4U];
                vlSelf->i[5U] = __Vtemp_3[5U];
                vlSelf->i[6U] = __Vtemp_3[6U];
                vlSelf->i[7U] = __Vtemp_3[7U];
                vlSelf->i[8U] = __Vtemp_3[8U];
                vlSelf->i[9U] = __Vtemp_3[9U];
                vlSelf->i[0xaU] = __Vtemp_3[0xaU];
                vlSelf->i[0xbU] = __Vtemp_3[0xbU];
                vlSelf->i[0xcU] = __Vtemp_3[0xcU];
                vlSelf->i[0xdU] = __Vtemp_3[0xdU];
                vlSelf->i[0xeU] = __Vtemp_3[0xeU];
                vlSelf->i[0xfU] = __Vtemp_3[0xfU];
            } else {
                vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
                vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
                vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
                vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
                vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
                vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
                vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
                vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
                vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
                vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
                vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
                vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
                vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
                vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
                vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
                vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
            }
            vlSelf->i[0x10U] = ((0x13U & vlSelf->i[0x10U]) 
                                | (0x1fU & (((IData)(vlSelf->__PVT___32_)
                                              ? (IData)(vlSelf->__PVT___54_)
                                              : 0U) 
                                            << 2U)));
            vlSelf->i[0x10U] = ((0x1cU & vlSelf->i[0x10U]) 
                                | ((IData)(vlSelf->__PVT___32_)
                                    ? (0x1fU & (IData)(vlSelf->__PVT___53_))
                                    : 0U));
        }
    }
    vlSelf->__PVT___08_ = (1ULL + vlSelf->__PVT__attempts);
    vlSelf->__PVT___10_ = ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (6ULL > vlSelf->__PVT__attempts));
    vlSelf->__PVT___02_ = (1ULL + vlSelf->__PVT__now);
    vlSelf->__PVT___03_ = (1ULL + vlSelf->__PVT__sent);
    if ((6ULL > vlSelf->__PVT__sent0)) {
        if ((0x5fU >= (0x7fU & ((IData)(0x24U) + (IData)(vlSelf->__PVT__sent0))))) {
            vlSelf->__PVT___54_ = (3U & vlSymsp->TOP.top__DOT__destx
                                   [(0x7fU & ((IData)(0x24U) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
            vlSelf->__PVT___53_ = (3U & vlSymsp->TOP.top__DOT__desty
                                   [(0x7fU & ((IData)(0x24U) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
        } else {
            vlSelf->__PVT___54_ = 0U;
            vlSelf->__PVT___53_ = 0U;
        }
    } else {
        vlSelf->__PVT___54_ = 0U;
        vlSelf->__PVT___53_ = 0U;
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSelf->__PVT___32_) 
                                          & (IData)(vlSelf->__PVT___20_)))) {
        vlSelf->__PVT__sent0 = vlSelf->__PVT___07_;
    }
    vlSelf->__PVT___07_ = (1ULL + vlSelf->__PVT__sent0);
    vlSelf->__PVT___32_ = ((vlSelf->__PVT__attempts 
                            > vlSelf->__PVT__sent0) 
                           & VL_GTS_IQQ(64, 6ULL, vlSelf->__PVT__sent0));
}

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst__1(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst__1\n"); );
    // Body
    vlSelf->__PVT___20_ = (1U & ((~ (vlSelf->i[0x10U] 
                                     >> 4U)) | (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_9)));
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h9abd2082_0;

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst__0(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst__0\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    VlWide<16>/*511:0*/ __Vtemp_3;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & ((IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_10) 
                              >> 1U))))) {
        __Vtemp_1[0U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0U];
        __Vtemp_1[1U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[1U];
        __Vtemp_1[2U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[2U];
        __Vtemp_1[3U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[3U];
        __Vtemp_1[4U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[4U];
        __Vtemp_1[5U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[5U];
        __Vtemp_1[6U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[6U];
        __Vtemp_1[7U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[7U];
        __Vtemp_1[8U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[8U];
        __Vtemp_1[9U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[9U];
        __Vtemp_1[0xaU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xaU];
        __Vtemp_1[0xbU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xbU];
        __Vtemp_1[0xcU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xcU];
        __Vtemp_1[0xdU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xdU];
        __Vtemp_1[0xeU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xeU];
        __Vtemp_1[0xfU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xfU];
        VL_WRITEF_NX("M,%0#,%0#,2,2\n",0,64,vlSelf->__PVT__now,
                     512,__Vtemp_1.data());
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.rst)) 
                     & (6ULL > vlSelf->__PVT__attempts)))) {
        VL_WRITEF_NX("A,%0#,%0#,%0#,%0#\n",0,64,vlSelf->__PVT__now,
                     64,(0x3cULL + vlSelf->__PVT__attempts),
                     16,(IData)(vlSelf->__PVT___54_),
                     16,vlSelf->__PVT___53_);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_10))))) {
        VL_WRITEF_NX("S,%0#,%0#,%1#,%1#\n",0,64,vlSelf->__PVT__now,
                     64,(0x3cULL + vlSelf->__PVT__sent),
                     2,(3U & (vlSelf->i[0x10U] >> 2U)),
                     2,(3U & vlSelf->i[0x10U]));
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_10)))) {
        vlSelf->__PVT__sent = vlSelf->__PVT___03_;
    }
    if (vlSelf->__PVT___10_) {
        vlSelf->__PVT__attempts = vlSelf->__PVT___08_;
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__now = 0ULL;
        vlSelf->i[0x10U] = (0xfU & vlSelf->i[0x10U]);
        vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->i[0x10U] = (0x13U & vlSelf->i[0x10U]);
        vlSelf->i[0x10U] = (0x1cU & vlSelf->i[0x10U]);
    } else {
        vlSelf->__PVT__now = vlSelf->__PVT___02_;
        if (vlSelf->__PVT___20_) {
            vlSelf->i[0x10U] = ((0xfU & vlSelf->i[0x10U]) 
                                | (0x1fU & ((IData)(vlSelf->__PVT___32_) 
                                            << 4U)));
            __Vtemp_2[0U] = (IData)(vlSelf->__PVT__sent0);
            __Vtemp_2[1U] = (IData)((vlSelf->__PVT__sent0 
                                     >> 0x20U));
            __Vtemp_2[2U] = 0U;
            __Vtemp_2[3U] = 0U;
            __Vtemp_2[4U] = 0U;
            __Vtemp_2[5U] = 0U;
            __Vtemp_2[6U] = 0U;
            __Vtemp_2[7U] = 0U;
            __Vtemp_2[8U] = 0U;
            __Vtemp_2[9U] = 0U;
            __Vtemp_2[0xaU] = 0U;
            __Vtemp_2[0xbU] = 0U;
            __Vtemp_2[0xcU] = 0U;
            __Vtemp_2[0xdU] = 0U;
            __Vtemp_2[0xeU] = 0U;
            __Vtemp_2[0xfU] = 0U;
            VL_ADD_W(16, __Vtemp_3, Vtop__ConstPool__CONST_h9abd2082_0, __Vtemp_2);
            if (vlSelf->__PVT___32_) {
                vlSelf->i[0U] = __Vtemp_3[0U];
                vlSelf->i[1U] = __Vtemp_3[1U];
                vlSelf->i[2U] = __Vtemp_3[2U];
                vlSelf->i[3U] = __Vtemp_3[3U];
                vlSelf->i[4U] = __Vtemp_3[4U];
                vlSelf->i[5U] = __Vtemp_3[5U];
                vlSelf->i[6U] = __Vtemp_3[6U];
                vlSelf->i[7U] = __Vtemp_3[7U];
                vlSelf->i[8U] = __Vtemp_3[8U];
                vlSelf->i[9U] = __Vtemp_3[9U];
                vlSelf->i[0xaU] = __Vtemp_3[0xaU];
                vlSelf->i[0xbU] = __Vtemp_3[0xbU];
                vlSelf->i[0xcU] = __Vtemp_3[0xcU];
                vlSelf->i[0xdU] = __Vtemp_3[0xdU];
                vlSelf->i[0xeU] = __Vtemp_3[0xeU];
                vlSelf->i[0xfU] = __Vtemp_3[0xfU];
            } else {
                vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
                vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
                vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
                vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
                vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
                vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
                vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
                vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
                vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
                vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
                vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
                vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
                vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
                vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
                vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
                vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
            }
            vlSelf->i[0x10U] = ((0x13U & vlSelf->i[0x10U]) 
                                | (0x1fU & (((IData)(vlSelf->__PVT___32_)
                                              ? (IData)(vlSelf->__PVT___54_)
                                              : 0U) 
                                            << 2U)));
            vlSelf->i[0x10U] = ((0x1cU & vlSelf->i[0x10U]) 
                                | ((IData)(vlSelf->__PVT___32_)
                                    ? (0x1fU & (IData)(vlSelf->__PVT___53_))
                                    : 0U));
        }
    }
    vlSelf->__PVT___08_ = (1ULL + vlSelf->__PVT__attempts);
    vlSelf->__PVT___10_ = ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (6ULL > vlSelf->__PVT__attempts));
    vlSelf->__PVT___02_ = (1ULL + vlSelf->__PVT__now);
    vlSelf->__PVT___03_ = (1ULL + vlSelf->__PVT__sent);
    if ((6ULL > vlSelf->__PVT__sent0)) {
        if ((0x5fU >= (0x7fU & ((IData)(0x3cU) + (IData)(vlSelf->__PVT__sent0))))) {
            vlSelf->__PVT___54_ = (3U & vlSymsp->TOP.top__DOT__destx
                                   [(0x7fU & ((IData)(0x3cU) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
            vlSelf->__PVT___53_ = (3U & vlSymsp->TOP.top__DOT__desty
                                   [(0x7fU & ((IData)(0x3cU) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
        } else {
            vlSelf->__PVT___54_ = 0U;
            vlSelf->__PVT___53_ = 0U;
        }
    } else {
        vlSelf->__PVT___54_ = 0U;
        vlSelf->__PVT___53_ = 0U;
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSelf->__PVT___32_) 
                                          & (IData)(vlSelf->__PVT___20_)))) {
        vlSelf->__PVT__sent0 = vlSelf->__PVT___07_;
    }
    vlSelf->__PVT___07_ = (1ULL + vlSelf->__PVT__sent0);
    vlSelf->__PVT___32_ = ((vlSelf->__PVT__attempts 
                            > vlSelf->__PVT__sent0) 
                           & VL_GTS_IQQ(64, 6ULL, vlSelf->__PVT__sent0));
}

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst__1(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst__1\n"); );
    // Body
    vlSelf->__PVT___20_ = (1U & ((~ (vlSelf->i[0x10U] 
                                     >> 4U)) | (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_10)));
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_hc8f47893_0;

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst__0(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst__0\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    VlWide<16>/*511:0*/ __Vtemp_3;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & ((IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_11) 
                              >> 1U))))) {
        __Vtemp_1[0U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0U];
        __Vtemp_1[1U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[1U];
        __Vtemp_1[2U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[2U];
        __Vtemp_1[3U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[3U];
        __Vtemp_1[4U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[4U];
        __Vtemp_1[5U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[5U];
        __Vtemp_1[6U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[6U];
        __Vtemp_1[7U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[7U];
        __Vtemp_1[8U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[8U];
        __Vtemp_1[9U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[9U];
        __Vtemp_1[0xaU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xaU];
        __Vtemp_1[0xbU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xbU];
        __Vtemp_1[0xcU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xcU];
        __Vtemp_1[0xdU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xdU];
        __Vtemp_1[0xeU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xeU];
        __Vtemp_1[0xfU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xfU];
        VL_WRITEF_NX("M,%0#,%0#,2,3\n",0,64,vlSelf->__PVT__now,
                     512,__Vtemp_1.data());
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.rst)) 
                     & (6ULL > vlSelf->__PVT__attempts)))) {
        VL_WRITEF_NX("A,%0#,%0#,%0#,%0#\n",0,64,vlSelf->__PVT__now,
                     64,(0x54ULL + vlSelf->__PVT__attempts),
                     16,(IData)(vlSelf->__PVT___54_),
                     16,vlSelf->__PVT___53_);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_11))))) {
        VL_WRITEF_NX("S,%0#,%0#,%1#,%1#\n",0,64,vlSelf->__PVT__now,
                     64,(0x54ULL + vlSelf->__PVT__sent),
                     2,(3U & (vlSelf->i[0x10U] >> 2U)),
                     2,(3U & vlSelf->i[0x10U]));
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_11)))) {
        vlSelf->__PVT__sent = vlSelf->__PVT___03_;
    }
    if (vlSelf->__PVT___10_) {
        vlSelf->__PVT__attempts = vlSelf->__PVT___08_;
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__now = 0ULL;
        vlSelf->i[0x10U] = (0xfU & vlSelf->i[0x10U]);
        vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->i[0x10U] = (0x13U & vlSelf->i[0x10U]);
        vlSelf->i[0x10U] = (0x1cU & vlSelf->i[0x10U]);
    } else {
        vlSelf->__PVT__now = vlSelf->__PVT___02_;
        if (vlSelf->__PVT___20_) {
            vlSelf->i[0x10U] = ((0xfU & vlSelf->i[0x10U]) 
                                | (0x1fU & ((IData)(vlSelf->__PVT___32_) 
                                            << 4U)));
            __Vtemp_2[0U] = (IData)(vlSelf->__PVT__sent0);
            __Vtemp_2[1U] = (IData)((vlSelf->__PVT__sent0 
                                     >> 0x20U));
            __Vtemp_2[2U] = 0U;
            __Vtemp_2[3U] = 0U;
            __Vtemp_2[4U] = 0U;
            __Vtemp_2[5U] = 0U;
            __Vtemp_2[6U] = 0U;
            __Vtemp_2[7U] = 0U;
            __Vtemp_2[8U] = 0U;
            __Vtemp_2[9U] = 0U;
            __Vtemp_2[0xaU] = 0U;
            __Vtemp_2[0xbU] = 0U;
            __Vtemp_2[0xcU] = 0U;
            __Vtemp_2[0xdU] = 0U;
            __Vtemp_2[0xeU] = 0U;
            __Vtemp_2[0xfU] = 0U;
            VL_ADD_W(16, __Vtemp_3, Vtop__ConstPool__CONST_hc8f47893_0, __Vtemp_2);
            if (vlSelf->__PVT___32_) {
                vlSelf->i[0U] = __Vtemp_3[0U];
                vlSelf->i[1U] = __Vtemp_3[1U];
                vlSelf->i[2U] = __Vtemp_3[2U];
                vlSelf->i[3U] = __Vtemp_3[3U];
                vlSelf->i[4U] = __Vtemp_3[4U];
                vlSelf->i[5U] = __Vtemp_3[5U];
                vlSelf->i[6U] = __Vtemp_3[6U];
                vlSelf->i[7U] = __Vtemp_3[7U];
                vlSelf->i[8U] = __Vtemp_3[8U];
                vlSelf->i[9U] = __Vtemp_3[9U];
                vlSelf->i[0xaU] = __Vtemp_3[0xaU];
                vlSelf->i[0xbU] = __Vtemp_3[0xbU];
                vlSelf->i[0xcU] = __Vtemp_3[0xcU];
                vlSelf->i[0xdU] = __Vtemp_3[0xdU];
                vlSelf->i[0xeU] = __Vtemp_3[0xeU];
                vlSelf->i[0xfU] = __Vtemp_3[0xfU];
            } else {
                vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
                vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
                vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
                vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
                vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
                vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
                vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
                vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
                vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
                vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
                vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
                vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
                vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
                vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
                vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
                vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
            }
            vlSelf->i[0x10U] = ((0x13U & vlSelf->i[0x10U]) 
                                | (0x1fU & (((IData)(vlSelf->__PVT___32_)
                                              ? (IData)(vlSelf->__PVT___54_)
                                              : 0U) 
                                            << 2U)));
            vlSelf->i[0x10U] = ((0x1cU & vlSelf->i[0x10U]) 
                                | ((IData)(vlSelf->__PVT___32_)
                                    ? (0x1fU & (IData)(vlSelf->__PVT___53_))
                                    : 0U));
        }
    }
    vlSelf->__PVT___08_ = (1ULL + vlSelf->__PVT__attempts);
    vlSelf->__PVT___10_ = ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (6ULL > vlSelf->__PVT__attempts));
    vlSelf->__PVT___02_ = (1ULL + vlSelf->__PVT__now);
    vlSelf->__PVT___03_ = (1ULL + vlSelf->__PVT__sent);
    if ((6ULL > vlSelf->__PVT__sent0)) {
        if ((0x5fU >= (0x7fU & ((IData)(0x54U) + (IData)(vlSelf->__PVT__sent0))))) {
            vlSelf->__PVT___54_ = (3U & vlSymsp->TOP.top__DOT__destx
                                   [(0x7fU & ((IData)(0x54U) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
            vlSelf->__PVT___53_ = (3U & vlSymsp->TOP.top__DOT__desty
                                   [(0x7fU & ((IData)(0x54U) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
        } else {
            vlSelf->__PVT___54_ = 0U;
            vlSelf->__PVT___53_ = 0U;
        }
    } else {
        vlSelf->__PVT___54_ = 0U;
        vlSelf->__PVT___53_ = 0U;
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSelf->__PVT___32_) 
                                          & (IData)(vlSelf->__PVT___20_)))) {
        vlSelf->__PVT__sent0 = vlSelf->__PVT___07_;
    }
    vlSelf->__PVT___07_ = (1ULL + vlSelf->__PVT__sent0);
    vlSelf->__PVT___32_ = ((vlSelf->__PVT__attempts 
                            > vlSelf->__PVT__sent0) 
                           & VL_GTS_IQQ(64, 6ULL, vlSelf->__PVT__sent0));
}

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst__1(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst__1\n"); );
    // Body
    vlSelf->__PVT___20_ = (1U & ((~ (vlSelf->i[0x10U] 
                                     >> 4U)) | (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_0_11)));
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h7f5a8d60_0;

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst__0(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst__0\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    VlWide<16>/*511:0*/ __Vtemp_3;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & ((IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_1_0) 
                              >> 1U))))) {
        __Vtemp_1[0U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0U];
        __Vtemp_1[1U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[1U];
        __Vtemp_1[2U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[2U];
        __Vtemp_1[3U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[3U];
        __Vtemp_1[4U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[4U];
        __Vtemp_1[5U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[5U];
        __Vtemp_1[6U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[6U];
        __Vtemp_1[7U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[7U];
        __Vtemp_1[8U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[8U];
        __Vtemp_1[9U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[9U];
        __Vtemp_1[0xaU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xaU];
        __Vtemp_1[0xbU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xbU];
        __Vtemp_1[0xcU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xcU];
        __Vtemp_1[0xdU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xdU];
        __Vtemp_1[0xeU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xeU];
        __Vtemp_1[0xfU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__router_inst__s_out[0xfU];
        VL_WRITEF_NX("M,%0#,%0#,3,0\n",0,64,vlSelf->__PVT__now,
                     512,__Vtemp_1.data());
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.rst)) 
                     & (6ULL > vlSelf->__PVT__attempts)))) {
        VL_WRITEF_NX("A,%0#,%0#,%0#,%0#\n",0,64,vlSelf->__PVT__now,
                     64,(0x12ULL + vlSelf->__PVT__attempts),
                     16,(IData)(vlSelf->__PVT___54_),
                     16,vlSelf->__PVT___53_);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_1_0))))) {
        VL_WRITEF_NX("S,%0#,%0#,%1#,%1#\n",0,64,vlSelf->__PVT__now,
                     64,(0x12ULL + vlSelf->__PVT__sent),
                     2,(3U & (vlSelf->i[0x10U] >> 2U)),
                     2,(3U & vlSelf->i[0x10U]));
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_1_0)))) {
        vlSelf->__PVT__sent = vlSelf->__PVT___03_;
    }
    if (vlSelf->__PVT___10_) {
        vlSelf->__PVT__attempts = vlSelf->__PVT___08_;
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__now = 0ULL;
        vlSelf->i[0x10U] = (0xfU & vlSelf->i[0x10U]);
        vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->i[0x10U] = (0x13U & vlSelf->i[0x10U]);
        vlSelf->i[0x10U] = (0x1cU & vlSelf->i[0x10U]);
    } else {
        vlSelf->__PVT__now = vlSelf->__PVT___02_;
        if (vlSelf->__PVT___20_) {
            vlSelf->i[0x10U] = ((0xfU & vlSelf->i[0x10U]) 
                                | (0x1fU & ((IData)(vlSelf->__PVT___32_) 
                                            << 4U)));
            __Vtemp_2[0U] = (IData)(vlSelf->__PVT__sent0);
            __Vtemp_2[1U] = (IData)((vlSelf->__PVT__sent0 
                                     >> 0x20U));
            __Vtemp_2[2U] = 0U;
            __Vtemp_2[3U] = 0U;
            __Vtemp_2[4U] = 0U;
            __Vtemp_2[5U] = 0U;
            __Vtemp_2[6U] = 0U;
            __Vtemp_2[7U] = 0U;
            __Vtemp_2[8U] = 0U;
            __Vtemp_2[9U] = 0U;
            __Vtemp_2[0xaU] = 0U;
            __Vtemp_2[0xbU] = 0U;
            __Vtemp_2[0xcU] = 0U;
            __Vtemp_2[0xdU] = 0U;
            __Vtemp_2[0xeU] = 0U;
            __Vtemp_2[0xfU] = 0U;
            VL_ADD_W(16, __Vtemp_3, Vtop__ConstPool__CONST_h7f5a8d60_0, __Vtemp_2);
            if (vlSelf->__PVT___32_) {
                vlSelf->i[0U] = __Vtemp_3[0U];
                vlSelf->i[1U] = __Vtemp_3[1U];
                vlSelf->i[2U] = __Vtemp_3[2U];
                vlSelf->i[3U] = __Vtemp_3[3U];
                vlSelf->i[4U] = __Vtemp_3[4U];
                vlSelf->i[5U] = __Vtemp_3[5U];
                vlSelf->i[6U] = __Vtemp_3[6U];
                vlSelf->i[7U] = __Vtemp_3[7U];
                vlSelf->i[8U] = __Vtemp_3[8U];
                vlSelf->i[9U] = __Vtemp_3[9U];
                vlSelf->i[0xaU] = __Vtemp_3[0xaU];
                vlSelf->i[0xbU] = __Vtemp_3[0xbU];
                vlSelf->i[0xcU] = __Vtemp_3[0xcU];
                vlSelf->i[0xdU] = __Vtemp_3[0xdU];
                vlSelf->i[0xeU] = __Vtemp_3[0xeU];
                vlSelf->i[0xfU] = __Vtemp_3[0xfU];
            } else {
                vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
                vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
                vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
                vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
                vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
                vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
                vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
                vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
                vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
                vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
                vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
                vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
                vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
                vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
                vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
                vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
            }
            vlSelf->i[0x10U] = ((0x13U & vlSelf->i[0x10U]) 
                                | (0x1fU & (((IData)(vlSelf->__PVT___32_)
                                              ? (IData)(vlSelf->__PVT___54_)
                                              : 0U) 
                                            << 2U)));
            vlSelf->i[0x10U] = ((0x1cU & vlSelf->i[0x10U]) 
                                | ((IData)(vlSelf->__PVT___32_)
                                    ? (0x1fU & (IData)(vlSelf->__PVT___53_))
                                    : 0U));
        }
    }
    vlSelf->__PVT___08_ = (1ULL + vlSelf->__PVT__attempts);
    vlSelf->__PVT___10_ = ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (6ULL > vlSelf->__PVT__attempts));
    vlSelf->__PVT___02_ = (1ULL + vlSelf->__PVT__now);
    vlSelf->__PVT___03_ = (1ULL + vlSelf->__PVT__sent);
    if ((6ULL > vlSelf->__PVT__sent0)) {
        if ((0x5fU >= (0x7fU & ((IData)(0x12U) + (IData)(vlSelf->__PVT__sent0))))) {
            vlSelf->__PVT___54_ = (3U & vlSymsp->TOP.top__DOT__destx
                                   [(0x7fU & ((IData)(0x12U) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
            vlSelf->__PVT___53_ = (3U & vlSymsp->TOP.top__DOT__desty
                                   [(0x7fU & ((IData)(0x12U) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
        } else {
            vlSelf->__PVT___54_ = 0U;
            vlSelf->__PVT___53_ = 0U;
        }
    } else {
        vlSelf->__PVT___54_ = 0U;
        vlSelf->__PVT___53_ = 0U;
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSelf->__PVT___32_) 
                                          & (IData)(vlSelf->__PVT___20_)))) {
        vlSelf->__PVT__sent0 = vlSelf->__PVT___07_;
    }
    vlSelf->__PVT___07_ = (1ULL + vlSelf->__PVT__sent0);
    vlSelf->__PVT___32_ = ((vlSelf->__PVT__attempts 
                            > vlSelf->__PVT__sent0) 
                           & VL_GTS_IQQ(64, 6ULL, vlSelf->__PVT__sent0));
}

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst__1(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst__1\n"); );
    // Body
    vlSelf->__PVT___20_ = (1U & ((~ (vlSelf->i[0x10U] 
                                     >> 4U)) | (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_1_0)));
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_hd23619c9_0;

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst__0(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst__0\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    VlWide<16>/*511:0*/ __Vtemp_3;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & ((IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_2_0) 
                              >> 1U))))) {
        __Vtemp_1[0U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0U];
        __Vtemp_1[1U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[1U];
        __Vtemp_1[2U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[2U];
        __Vtemp_1[3U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[3U];
        __Vtemp_1[4U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[4U];
        __Vtemp_1[5U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[5U];
        __Vtemp_1[6U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[6U];
        __Vtemp_1[7U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[7U];
        __Vtemp_1[8U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[8U];
        __Vtemp_1[9U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[9U];
        __Vtemp_1[0xaU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xaU];
        __Vtemp_1[0xbU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xbU];
        __Vtemp_1[0xcU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xcU];
        __Vtemp_1[0xdU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xdU];
        __Vtemp_1[0xeU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xeU];
        __Vtemp_1[0xfU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__router_inst__s_out[0xfU];
        VL_WRITEF_NX("M,%0#,%0#,3,1\n",0,64,vlSelf->__PVT__now,
                     512,__Vtemp_1.data());
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.rst)) 
                     & (6ULL > vlSelf->__PVT__attempts)))) {
        VL_WRITEF_NX("A,%0#,%0#,%0#,%0#\n",0,64,vlSelf->__PVT__now,
                     64,(0x2aULL + vlSelf->__PVT__attempts),
                     16,(IData)(vlSelf->__PVT___54_),
                     16,vlSelf->__PVT___53_);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_2_0))))) {
        VL_WRITEF_NX("S,%0#,%0#,%1#,%1#\n",0,64,vlSelf->__PVT__now,
                     64,(0x2aULL + vlSelf->__PVT__sent),
                     2,(3U & (vlSelf->i[0x10U] >> 2U)),
                     2,(3U & vlSelf->i[0x10U]));
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_2_0)))) {
        vlSelf->__PVT__sent = vlSelf->__PVT___03_;
    }
    if (vlSelf->__PVT___10_) {
        vlSelf->__PVT__attempts = vlSelf->__PVT___08_;
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__now = 0ULL;
        vlSelf->i[0x10U] = (0xfU & vlSelf->i[0x10U]);
        vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->i[0x10U] = (0x13U & vlSelf->i[0x10U]);
        vlSelf->i[0x10U] = (0x1cU & vlSelf->i[0x10U]);
    } else {
        vlSelf->__PVT__now = vlSelf->__PVT___02_;
        if (vlSelf->__PVT___20_) {
            vlSelf->i[0x10U] = ((0xfU & vlSelf->i[0x10U]) 
                                | (0x1fU & ((IData)(vlSelf->__PVT___32_) 
                                            << 4U)));
            __Vtemp_2[0U] = (IData)(vlSelf->__PVT__sent0);
            __Vtemp_2[1U] = (IData)((vlSelf->__PVT__sent0 
                                     >> 0x20U));
            __Vtemp_2[2U] = 0U;
            __Vtemp_2[3U] = 0U;
            __Vtemp_2[4U] = 0U;
            __Vtemp_2[5U] = 0U;
            __Vtemp_2[6U] = 0U;
            __Vtemp_2[7U] = 0U;
            __Vtemp_2[8U] = 0U;
            __Vtemp_2[9U] = 0U;
            __Vtemp_2[0xaU] = 0U;
            __Vtemp_2[0xbU] = 0U;
            __Vtemp_2[0xcU] = 0U;
            __Vtemp_2[0xdU] = 0U;
            __Vtemp_2[0xeU] = 0U;
            __Vtemp_2[0xfU] = 0U;
            VL_ADD_W(16, __Vtemp_3, Vtop__ConstPool__CONST_hd23619c9_0, __Vtemp_2);
            if (vlSelf->__PVT___32_) {
                vlSelf->i[0U] = __Vtemp_3[0U];
                vlSelf->i[1U] = __Vtemp_3[1U];
                vlSelf->i[2U] = __Vtemp_3[2U];
                vlSelf->i[3U] = __Vtemp_3[3U];
                vlSelf->i[4U] = __Vtemp_3[4U];
                vlSelf->i[5U] = __Vtemp_3[5U];
                vlSelf->i[6U] = __Vtemp_3[6U];
                vlSelf->i[7U] = __Vtemp_3[7U];
                vlSelf->i[8U] = __Vtemp_3[8U];
                vlSelf->i[9U] = __Vtemp_3[9U];
                vlSelf->i[0xaU] = __Vtemp_3[0xaU];
                vlSelf->i[0xbU] = __Vtemp_3[0xbU];
                vlSelf->i[0xcU] = __Vtemp_3[0xcU];
                vlSelf->i[0xdU] = __Vtemp_3[0xdU];
                vlSelf->i[0xeU] = __Vtemp_3[0xeU];
                vlSelf->i[0xfU] = __Vtemp_3[0xfU];
            } else {
                vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
                vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
                vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
                vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
                vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
                vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
                vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
                vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
                vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
                vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
                vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
                vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
                vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
                vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
                vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
                vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
            }
            vlSelf->i[0x10U] = ((0x13U & vlSelf->i[0x10U]) 
                                | (0x1fU & (((IData)(vlSelf->__PVT___32_)
                                              ? (IData)(vlSelf->__PVT___54_)
                                              : 0U) 
                                            << 2U)));
            vlSelf->i[0x10U] = ((0x1cU & vlSelf->i[0x10U]) 
                                | ((IData)(vlSelf->__PVT___32_)
                                    ? (0x1fU & (IData)(vlSelf->__PVT___53_))
                                    : 0U));
        }
    }
    vlSelf->__PVT___08_ = (1ULL + vlSelf->__PVT__attempts);
    vlSelf->__PVT___10_ = ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (6ULL > vlSelf->__PVT__attempts));
    vlSelf->__PVT___02_ = (1ULL + vlSelf->__PVT__now);
    vlSelf->__PVT___03_ = (1ULL + vlSelf->__PVT__sent);
    if ((6ULL > vlSelf->__PVT__sent0)) {
        if ((0x5fU >= (0x7fU & ((IData)(0x2aU) + (IData)(vlSelf->__PVT__sent0))))) {
            vlSelf->__PVT___54_ = (3U & vlSymsp->TOP.top__DOT__destx
                                   [(0x7fU & ((IData)(0x2aU) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
            vlSelf->__PVT___53_ = (3U & vlSymsp->TOP.top__DOT__desty
                                   [(0x7fU & ((IData)(0x2aU) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
        } else {
            vlSelf->__PVT___54_ = 0U;
            vlSelf->__PVT___53_ = 0U;
        }
    } else {
        vlSelf->__PVT___54_ = 0U;
        vlSelf->__PVT___53_ = 0U;
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSelf->__PVT___32_) 
                                          & (IData)(vlSelf->__PVT___20_)))) {
        vlSelf->__PVT__sent0 = vlSelf->__PVT___07_;
    }
    vlSelf->__PVT___07_ = (1ULL + vlSelf->__PVT__sent0);
    vlSelf->__PVT___32_ = ((vlSelf->__PVT__attempts 
                            > vlSelf->__PVT__sent0) 
                           & VL_GTS_IQQ(64, 6ULL, vlSelf->__PVT__sent0));
}

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst__1(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst__1\n"); );
    // Body
    vlSelf->__PVT___20_ = (1U & ((~ (vlSelf->i[0x10U] 
                                     >> 4U)) | (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_2_0)));
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h5ff76afe_0;

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst__0(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst__0\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    VlWide<16>/*511:0*/ __Vtemp_3;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & ((IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_3_0) 
                              >> 1U))))) {
        __Vtemp_1[0U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0U];
        __Vtemp_1[1U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[1U];
        __Vtemp_1[2U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[2U];
        __Vtemp_1[3U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[3U];
        __Vtemp_1[4U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[4U];
        __Vtemp_1[5U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[5U];
        __Vtemp_1[6U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[6U];
        __Vtemp_1[7U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[7U];
        __Vtemp_1[8U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[8U];
        __Vtemp_1[9U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[9U];
        __Vtemp_1[0xaU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xaU];
        __Vtemp_1[0xbU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xbU];
        __Vtemp_1[0xcU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xcU];
        __Vtemp_1[0xdU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xdU];
        __Vtemp_1[0xeU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xeU];
        __Vtemp_1[0xfU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__router_inst__s_out[0xfU];
        VL_WRITEF_NX("M,%0#,%0#,3,2\n",0,64,vlSelf->__PVT__now,
                     512,__Vtemp_1.data());
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.rst)) 
                     & (6ULL > vlSelf->__PVT__attempts)))) {
        VL_WRITEF_NX("A,%0#,%0#,%0#,%0#\n",0,64,vlSelf->__PVT__now,
                     64,(0x42ULL + vlSelf->__PVT__attempts),
                     16,(IData)(vlSelf->__PVT___54_),
                     16,vlSelf->__PVT___53_);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_3_0))))) {
        VL_WRITEF_NX("S,%0#,%0#,%1#,%1#\n",0,64,vlSelf->__PVT__now,
                     64,(0x42ULL + vlSelf->__PVT__sent),
                     2,(3U & (vlSelf->i[0x10U] >> 2U)),
                     2,(3U & vlSelf->i[0x10U]));
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_3_0)))) {
        vlSelf->__PVT__sent = vlSelf->__PVT___03_;
    }
    if (vlSelf->__PVT___10_) {
        vlSelf->__PVT__attempts = vlSelf->__PVT___08_;
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__now = 0ULL;
        vlSelf->i[0x10U] = (0xfU & vlSelf->i[0x10U]);
        vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->i[0x10U] = (0x13U & vlSelf->i[0x10U]);
        vlSelf->i[0x10U] = (0x1cU & vlSelf->i[0x10U]);
    } else {
        vlSelf->__PVT__now = vlSelf->__PVT___02_;
        if (vlSelf->__PVT___20_) {
            vlSelf->i[0x10U] = ((0xfU & vlSelf->i[0x10U]) 
                                | (0x1fU & ((IData)(vlSelf->__PVT___32_) 
                                            << 4U)));
            __Vtemp_2[0U] = (IData)(vlSelf->__PVT__sent0);
            __Vtemp_2[1U] = (IData)((vlSelf->__PVT__sent0 
                                     >> 0x20U));
            __Vtemp_2[2U] = 0U;
            __Vtemp_2[3U] = 0U;
            __Vtemp_2[4U] = 0U;
            __Vtemp_2[5U] = 0U;
            __Vtemp_2[6U] = 0U;
            __Vtemp_2[7U] = 0U;
            __Vtemp_2[8U] = 0U;
            __Vtemp_2[9U] = 0U;
            __Vtemp_2[0xaU] = 0U;
            __Vtemp_2[0xbU] = 0U;
            __Vtemp_2[0xcU] = 0U;
            __Vtemp_2[0xdU] = 0U;
            __Vtemp_2[0xeU] = 0U;
            __Vtemp_2[0xfU] = 0U;
            VL_ADD_W(16, __Vtemp_3, Vtop__ConstPool__CONST_h5ff76afe_0, __Vtemp_2);
            if (vlSelf->__PVT___32_) {
                vlSelf->i[0U] = __Vtemp_3[0U];
                vlSelf->i[1U] = __Vtemp_3[1U];
                vlSelf->i[2U] = __Vtemp_3[2U];
                vlSelf->i[3U] = __Vtemp_3[3U];
                vlSelf->i[4U] = __Vtemp_3[4U];
                vlSelf->i[5U] = __Vtemp_3[5U];
                vlSelf->i[6U] = __Vtemp_3[6U];
                vlSelf->i[7U] = __Vtemp_3[7U];
                vlSelf->i[8U] = __Vtemp_3[8U];
                vlSelf->i[9U] = __Vtemp_3[9U];
                vlSelf->i[0xaU] = __Vtemp_3[0xaU];
                vlSelf->i[0xbU] = __Vtemp_3[0xbU];
                vlSelf->i[0xcU] = __Vtemp_3[0xcU];
                vlSelf->i[0xdU] = __Vtemp_3[0xdU];
                vlSelf->i[0xeU] = __Vtemp_3[0xeU];
                vlSelf->i[0xfU] = __Vtemp_3[0xfU];
            } else {
                vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
                vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
                vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
                vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
                vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
                vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
                vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
                vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
                vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
                vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
                vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
                vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
                vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
                vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
                vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
                vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
            }
            vlSelf->i[0x10U] = ((0x13U & vlSelf->i[0x10U]) 
                                | (0x1fU & (((IData)(vlSelf->__PVT___32_)
                                              ? (IData)(vlSelf->__PVT___54_)
                                              : 0U) 
                                            << 2U)));
            vlSelf->i[0x10U] = ((0x1cU & vlSelf->i[0x10U]) 
                                | ((IData)(vlSelf->__PVT___32_)
                                    ? (0x1fU & (IData)(vlSelf->__PVT___53_))
                                    : 0U));
        }
    }
    vlSelf->__PVT___08_ = (1ULL + vlSelf->__PVT__attempts);
    vlSelf->__PVT___10_ = ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (6ULL > vlSelf->__PVT__attempts));
    vlSelf->__PVT___02_ = (1ULL + vlSelf->__PVT__now);
    vlSelf->__PVT___03_ = (1ULL + vlSelf->__PVT__sent);
    if ((6ULL > vlSelf->__PVT__sent0)) {
        if ((0x5fU >= (0x7fU & ((IData)(0x42U) + (IData)(vlSelf->__PVT__sent0))))) {
            vlSelf->__PVT___54_ = (3U & vlSymsp->TOP.top__DOT__destx
                                   [(0x7fU & ((IData)(0x42U) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
            vlSelf->__PVT___53_ = (3U & vlSymsp->TOP.top__DOT__desty
                                   [(0x7fU & ((IData)(0x42U) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
        } else {
            vlSelf->__PVT___54_ = 0U;
            vlSelf->__PVT___53_ = 0U;
        }
    } else {
        vlSelf->__PVT___54_ = 0U;
        vlSelf->__PVT___53_ = 0U;
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSelf->__PVT___32_) 
                                          & (IData)(vlSelf->__PVT___20_)))) {
        vlSelf->__PVT__sent0 = vlSelf->__PVT___07_;
    }
    vlSelf->__PVT___07_ = (1ULL + vlSelf->__PVT__sent0);
    vlSelf->__PVT___32_ = ((vlSelf->__PVT__attempts 
                            > vlSelf->__PVT__sent0) 
                           & VL_GTS_IQQ(64, 6ULL, vlSelf->__PVT__sent0));
}

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst__1(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst__1\n"); );
    // Body
    vlSelf->__PVT___20_ = (1U & ((~ (vlSelf->i[0x10U] 
                                     >> 4U)) | (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_3_0)));
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h86f8a5c0_0;

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst__0(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst__0\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    VlWide<16>/*511:0*/ __Vtemp_3;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & ((IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_4_0) 
                              >> 1U))))) {
        __Vtemp_1[0U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0U];
        __Vtemp_1[1U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[1U];
        __Vtemp_1[2U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[2U];
        __Vtemp_1[3U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[3U];
        __Vtemp_1[4U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[4U];
        __Vtemp_1[5U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[5U];
        __Vtemp_1[6U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[6U];
        __Vtemp_1[7U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[7U];
        __Vtemp_1[8U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[8U];
        __Vtemp_1[9U] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[9U];
        __Vtemp_1[0xaU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xaU];
        __Vtemp_1[0xbU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xbU];
        __Vtemp_1[0xcU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xcU];
        __Vtemp_1[0xdU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xdU];
        __Vtemp_1[0xeU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xeU];
        __Vtemp_1[0xfU] = vlSymsp->TOP.top__DOT__dut__DOT____Vcellout__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__router_inst__s_out[0xfU];
        VL_WRITEF_NX("M,%0#,%0#,3,3\n",0,64,vlSelf->__PVT__now,
                     512,__Vtemp_1.data());
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.rst)) 
                     & (6ULL > vlSelf->__PVT__attempts)))) {
        VL_WRITEF_NX("A,%0#,%0#,%0#,%0#\n",0,64,vlSelf->__PVT__now,
                     64,(0x5aULL + vlSelf->__PVT__attempts),
                     16,(IData)(vlSelf->__PVT___54_),
                     16,vlSelf->__PVT___53_);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_4_0))))) {
        VL_WRITEF_NX("S,%0#,%0#,%1#,%1#\n",0,64,vlSelf->__PVT__now,
                     64,(0x5aULL + vlSelf->__PVT__sent),
                     2,(3U & (vlSelf->i[0x10U] >> 2U)),
                     2,(3U & vlSelf->i[0x10U]));
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_4_0)))) {
        vlSelf->__PVT__sent = vlSelf->__PVT___03_;
    }
    if (vlSelf->__PVT___10_) {
        vlSelf->__PVT__attempts = vlSelf->__PVT___08_;
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__now = 0ULL;
        vlSelf->i[0x10U] = (0xfU & vlSelf->i[0x10U]);
        vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->i[0x10U] = (0x13U & vlSelf->i[0x10U]);
        vlSelf->i[0x10U] = (0x1cU & vlSelf->i[0x10U]);
    } else {
        vlSelf->__PVT__now = vlSelf->__PVT___02_;
        if (vlSelf->__PVT___20_) {
            vlSelf->i[0x10U] = ((0xfU & vlSelf->i[0x10U]) 
                                | (0x1fU & ((IData)(vlSelf->__PVT___32_) 
                                            << 4U)));
            __Vtemp_2[0U] = (IData)(vlSelf->__PVT__sent0);
            __Vtemp_2[1U] = (IData)((vlSelf->__PVT__sent0 
                                     >> 0x20U));
            __Vtemp_2[2U] = 0U;
            __Vtemp_2[3U] = 0U;
            __Vtemp_2[4U] = 0U;
            __Vtemp_2[5U] = 0U;
            __Vtemp_2[6U] = 0U;
            __Vtemp_2[7U] = 0U;
            __Vtemp_2[8U] = 0U;
            __Vtemp_2[9U] = 0U;
            __Vtemp_2[0xaU] = 0U;
            __Vtemp_2[0xbU] = 0U;
            __Vtemp_2[0xcU] = 0U;
            __Vtemp_2[0xdU] = 0U;
            __Vtemp_2[0xeU] = 0U;
            __Vtemp_2[0xfU] = 0U;
            VL_ADD_W(16, __Vtemp_3, Vtop__ConstPool__CONST_h86f8a5c0_0, __Vtemp_2);
            if (vlSelf->__PVT___32_) {
                vlSelf->i[0U] = __Vtemp_3[0U];
                vlSelf->i[1U] = __Vtemp_3[1U];
                vlSelf->i[2U] = __Vtemp_3[2U];
                vlSelf->i[3U] = __Vtemp_3[3U];
                vlSelf->i[4U] = __Vtemp_3[4U];
                vlSelf->i[5U] = __Vtemp_3[5U];
                vlSelf->i[6U] = __Vtemp_3[6U];
                vlSelf->i[7U] = __Vtemp_3[7U];
                vlSelf->i[8U] = __Vtemp_3[8U];
                vlSelf->i[9U] = __Vtemp_3[9U];
                vlSelf->i[0xaU] = __Vtemp_3[0xaU];
                vlSelf->i[0xbU] = __Vtemp_3[0xbU];
                vlSelf->i[0xcU] = __Vtemp_3[0xcU];
                vlSelf->i[0xdU] = __Vtemp_3[0xdU];
                vlSelf->i[0xeU] = __Vtemp_3[0xeU];
                vlSelf->i[0xfU] = __Vtemp_3[0xfU];
            } else {
                vlSelf->i[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
                vlSelf->i[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
                vlSelf->i[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
                vlSelf->i[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
                vlSelf->i[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
                vlSelf->i[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
                vlSelf->i[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
                vlSelf->i[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
                vlSelf->i[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
                vlSelf->i[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
                vlSelf->i[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
                vlSelf->i[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
                vlSelf->i[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
                vlSelf->i[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
                vlSelf->i[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
                vlSelf->i[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
            }
            vlSelf->i[0x10U] = ((0x13U & vlSelf->i[0x10U]) 
                                | (0x1fU & (((IData)(vlSelf->__PVT___32_)
                                              ? (IData)(vlSelf->__PVT___54_)
                                              : 0U) 
                                            << 2U)));
            vlSelf->i[0x10U] = ((0x1cU & vlSelf->i[0x10U]) 
                                | ((IData)(vlSelf->__PVT___32_)
                                    ? (0x1fU & (IData)(vlSelf->__PVT___53_))
                                    : 0U));
        }
    }
    vlSelf->__PVT___08_ = (1ULL + vlSelf->__PVT__attempts);
    vlSelf->__PVT___10_ = ((~ (IData)(vlSymsp->TOP.rst)) 
                           & (6ULL > vlSelf->__PVT__attempts));
    vlSelf->__PVT___02_ = (1ULL + vlSelf->__PVT__now);
    vlSelf->__PVT___03_ = (1ULL + vlSelf->__PVT__sent);
    if ((6ULL > vlSelf->__PVT__sent0)) {
        if ((0x5fU >= (0x7fU & ((IData)(0x5aU) + (IData)(vlSelf->__PVT__sent0))))) {
            vlSelf->__PVT___54_ = (3U & vlSymsp->TOP.top__DOT__destx
                                   [(0x7fU & ((IData)(0x5aU) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
            vlSelf->__PVT___53_ = (3U & vlSymsp->TOP.top__DOT__desty
                                   [(0x7fU & ((IData)(0x5aU) 
                                              + (IData)(vlSelf->__PVT__sent0)))]);
        } else {
            vlSelf->__PVT___54_ = 0U;
            vlSelf->__PVT___53_ = 0U;
        }
    } else {
        vlSelf->__PVT___54_ = 0U;
        vlSelf->__PVT___53_ = 0U;
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSelf->__PVT___32_) 
                                          & (IData)(vlSelf->__PVT___20_)))) {
        vlSelf->__PVT__sent0 = vlSelf->__PVT___07_;
    }
    vlSelf->__PVT___07_ = (1ULL + vlSelf->__PVT__sent0);
    vlSelf->__PVT___32_ = ((vlSelf->__PVT__attempts 
                            > vlSelf->__PVT__sent0) 
                           & VL_GTS_IQQ(64, 6ULL, vlSelf->__PVT__sent0));
}

VL_INLINE_OPT void Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst__1(Vtop_Client* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_Client___nba_sequent__TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst__1\n"); );
    // Body
    vlSelf->__PVT___20_ = (1U & ((~ (vlSelf->i[0x10U] 
                                     >> 4U)) | (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_4_0)));
}
