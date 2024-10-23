// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop_Client.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop_Client                    TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst;
    Vtop_Client                    TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst;
    Vtop_Client                    TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst;
    Vtop_Client                    TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst;
    Vtop_Client                    TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst;
    Vtop_Client                    TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst;
    Vtop_Client                    TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst;
    Vtop_Client                    TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst;
    Vtop_Client                    TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst;
    Vtop_Client                    TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst;
    Vtop_Client                    TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst;
    Vtop_Client                    TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst;
    Vtop_Client                    TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst;
    Vtop_Client                    TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst;
    Vtop_Client                    TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst;
    Vtop_Client                    TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
