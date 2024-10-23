// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop_Client.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{
}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst{this, Verilated::catName(namep, "top.dut.x_loop[0].y_loop[0].client_inst")}
    , TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst{this, Verilated::catName(namep, "top.dut.x_loop[0].y_loop[1].client_inst")}
    , TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst{this, Verilated::catName(namep, "top.dut.x_loop[0].y_loop[2].client_inst")}
    , TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst{this, Verilated::catName(namep, "top.dut.x_loop[0].y_loop[3].client_inst")}
    , TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst{this, Verilated::catName(namep, "top.dut.x_loop[1].y_loop[0].client_inst")}
    , TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst{this, Verilated::catName(namep, "top.dut.x_loop[1].y_loop[1].client_inst")}
    , TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst{this, Verilated::catName(namep, "top.dut.x_loop[1].y_loop[2].client_inst")}
    , TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst{this, Verilated::catName(namep, "top.dut.x_loop[1].y_loop[3].client_inst")}
    , TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst{this, Verilated::catName(namep, "top.dut.x_loop[2].y_loop[0].client_inst")}
    , TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst{this, Verilated::catName(namep, "top.dut.x_loop[2].y_loop[1].client_inst")}
    , TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst{this, Verilated::catName(namep, "top.dut.x_loop[2].y_loop[2].client_inst")}
    , TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst{this, Verilated::catName(namep, "top.dut.x_loop[2].y_loop[3].client_inst")}
    , TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst{this, Verilated::catName(namep, "top.dut.x_loop[3].y_loop[0].client_inst")}
    , TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst{this, Verilated::catName(namep, "top.dut.x_loop[3].y_loop[1].client_inst")}
    , TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst{this, Verilated::catName(namep, "top.dut.x_loop[3].y_loop[2].client_inst")}
    , TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst{this, Verilated::catName(namep, "top.dut.x_loop[3].y_loop[3].client_inst")}
{
        // Check resources
        Verilated::stackCheck(10625);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst = &TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst;
    TOP.__PVT__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst = &TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst;
    TOP.__PVT__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst = &TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst;
    TOP.__PVT__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst = &TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst;
    TOP.__PVT__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst = &TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst;
    TOP.__PVT__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst = &TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst;
    TOP.__PVT__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst = &TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst;
    TOP.__PVT__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst = &TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst;
    TOP.__PVT__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst = &TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst;
    TOP.__PVT__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst = &TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst;
    TOP.__PVT__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst = &TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst;
    TOP.__PVT__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst = &TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst;
    TOP.__PVT__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst = &TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst;
    TOP.__PVT__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst = &TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst;
    TOP.__PVT__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst = &TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst;
    TOP.__PVT__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst = &TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst.__Vconfigure(true);
    TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__x_loop__BRA__0__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__x_loop__BRA__1__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__x_loop__BRA__2__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__0__KET____DOT__client_inst.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__1__KET____DOT__client_inst.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__2__KET____DOT__client_inst.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__x_loop__BRA__3__KET____DOT__y_loop__BRA__3__KET____DOT__client_inst.__Vconfigure(false);
}
