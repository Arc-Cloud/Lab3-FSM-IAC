// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VF1_Lights__Syms.h"


void VF1_Lights___024root__trace_chg_sub_0(VF1_Lights___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VF1_Lights___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1_Lights___024root__trace_chg_top_0\n"); );
    // Init
    VF1_Lights___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VF1_Lights___024root*>(voidSelf);
    VF1_Lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VF1_Lights___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VF1_Lights___024root__trace_chg_sub_0(VF1_Lights___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VF1_Lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1_Lights___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->F1_Lights__DOT__tick));
        bufp->chgBit(oldp+1,(((0U != vlSelf->F1_Lights__DOT__Delay__DOT__current_state) 
                              & ((1U != vlSelf->F1_Lights__DOT__Delay__DOT__current_state) 
                                 & (2U == vlSelf->F1_Lights__DOT__Delay__DOT__current_state)))));
        bufp->chgBit(oldp+2,(vlSelf->F1_Lights__DOT__cmd_seq));
        bufp->chgBit(oldp+3,(vlSelf->F1_Lights__DOT__cmd_delay));
        bufp->chgBit(oldp+4,(vlSelf->F1_Lights__DOT__f1_fsm_en));
        bufp->chgCData(oldp+5,(vlSelf->F1_Lights__DOT__ClkTick__DOT__data_out),8);
        bufp->chgCData(oldp+6,(vlSelf->F1_Lights__DOT__ClkTick__DOT__count),5);
        bufp->chgBit(oldp+7,(vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__cmd_seq));
        bufp->chgBit(oldp+8,(vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__cmd_delay));
        bufp->chgIData(oldp+9,(vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__current_state),32);
        bufp->chgIData(oldp+10,(vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__next_state),32);
        bufp->chgCData(oldp+11,(vlSelf->F1_Lights__DOT__Delay__DOT__count),7);
        bufp->chgIData(oldp+12,(vlSelf->F1_Lights__DOT__Delay__DOT__current_state),32);
        bufp->chgIData(oldp+13,(((0U == vlSelf->F1_Lights__DOT__Delay__DOT__current_state)
                                  ? ((IData)(vlSelf->F1_Lights__DOT__cmd_delay)
                                      ? 1U : vlSelf->F1_Lights__DOT__Delay__DOT__current_state)
                                  : ((1U == vlSelf->F1_Lights__DOT__Delay__DOT__current_state)
                                      ? ((0U == (IData)(vlSelf->F1_Lights__DOT__Delay__DOT__count))
                                          ? 2U : vlSelf->F1_Lights__DOT__Delay__DOT__current_state)
                                      : ((2U == vlSelf->F1_Lights__DOT__Delay__DOT__current_state)
                                          ? ((IData)(vlSelf->F1_Lights__DOT__cmd_delay)
                                              ? 3U : 0U)
                                          : ((3U == vlSelf->F1_Lights__DOT__Delay__DOT__current_state)
                                              ? ((IData)(vlSelf->F1_Lights__DOT__cmd_delay)
                                                  ? vlSelf->F1_Lights__DOT__Delay__DOT__current_state
                                                  : 0U)
                                              : 0U))))),32);
        bufp->chgIData(oldp+14,(vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state),32);
    }
    bufp->chgBit(oldp+15,(vlSelf->clk));
    bufp->chgBit(oldp+16,(vlSelf->rst));
    bufp->chgBit(oldp+17,(vlSelf->en));
    bufp->chgBit(oldp+18,(vlSelf->trigger));
    bufp->chgCData(oldp+19,(vlSelf->n),5);
    bufp->chgCData(oldp+20,(vlSelf->data_out),8);
    bufp->chgCData(oldp+21,(vlSelf->F1_Lights__DOT__LFSR__DOT__sreg),7);
    bufp->chgIData(oldp+22,(vlSelf->F1_Lights__DOT__F1FSM__DOT__next_state),32);
}

void VF1_Lights___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1_Lights___024root__trace_cleanup\n"); );
    // Init
    VF1_Lights___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VF1_Lights___024root*>(voidSelf);
    VF1_Lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
