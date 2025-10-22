// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu__pch.h"
#include "Valu__Syms.h"
#include "Valu___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__ico(Valu___024root* vlSelf);
#endif  // VL_DEBUG

void Valu___024root___eval_triggers__ico(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout11__DOT__carry_vector__1)));
    vlSelf->__VicoTriggered.set(2U, ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout10__DOT__carry_vector__1)));
    vlSelf->__VicoTriggered.set(3U, ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout9__DOT__carry_vector__1)));
    vlSelf->__VicoTriggered.set(4U, ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout8__DOT__carry_vector__1)));
    vlSelf->__VicoTriggered.set(5U, ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout7__DOT__carry_vector__1)));
    vlSelf->__VicoTriggered.set(6U, ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout6__DOT__carry_vector__1)));
    vlSelf->__VicoTriggered.set(7U, ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout5__DOT__carry_vector__1)));
    vlSelf->__VicoTriggered.set(8U, ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout4__DOT__carry_vector__1)));
    vlSelf->__VicoTriggered.set(9U, ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout3__DOT__carry_vector__1)));
    vlSelf->__VicoTriggered.set(0xaU, ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout2__DOT__carry_vector__1)));
    vlSelf->__VicoTriggered.set(0xbU, ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout1__DOT__carry_vector__1)));
    vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout11__DOT__carry_vector__1 
        = vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector;
    vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout10__DOT__carry_vector__1 
        = vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector;
    vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout9__DOT__carry_vector__1 
        = vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector;
    vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout8__DOT__carry_vector__1 
        = vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector;
    vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout7__DOT__carry_vector__1 
        = vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector;
    vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout6__DOT__carry_vector__1 
        = vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector;
    vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout5__DOT__carry_vector__1 
        = vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector;
    vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout4__DOT__carry_vector__1 
        = vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector;
    vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout3__DOT__carry_vector__1 
        = vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector;
    vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout2__DOT__carry_vector__1 
        = vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector;
    vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout1__DOT__carry_vector__1 
        = vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.set(1U, 1U);
        vlSelf->__VicoTriggered.set(2U, 1U);
        vlSelf->__VicoTriggered.set(3U, 1U);
        vlSelf->__VicoTriggered.set(4U, 1U);
        vlSelf->__VicoTriggered.set(5U, 1U);
        vlSelf->__VicoTriggered.set(6U, 1U);
        vlSelf->__VicoTriggered.set(7U, 1U);
        vlSelf->__VicoTriggered.set(8U, 1U);
        vlSelf->__VicoTriggered.set(9U, 1U);
        vlSelf->__VicoTriggered.set(0xaU, 1U);
        vlSelf->__VicoTriggered.set(0xbU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__act(Valu___024root* vlSelf);
#endif  // VL_DEBUG

void Valu___024root___eval_triggers__act(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout11__DOT__carry_vector__2)));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout10__DOT__carry_vector__2)));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout9__DOT__carry_vector__2)));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout8__DOT__carry_vector__2)));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout7__DOT__carry_vector__2)));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout6__DOT__carry_vector__2)));
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout5__DOT__carry_vector__2)));
    vlSelf->__VactTriggered.set(7U, ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout4__DOT__carry_vector__2)));
    vlSelf->__VactTriggered.set(8U, ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout3__DOT__carry_vector__2)));
    vlSelf->__VactTriggered.set(9U, ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout2__DOT__carry_vector__2)));
    vlSelf->__VactTriggered.set(0xaU, ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout1__DOT__carry_vector__2)));
    vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout11__DOT__carry_vector__2 
        = vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector;
    vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout10__DOT__carry_vector__2 
        = vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector;
    vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout9__DOT__carry_vector__2 
        = vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector;
    vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout8__DOT__carry_vector__2 
        = vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector;
    vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout7__DOT__carry_vector__2 
        = vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector;
    vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout6__DOT__carry_vector__2 
        = vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector;
    vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout5__DOT__carry_vector__2 
        = vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector;
    vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout4__DOT__carry_vector__2 
        = vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector;
    vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout3__DOT__carry_vector__2 
        = vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector;
    vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout2__DOT__carry_vector__2 
        = vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector;
    vlSelf->__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout1__DOT__carry_vector__2 
        = vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
        vlSelf->__VactTriggered.set(5U, 1U);
        vlSelf->__VactTriggered.set(6U, 1U);
        vlSelf->__VactTriggered.set(7U, 1U);
        vlSelf->__VactTriggered.set(8U, 1U);
        vlSelf->__VactTriggered.set(9U, 1U);
        vlSelf->__VactTriggered.set(0xaU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu___024root___dump_triggers__act(vlSelf);
    }
#endif
}
