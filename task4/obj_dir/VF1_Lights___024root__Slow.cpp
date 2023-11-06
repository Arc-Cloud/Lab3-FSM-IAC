// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VF1_Lights.h for the primary calling header

#include "verilated.h"

#include "VF1_Lights__Syms.h"
#include "VF1_Lights___024root.h"

void VF1_Lights___024root___ctor_var_reset(VF1_Lights___024root* vlSelf);

VF1_Lights___024root::VF1_Lights___024root(VF1_Lights__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VF1_Lights___024root___ctor_var_reset(this);
}

void VF1_Lights___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VF1_Lights___024root::~VF1_Lights___024root() {
}
