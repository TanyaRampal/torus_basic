// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_Client.h"
#include "Vtop__Syms.h"

void Vtop_Client___ctor_var_reset(Vtop_Client* vlSelf);

Vtop_Client::Vtop_Client(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_Client___ctor_var_reset(this);
}

void Vtop_Client::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_Client::~Vtop_Client() {
}
