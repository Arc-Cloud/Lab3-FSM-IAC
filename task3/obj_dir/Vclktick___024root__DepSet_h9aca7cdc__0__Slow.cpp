// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclktick.h for the primary calling header

#include "verilated.h"

#include "Vclktick___024root.h"

VL_ATTR_COLD void Vclktick___024root___settle__TOP__0(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___settle__TOP__0\n"); );
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
            vlSelf->data_out = 0U;
            if (vlSelf->en) {
                vlSelf->clktick__DOT__F1FSM__DOT__next_state = 1U;
            }
        } else if ((1U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) {
            vlSelf->data_out = 1U;
            if (vlSelf->en) {
                vlSelf->clktick__DOT__F1FSM__DOT__next_state = 2U;
            }
        } else if ((2U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) {
            vlSelf->data_out = 3U;
            if (vlSelf->en) {
                vlSelf->clktick__DOT__F1FSM__DOT__next_state = 3U;
            }
        } else if ((3U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) {
            vlSelf->data_out = 7U;
            if (vlSelf->en) {
                vlSelf->clktick__DOT__F1FSM__DOT__next_state = 4U;
            }
        } else if ((4U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) {
            vlSelf->data_out = 0xfU;
            if (vlSelf->en) {
                vlSelf->clktick__DOT__F1FSM__DOT__next_state = 5U;
            }
        } else if ((5U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) {
            vlSelf->data_out = 0x1fU;
            if (vlSelf->en) {
                vlSelf->clktick__DOT__F1FSM__DOT__next_state = 6U;
            }
        } else if ((6U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) {
            vlSelf->data_out = 0x3fU;
            if (vlSelf->en) {
                vlSelf->clktick__DOT__F1FSM__DOT__next_state = 7U;
            }
        } else {
            vlSelf->data_out = 0x7fU;
            if (vlSelf->en) {
                vlSelf->clktick__DOT__F1FSM__DOT__next_state = 8U;
            }
        }
    } else if ((8U == vlSelf->clktick__DOT__F1FSM__DOT__current_state)) {
        vlSelf->data_out = 0xffU;
        if (vlSelf->en) {
            vlSelf->clktick__DOT__F1FSM__DOT__next_state = 0U;
        }
    } else {
        vlSelf->data_out = 0U;
        vlSelf->clktick__DOT__F1FSM__DOT__next_state = 0U;
    }
}

VL_ATTR_COLD void Vclktick___024root___eval_initial(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vclktick___024root___eval_settle(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___eval_settle\n"); );
    // Body
    Vclktick___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vclktick___024root___final(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___final\n"); );
}

VL_ATTR_COLD void Vclktick___024root___ctor_var_reset(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(16);
    vlSelf->tick = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->clktick__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->clktick__DOT__F1FSM__DOT__current_state = 0;
    vlSelf->clktick__DOT__F1FSM__DOT__next_state = 0;
}
