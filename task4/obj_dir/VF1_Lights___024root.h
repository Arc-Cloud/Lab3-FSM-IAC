// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VF1_Lights.h for the primary calling header

#ifndef VERILATED_VF1_LIGHTS___024ROOT_H_
#define VERILATED_VF1_LIGHTS___024ROOT_H_  // guard

#include "verilated.h"

class VF1_Lights__Syms;

class VF1_Lights___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_IN8(trigger,0,0);
    VL_IN8(n,4,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ F1_Lights__DOT__tick;
    CData/*0:0*/ F1_Lights__DOT__cmd_seq;
    CData/*0:0*/ F1_Lights__DOT__cmd_delay;
    CData/*0:0*/ F1_Lights__DOT__f1_fsm_en;
    CData/*6:0*/ F1_Lights__DOT__LFSR__DOT__sreg;
    CData/*7:0*/ F1_Lights__DOT__ClkTick__DOT__data_out;
    CData/*4:0*/ F1_Lights__DOT__ClkTick__DOT__count;
    CData/*0:0*/ F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__trigger;
    CData/*0:0*/ F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__cmd_seq;
    CData/*0:0*/ F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__cmd_delay;
    CData/*6:0*/ F1_Lights__DOT__Delay__DOT__count;
    CData/*6:0*/ __Vdly__F1_Lights__DOT__LFSR__DOT__sreg;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    IData/*31:0*/ F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__current_state;
    IData/*31:0*/ F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__next_state;
    IData/*31:0*/ F1_Lights__DOT__Delay__DOT__current_state;
    IData/*31:0*/ F1_Lights__DOT__Delay__DOT__next_state;
    IData/*31:0*/ F1_Lights__DOT__F1FSM__DOT__current_state;
    IData/*31:0*/ F1_Lights__DOT__F1FSM__DOT__next_state;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VF1_Lights__Syms* const vlSymsp;

    // CONSTRUCTORS
    VF1_Lights___024root(VF1_Lights__Syms* symsp, const char* name);
    ~VF1_Lights___024root();
    VL_UNCOPYABLE(VF1_Lights___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
