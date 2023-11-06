// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VF1_Lights__Syms.h"


VL_ATTR_COLD void VF1_Lights___024root__trace_init_sub__TOP__0(VF1_Lights___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VF1_Lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1_Lights___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+16,"clk", false,-1);
    tracep->declBit(c+17,"rst", false,-1);
    tracep->declBit(c+18,"en", false,-1);
    tracep->declBit(c+19,"trigger", false,-1);
    tracep->declBus(c+20,"n", false,-1, 4,0);
    tracep->declBus(c+21,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("F1_Lights ");
    tracep->declBit(c+16,"clk", false,-1);
    tracep->declBit(c+17,"rst", false,-1);
    tracep->declBit(c+18,"en", false,-1);
    tracep->declBit(c+19,"trigger", false,-1);
    tracep->declBus(c+20,"n", false,-1, 4,0);
    tracep->declBus(c+21,"data_out", false,-1, 7,0);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->declBus(c+22,"K", false,-1, 6,0);
    tracep->declBit(c+2,"time_out", false,-1);
    tracep->declBit(c+3,"cmd_seq", false,-1);
    tracep->declBit(c+4,"cmd_delay", false,-1);
    tracep->declBit(c+5,"f1_fsm_en", false,-1);
    tracep->pushNamePrefix("ClkTick ");
    tracep->declBus(c+24,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+16,"clk", false,-1);
    tracep->declBit(c+17,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+20,"N", false,-1, 4,0);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->declBus(c+6,"data_out", false,-1, 7,0);
    tracep->declBus(c+7,"count", false,-1, 4,0);
    tracep->pushNamePrefix("F1FSM ");
    tracep->declBit(c+16,"clk", false,-1);
    tracep->declBit(c+17,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBit(c+25,"trigger", false,-1);
    tracep->declBus(c+6,"data_out", false,-1, 7,0);
    tracep->declBit(c+8,"cmd_seq", false,-1);
    tracep->declBit(c+9,"cmd_delay", false,-1);
    tracep->declBus(c+10,"current_state", false,-1, 31,0);
    tracep->declBus(c+11,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Delay ");
    tracep->declBus(c+26,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+16,"clk", false,-1);
    tracep->declBit(c+17,"rst", false,-1);
    tracep->declBit(c+4,"trigger", false,-1);
    tracep->declBus(c+22,"n", false,-1, 6,0);
    tracep->declBit(c+2,"time_out", false,-1);
    tracep->declBus(c+12,"count", false,-1, 6,0);
    tracep->declBus(c+13,"current_state", false,-1, 31,0);
    tracep->declBus(c+14,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("F1FSM ");
    tracep->declBit(c+16,"clk", false,-1);
    tracep->declBit(c+17,"rst", false,-1);
    tracep->declBit(c+5,"en", false,-1);
    tracep->declBit(c+19,"trigger", false,-1);
    tracep->declBus(c+21,"data_out", false,-1, 7,0);
    tracep->declBit(c+3,"cmd_seq", false,-1);
    tracep->declBit(c+4,"cmd_delay", false,-1);
    tracep->declBus(c+15,"current_state", false,-1, 31,0);
    tracep->declBus(c+23,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LFSR ");
    tracep->declBit(c+16,"clk", false,-1);
    tracep->declBit(c+17,"rst", false,-1);
    tracep->declBit(c+27,"en", false,-1);
    tracep->declBus(c+22,"data_out", false,-1, 6,0);
    tracep->declBus(c+22,"sreg", false,-1, 6,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VF1_Lights___024root__trace_init_top(VF1_Lights___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VF1_Lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1_Lights___024root__trace_init_top\n"); );
    // Body
    VF1_Lights___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VF1_Lights___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VF1_Lights___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VF1_Lights___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VF1_Lights___024root__trace_register(VF1_Lights___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VF1_Lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1_Lights___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VF1_Lights___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VF1_Lights___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VF1_Lights___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VF1_Lights___024root__trace_full_sub_0(VF1_Lights___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VF1_Lights___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1_Lights___024root__trace_full_top_0\n"); );
    // Init
    VF1_Lights___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VF1_Lights___024root*>(voidSelf);
    VF1_Lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VF1_Lights___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VF1_Lights___024root__trace_full_sub_0(VF1_Lights___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VF1_Lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1_Lights___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->F1_Lights__DOT__tick));
    bufp->fullBit(oldp+2,(((0U != vlSelf->F1_Lights__DOT__Delay__DOT__current_state) 
                           & ((1U != vlSelf->F1_Lights__DOT__Delay__DOT__current_state) 
                              & (2U == vlSelf->F1_Lights__DOT__Delay__DOT__current_state)))));
    bufp->fullBit(oldp+3,(vlSelf->F1_Lights__DOT__cmd_seq));
    bufp->fullBit(oldp+4,(vlSelf->F1_Lights__DOT__cmd_delay));
    bufp->fullBit(oldp+5,(vlSelf->F1_Lights__DOT__f1_fsm_en));
    bufp->fullCData(oldp+6,(vlSelf->F1_Lights__DOT__ClkTick__DOT__data_out),8);
    bufp->fullCData(oldp+7,(vlSelf->F1_Lights__DOT__ClkTick__DOT__count),5);
    bufp->fullBit(oldp+8,(vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__cmd_seq));
    bufp->fullBit(oldp+9,(vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__cmd_delay));
    bufp->fullIData(oldp+10,(vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__current_state),32);
    bufp->fullIData(oldp+11,(vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__next_state),32);
    bufp->fullCData(oldp+12,(vlSelf->F1_Lights__DOT__Delay__DOT__count),7);
    bufp->fullIData(oldp+13,(vlSelf->F1_Lights__DOT__Delay__DOT__current_state),32);
    bufp->fullIData(oldp+14,(((0U == vlSelf->F1_Lights__DOT__Delay__DOT__current_state)
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
    bufp->fullIData(oldp+15,(vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state),32);
    bufp->fullBit(oldp+16,(vlSelf->clk));
    bufp->fullBit(oldp+17,(vlSelf->rst));
    bufp->fullBit(oldp+18,(vlSelf->en));
    bufp->fullBit(oldp+19,(vlSelf->trigger));
    bufp->fullCData(oldp+20,(vlSelf->n),5);
    bufp->fullCData(oldp+21,(vlSelf->data_out),8);
    bufp->fullCData(oldp+22,(vlSelf->F1_Lights__DOT__LFSR__DOT__sreg),7);
    bufp->fullIData(oldp+23,(vlSelf->F1_Lights__DOT__F1FSM__DOT__next_state),32);
    bufp->fullIData(oldp+24,(5U),32);
    bufp->fullBit(oldp+25,(vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__trigger));
    bufp->fullIData(oldp+26,(7U),32);
    bufp->fullBit(oldp+27,(1U));
}
