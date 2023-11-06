// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VF1_Lights.h for the primary calling header

#include "verilated.h"

#include "VF1_Lights___024root.h"

VL_INLINE_OPT void VF1_Lights___024root___sequent__TOP__0(VF1_Lights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1_Lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1_Lights___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__F1_Lights__DOT__LFSR__DOT__sreg 
        = vlSelf->F1_Lights__DOT__LFSR__DOT__sreg;
    vlSelf->__Vdly__F1_Lights__DOT__LFSR__DOT__sreg 
        = ((IData)(vlSelf->rst) ? 1U : ((0x7eU & ((IData)(vlSelf->F1_Lights__DOT__LFSR__DOT__sreg) 
                                                  << 1U)) 
                                        | (1U & VL_REDXOR_8(
                                                            (0x44U 
                                                             & (IData)(vlSelf->F1_Lights__DOT__LFSR__DOT__sreg))))));
}

VL_INLINE_OPT void VF1_Lights___024root___sequent__TOP__1(VF1_Lights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1_Lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1_Lights___024root___sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdly__F1_Lights__DOT__ClkTick__DOT__count;
    // Body
    __Vdly__F1_Lights__DOT__ClkTick__DOT__count = vlSelf->F1_Lights__DOT__ClkTick__DOT__count;
    vlSelf->F1_Lights__DOT__Delay__DOT__count = (0x7fU 
                                                 & ((((IData)(vlSelf->rst) 
                                                      | (IData)(vlSelf->F1_Lights__DOT__cmd_delay)) 
                                                     | (0U 
                                                        == (IData)(vlSelf->F1_Lights__DOT__Delay__DOT__count)))
                                                     ? 
                                                    ((IData)(vlSelf->F1_Lights__DOT__LFSR__DOT__sreg) 
                                                     - (IData)(1U))
                                                     : 
                                                    ((IData)(vlSelf->F1_Lights__DOT__Delay__DOT__count) 
                                                     - (IData)(1U))));
    if (vlSelf->rst) {
        vlSelf->F1_Lights__DOT__Delay__DOT__current_state = 0U;
        vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__current_state = 0U;
        vlSelf->F1_Lights__DOT__tick = 0U;
        __Vdly__F1_Lights__DOT__ClkTick__DOT__count 
            = vlSelf->n;
        vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state = 0U;
    } else {
        vlSelf->F1_Lights__DOT__Delay__DOT__current_state 
            = vlSelf->F1_Lights__DOT__Delay__DOT__next_state;
        if (vlSelf->F1_Lights__DOT__cmd_seq) {
            vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__current_state 
                = vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__next_state;
            if ((0U == (IData)(vlSelf->F1_Lights__DOT__ClkTick__DOT__count))) {
                vlSelf->F1_Lights__DOT__tick = 1U;
                __Vdly__F1_Lights__DOT__ClkTick__DOT__count 
                    = vlSelf->n;
            } else {
                __Vdly__F1_Lights__DOT__ClkTick__DOT__count 
                    = (0x1fU & ((IData)(vlSelf->F1_Lights__DOT__ClkTick__DOT__count) 
                                - (IData)(1U)));
                vlSelf->F1_Lights__DOT__tick = 0U;
            }
        }
        if (vlSelf->F1_Lights__DOT__f1_fsm_en) {
            vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state 
                = vlSelf->F1_Lights__DOT__F1FSM__DOT__next_state;
        }
    }
    vlSelf->F1_Lights__DOT__ClkTick__DOT__count = __Vdly__F1_Lights__DOT__ClkTick__DOT__count;
    if (((((((((0U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state) 
               | (1U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)) 
              | (2U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)) 
             | (3U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)) 
            | (4U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)) 
           | (5U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)) 
          | (6U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)) 
         | (7U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state))) {
        if ((0U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)) {
            vlSelf->data_out = 0U;
            vlSelf->F1_Lights__DOT__cmd_delay = 0U;
            vlSelf->F1_Lights__DOT__cmd_seq = 1U;
        } else {
            vlSelf->data_out = ((1U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)
                                 ? 1U : ((2U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)
                                          ? 3U : ((3U 
                                                   == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)
                                                   ? 7U
                                                   : 
                                                  ((4U 
                                                    == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)
                                                    ? 0xfU
                                                    : 
                                                   ((5U 
                                                     == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)
                                                     ? 0x1fU
                                                     : 
                                                    ((6U 
                                                      == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)
                                                      ? 0x3fU
                                                      : 0x7fU))))));
        }
    } else if ((8U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)) {
        vlSelf->data_out = 0xffU;
        vlSelf->F1_Lights__DOT__cmd_delay = 1U;
        vlSelf->F1_Lights__DOT__cmd_seq = 0U;
    } else {
        vlSelf->data_out = 0U;
    }
    if (((((((((0U == vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__current_state) 
               | (1U == vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__current_state)) 
              | (2U == vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__current_state)) 
             | (3U == vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__current_state)) 
            | (4U == vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__current_state)) 
           | (5U == vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__current_state)) 
          | (6U == vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__current_state)) 
         | (7U == vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__current_state))) {
        if ((0U == vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__current_state)) {
            vlSelf->F1_Lights__DOT__ClkTick__DOT__data_out = 0U;
            vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__cmd_seq = 1U;
            vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__cmd_delay = 0U;
            if (vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__trigger) {
                vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__next_state = 1U;
            }
        } else if ((1U == vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__current_state)) {
            vlSelf->F1_Lights__DOT__ClkTick__DOT__data_out = 1U;
            if (vlSelf->F1_Lights__DOT__cmd_seq) {
                vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__next_state = 2U;
            }
        } else if ((2U == vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__current_state)) {
            vlSelf->F1_Lights__DOT__ClkTick__DOT__data_out = 3U;
            if (vlSelf->F1_Lights__DOT__cmd_seq) {
                vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__next_state = 3U;
            }
        } else if ((3U == vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__current_state)) {
            vlSelf->F1_Lights__DOT__ClkTick__DOT__data_out = 7U;
            if (vlSelf->F1_Lights__DOT__cmd_seq) {
                vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__next_state = 4U;
            }
        } else if ((4U == vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__current_state)) {
            vlSelf->F1_Lights__DOT__ClkTick__DOT__data_out = 0xfU;
            if (vlSelf->F1_Lights__DOT__cmd_seq) {
                vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__next_state = 5U;
            }
        } else if ((5U == vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__current_state)) {
            vlSelf->F1_Lights__DOT__ClkTick__DOT__data_out = 0x1fU;
            if (vlSelf->F1_Lights__DOT__cmd_seq) {
                vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__next_state = 6U;
            }
        } else if ((6U == vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__current_state)) {
            vlSelf->F1_Lights__DOT__ClkTick__DOT__data_out = 0x3fU;
            if (vlSelf->F1_Lights__DOT__cmd_seq) {
                vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__next_state = 7U;
            }
        } else {
            vlSelf->F1_Lights__DOT__ClkTick__DOT__data_out = 0x7fU;
            if (vlSelf->F1_Lights__DOT__cmd_seq) {
                vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__next_state = 8U;
            }
        }
    } else if ((8U == vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__current_state)) {
        vlSelf->F1_Lights__DOT__ClkTick__DOT__data_out = 0xffU;
        vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__cmd_seq = 0U;
        vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__cmd_delay = 1U;
        if (vlSelf->F1_Lights__DOT__cmd_seq) {
            vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__next_state = 0U;
        }
    } else {
        vlSelf->F1_Lights__DOT__ClkTick__DOT__data_out = 0U;
        vlSelf->F1_Lights__DOT__ClkTick__DOT__F1FSM__DOT__next_state = 0U;
    }
    vlSelf->F1_Lights__DOT__Delay__DOT__next_state 
        = ((0U == vlSelf->F1_Lights__DOT__Delay__DOT__current_state)
            ? ((IData)(vlSelf->F1_Lights__DOT__cmd_delay)
                ? 1U : vlSelf->F1_Lights__DOT__Delay__DOT__current_state)
            : ((1U == vlSelf->F1_Lights__DOT__Delay__DOT__current_state)
                ? ((0U == (IData)(vlSelf->F1_Lights__DOT__Delay__DOT__count))
                    ? 2U : vlSelf->F1_Lights__DOT__Delay__DOT__current_state)
                : ((2U == vlSelf->F1_Lights__DOT__Delay__DOT__current_state)
                    ? ((IData)(vlSelf->F1_Lights__DOT__cmd_delay)
                        ? 3U : 0U) : ((3U == vlSelf->F1_Lights__DOT__Delay__DOT__current_state)
                                       ? ((IData)(vlSelf->F1_Lights__DOT__cmd_delay)
                                           ? vlSelf->F1_Lights__DOT__Delay__DOT__current_state
                                           : 0U) : 0U))));
    vlSelf->F1_Lights__DOT__f1_fsm_en = ((IData)(vlSelf->F1_Lights__DOT__cmd_seq)
                                          ? (IData)(vlSelf->F1_Lights__DOT__tick)
                                          : ((0U != vlSelf->F1_Lights__DOT__Delay__DOT__current_state) 
                                             & ((1U 
                                                 != vlSelf->F1_Lights__DOT__Delay__DOT__current_state) 
                                                & (2U 
                                                   == vlSelf->F1_Lights__DOT__Delay__DOT__current_state))));
}

VL_INLINE_OPT void VF1_Lights___024root___sequent__TOP__2(VF1_Lights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1_Lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1_Lights___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->F1_Lights__DOT__LFSR__DOT__sreg = vlSelf->__Vdly__F1_Lights__DOT__LFSR__DOT__sreg;
}

VL_INLINE_OPT void VF1_Lights___024root___combo__TOP__0(VF1_Lights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1_Lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1_Lights___024root___combo__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state) 
               | (1U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)) 
              | (2U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)) 
             | (3U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)) 
            | (4U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)) 
           | (5U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)) 
          | (6U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)) 
         | (7U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state))) {
        if ((0U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)) {
            if (vlSelf->trigger) {
                vlSelf->F1_Lights__DOT__F1FSM__DOT__next_state = 1U;
            }
        } else if ((1U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)) {
            if (vlSelf->F1_Lights__DOT__f1_fsm_en) {
                vlSelf->F1_Lights__DOT__F1FSM__DOT__next_state = 2U;
            }
        } else if ((2U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)) {
            if (vlSelf->F1_Lights__DOT__f1_fsm_en) {
                vlSelf->F1_Lights__DOT__F1FSM__DOT__next_state = 3U;
            }
        } else if ((3U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)) {
            if (vlSelf->F1_Lights__DOT__f1_fsm_en) {
                vlSelf->F1_Lights__DOT__F1FSM__DOT__next_state = 4U;
            }
        } else if ((4U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)) {
            if (vlSelf->F1_Lights__DOT__f1_fsm_en) {
                vlSelf->F1_Lights__DOT__F1FSM__DOT__next_state = 5U;
            }
        } else if ((5U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)) {
            if (vlSelf->F1_Lights__DOT__f1_fsm_en) {
                vlSelf->F1_Lights__DOT__F1FSM__DOT__next_state = 6U;
            }
        } else if ((6U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)) {
            if (vlSelf->F1_Lights__DOT__f1_fsm_en) {
                vlSelf->F1_Lights__DOT__F1FSM__DOT__next_state = 7U;
            }
        } else if (vlSelf->F1_Lights__DOT__f1_fsm_en) {
            vlSelf->F1_Lights__DOT__F1FSM__DOT__next_state = 8U;
        }
    } else if ((8U == vlSelf->F1_Lights__DOT__F1FSM__DOT__current_state)) {
        if (vlSelf->F1_Lights__DOT__f1_fsm_en) {
            vlSelf->F1_Lights__DOT__F1FSM__DOT__next_state = 0U;
        }
    } else {
        vlSelf->F1_Lights__DOT__F1FSM__DOT__next_state = 0U;
    }
}

void VF1_Lights___024root___eval(VF1_Lights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1_Lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1_Lights___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        VF1_Lights___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VF1_Lights___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        VF1_Lights___024root___sequent__TOP__2(vlSelf);
    }
    VF1_Lights___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void VF1_Lights___024root___eval_debug_assertions(VF1_Lights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1_Lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1_Lights___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
    if (VL_UNLIKELY((vlSelf->n & 0xe0U))) {
        Verilated::overWidthError("n");}
}
#endif  // VL_DEBUG
