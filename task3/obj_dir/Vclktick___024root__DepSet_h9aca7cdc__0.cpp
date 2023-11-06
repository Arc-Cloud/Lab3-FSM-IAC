// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclktick.h for the primary calling header

#include "verilated.h"

#include "Vclktick___024root.h"

VL_INLINE_OPT void Vclktick___024root___sequent__TOP__0(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__clktick__DOT__count;
    // Body
    __Vdly__clktick__DOT__count = vlSelf->clktick__DOT__count;
    if (vlSelf->rst) {
        vlSelf->tick = 0U;
        __Vdly__clktick__DOT__count = vlSelf->N;
        vlSelf->clktick__DOT__F1FSM__DOT__current_state = 0U;
    } else if (vlSelf->en) {
        if ((0U == (IData)(vlSelf->clktick__DOT__count))) {
            vlSelf->tick = 1U;
            __Vdly__clktick__DOT__count = vlSelf->N;
        } else {
            __Vdly__clktick__DOT__count = (0xffffU 
                                           & ((IData)(vlSelf->clktick__DOT__count) 
                                              - (IData)(1U)));
            vlSelf->tick = 0U;
        }
        vlSelf->clktick__DOT__F1FSM__DOT__current_state 
            = vlSelf->clktick__DOT__F1FSM__DOT__next_state;
    }
    vlSelf->clktick__DOT__count = __Vdly__clktick__DOT__count;
    vlSelf->data_out = (((((((((0U == vlSelf->clktick__DOT__F1FSM__DOT__current_state) 
                               | (1U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) 
                              | (2U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) 
                             | (3U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) 
                            | (4U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) 
                           | (5U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) 
                          | (6U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) 
                         | (7U == vlSelf->clktick__DOT__F1FSM__DOT__current_state))
                         ? ((0U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)
                             ? 0U : ((1U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)
                                      ? 1U : ((2U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)
                                               ? 3U
                                               : ((3U 
                                                   == vlSelf->clktick__DOT__F1FSM__DOT__current_state)
                                                   ? 7U
                                                   : 
                                                  ((4U 
                                                    == vlSelf->clktick__DOT__F1FSM__DOT__current_state)
                                                    ? 0xfU
                                                    : 
                                                   ((5U 
                                                     == vlSelf->clktick__DOT__F1FSM__DOT__current_state)
                                                     ? 0x1fU
                                                     : 
                                                    ((6U 
                                                      == vlSelf->clktick__DOT__F1FSM__DOT__current_state)
                                                      ? 0x3fU
                                                      : 0x7fU)))))))
                         : ((8U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)
                             ? 0xffU : 0U));
}

VL_INLINE_OPT void Vclktick___024root___combo__TOP__0(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___combo__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->clktick__DOT__F1FSM__DOT__current_state) 
               | (1U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) 
              | (2U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) 
             | (3U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) 
            | (4U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) 
           | (5U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) 
          | (6U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) 
         | (7U == vlSelf->clktick__DOT__F1FSM__DOT__current_state))) {
        if ((0U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) {
            if (vlSelf->en) {
                vlSelf->clktick__DOT__F1FSM__DOT__next_state = 1U;
            }
        } else if ((1U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) {
            if (vlSelf->en) {
                vlSelf->clktick__DOT__F1FSM__DOT__next_state = 2U;
            }
        } else if ((2U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) {
            if (vlSelf->en) {
                vlSelf->clktick__DOT__F1FSM__DOT__next_state = 3U;
            }
        } else if ((3U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) {
            if (vlSelf->en) {
                vlSelf->clktick__DOT__F1FSM__DOT__next_state = 4U;
            }
        } else if ((4U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) {
            if (vlSelf->en) {
                vlSelf->clktick__DOT__F1FSM__DOT__next_state = 5U;
            }
        } else if ((5U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) {
            if (vlSelf->en) {
                vlSelf->clktick__DOT__F1FSM__DOT__next_state = 6U;
            }
        } else if ((6U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) {
            if (vlSelf->en) {
                vlSelf->clktick__DOT__F1FSM__DOT__next_state = 7U;
            }
        } else if (vlSelf->en) {
            vlSelf->clktick__DOT__F1FSM__DOT__next_state = 8U;
        }
    } else if ((8U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) {
        if (vlSelf->en) {
            vlSelf->clktick__DOT__F1FSM__DOT__next_state = 0U;
        }
    } else {
        vlSelf->clktick__DOT__F1FSM__DOT__next_state = 0U;
    }
}

void Vclktick___024root___eval(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vclktick___024root___sequent__TOP__0(vlSelf);
    }
    Vclktick___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vclktick___024root___eval_debug_assertions(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
