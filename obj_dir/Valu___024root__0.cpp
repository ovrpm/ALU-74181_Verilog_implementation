// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Valu___024root___eval_triggers__ico(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_triggers__ico\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [1U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
    vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                    (((((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout1__DOT__carry_vector__1)) 
                                                       << 0x0000000aU) 
                                                      | ((((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout2__DOT__carry_vector__1)) 
                                                          << 9U) 
                                                         | (((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout3__DOT__carry_vector__1)) 
                                                            << 8U))) 
                                                     | (((((((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout4__DOT__carry_vector__1)) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout5__DOT__carry_vector__1)) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout6__DOT__carry_vector__1)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout7__DOT__carry_vector__1)))) 
                                                         << 4U) 
                                                        | (((((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout8__DOT__carry_vector__1)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout9__DOT__carry_vector__1)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout10__DOT__carry_vector__1)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout11__DOT__carry_vector__1))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout11__DOT__carry_vector__1 
        = vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector;
    vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout10__DOT__carry_vector__1 
        = vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector;
    vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout9__DOT__carry_vector__1 
        = vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector;
    vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout8__DOT__carry_vector__1 
        = vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector;
    vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout7__DOT__carry_vector__1 
        = vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector;
    vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout6__DOT__carry_vector__1 
        = vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector;
    vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout5__DOT__carry_vector__1 
        = vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector;
    vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout4__DOT__carry_vector__1 
        = vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector;
    vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout3__DOT__carry_vector__1 
        = vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector;
    vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout2__DOT__carry_vector__1 
        = vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector;
    vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout1__DOT__carry_vector__1 
        = vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
        vlSelfRef.__VicoDidInit = 1U;
        vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered
                                         [0U]);
        vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered
                                         [0U]);
        vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered
                                         [0U]);
        vlSelfRef.__VicoTriggered[0U] = (8ULL | vlSelfRef.__VicoTriggered
                                         [0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000010ULL 
                                         | vlSelfRef.__VicoTriggered
                                         [0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000020ULL 
                                         | vlSelfRef.__VicoTriggered
                                         [0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000040ULL 
                                         | vlSelfRef.__VicoTriggered
                                         [0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000080ULL 
                                         | vlSelfRef.__VicoTriggered
                                         [0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000100ULL 
                                         | vlSelfRef.__VicoTriggered
                                         [0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000200ULL 
                                         | vlSelfRef.__VicoTriggered
                                         [0U]);
        vlSelfRef.__VicoTriggered[0U] = (0x0000000000000400ULL 
                                         | vlSelfRef.__VicoTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Valu___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void Valu___024root___ico_sequent__TOP__0(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_sequent__TOP__0\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ alu__DOT__ar__DOT__out;
    alu__DOT__ar__DOT__out = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_0;
    __VdfgRegularize_he50b618e_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_1;
    __VdfgRegularize_he50b618e_0_1 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_2;
    __VdfgRegularize_he50b618e_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_4;
    __VdfgRegularize_he50b618e_0_4 = 0;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    // Body
    vlSelfRef.compare = ((IData)(vlSelfRef.in_a) == (IData)(vlSelfRef.in_b));
    __VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.in_a) 
                                      ^ (IData)(vlSelfRef.in_b));
    alu__DOT__ar__DOT__out = (0x0000ffffU & ((8U & (IData)(vlSelfRef.sel))
                                              ? ((4U 
                                                  & (IData)(vlSelfRef.sel))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.sel))
                                                    ? 
                                                   (((IData)(vlSelfRef.in_a) 
                                                     - (IData)(1U)) 
                                                    + (IData)(vlSelfRef.carry_in))
                                                    : 
                                                   ((((IData)(vlSelfRef.in_a) 
                                                      | (~ (IData)(vlSelfRef.in_b))) 
                                                     + (IData)(vlSelfRef.in_a)) 
                                                    + (IData)(vlSelfRef.carry_in)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.sel))
                                                    ? 
                                                   ((((IData)(vlSelfRef.in_a) 
                                                      | (IData)(vlSelfRef.in_b)) 
                                                     + (IData)(vlSelfRef.in_a)) 
                                                    + (IData)(vlSelfRef.carry_in))
                                                    : 
                                                   (((IData)(vlSelfRef.in_a) 
                                                     + (IData)(vlSelfRef.in_a)) 
                                                    + (IData)(vlSelfRef.carry_in))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.sel))
                                                    ? 
                                                   ((((IData)(vlSelfRef.in_a) 
                                                      & (IData)(vlSelfRef.in_b)) 
                                                     - (IData)(1U)) 
                                                    + (IData)(vlSelfRef.carry_in))
                                                    : 
                                                   ((((IData)(vlSelfRef.in_a) 
                                                      | (~ (IData)(vlSelfRef.in_b))) 
                                                     + 
                                                     ((IData)(vlSelfRef.in_a) 
                                                      & (IData)(vlSelfRef.in_b))) 
                                                    + (IData)(vlSelfRef.carry_in)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.sel))
                                                    ? 
                                                   (((IData)(vlSelfRef.in_a) 
                                                     + (IData)(vlSelfRef.in_b)) 
                                                    + (IData)(vlSelfRef.carry_in))
                                                    : 
                                                   (((IData)(vlSelfRef.in_a) 
                                                     + 
                                                     ((IData)(vlSelfRef.in_a) 
                                                      & (IData)(vlSelfRef.in_b))) 
                                                    + (IData)(vlSelfRef.carry_in)))))
                                              : ((4U 
                                                  & (IData)(vlSelfRef.sel))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.sel))
                                                    ? 
                                                   ((((IData)(vlSelfRef.in_a) 
                                                      & (~ (IData)(vlSelfRef.in_b))) 
                                                     - (IData)(1U)) 
                                                    + (IData)(vlSelfRef.carry_in))
                                                    : 
                                                   ((((IData)(vlSelfRef.in_a) 
                                                      - (IData)(vlSelfRef.in_b)) 
                                                     - (IData)(1U)) 
                                                    + (IData)(vlSelfRef.carry_in)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.sel))
                                                    ? 
                                                   ((((IData)(vlSelfRef.in_a) 
                                                      | (IData)(vlSelfRef.in_b)) 
                                                     + 
                                                     ((IData)(vlSelfRef.in_a) 
                                                      & (~ (IData)(vlSelfRef.in_b)))) 
                                                    + (IData)(vlSelfRef.carry_in))
                                                    : 
                                                   ((IData)(vlSelfRef.in_a) 
                                                    | ((IData)(vlSelfRef.in_a) 
                                                       & (~ (IData)(vlSelfRef.in_b))))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.sel))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelfRef.in_a) 
                                                    | (~ (IData)(vlSelfRef.in_b))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.sel))
                                                    ? 
                                                   ((IData)(vlSelfRef.in_a) 
                                                    | (IData)(vlSelfRef.in_b))
                                                    : (IData)(vlSelfRef.in_a))))));
    vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xfffeU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (((IData)(vlSelfRef.in_a) - (IData)(1U)) 
              & (IData)(vlSelfRef.carry_in)));
    vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3 
        = (0x0000ffffU & (((IData)(vlSelfRef.in_a) 
                           - (IData)(vlSelfRef.in_b)) 
                          - (IData)(1U)));
    vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3 
        = ((~ (IData)(vlSelfRef.in_b)) & (IData)(vlSelfRef.in_a));
    __VdfgRegularize_he50b618e_0_1 = ((IData)(vlSelfRef.in_a) 
                                      & (IData)(vlSelfRef.carry_in));
    vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2 
        = ((IData)(vlSelfRef.in_a) | (IData)(vlSelfRef.in_b));
    vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2 
        = (0x0000ffffU & ((~ (IData)(vlSelfRef.in_b)) 
                          | (IData)(vlSelfRef.in_a)));
    vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3 
        = ((IData)(vlSelfRef.in_a) & (IData)(vlSelfRef.in_b));
    vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xfffeU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | ((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
              & (IData)(vlSelfRef.carry_in)));
    vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xfffeU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
               - (IData)(1U)) & (IData)(vlSelfRef.carry_in)));
    vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xfffeU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (1U & ((IData)(__VdfgRegularize_he50b618e_0_1) 
                    | (IData)(vlSelfRef.in_a))));
    vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xfffeU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (1U & ((IData)(__VdfgRegularize_he50b618e_0_1) 
                    | ((IData)(vlSelfRef.in_b) & ((IData)(vlSelfRef.in_a) 
                                                  | (IData)(vlSelfRef.carry_in))))));
    __VdfgRegularize_he50b618e_0_0 = ((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                      & (IData)(vlSelfRef.carry_in));
    __VdfgRegularize_he50b618e_0_4 = ((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                      & (IData)(vlSelfRef.carry_in));
    vlSelfRef.alu_out = 0U;
    if (vlSelfRef.mode) {
        vlSelfRef.alu_out = (0x0000ffffU & ((8U & (IData)(vlSelfRef.sel))
                                             ? ((4U 
                                                 & (IData)(vlSelfRef.sel))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.sel))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.sel))
                                                   ? (IData)(vlSelfRef.in_a)
                                                   : (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.sel))
                                                   ? (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2)
                                                   : 1U))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.sel))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.sel))
                                                   ? (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)
                                                   : (IData)(vlSelfRef.in_b))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.sel))
                                                   ? 
                                                  (~ (IData)(__VdfgRegularize_h6e95ff9d_0_0))
                                                   : 
                                                  ((~ (IData)(vlSelfRef.in_a)) 
                                                   | (IData)(vlSelfRef.in_b)))))
                                             : ((4U 
                                                 & (IData)(vlSelfRef.sel))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.sel))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.sel))
                                                   ? (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)
                                                   : (IData)(__VdfgRegularize_h6e95ff9d_0_0))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.sel))
                                                   ? 
                                                  (~ (IData)(vlSelfRef.in_b))
                                                   : 
                                                  (~ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.sel))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.sel))
                                                   ? 0U
                                                   : 
                                                  ((~ (IData)(vlSelfRef.in_a)) 
                                                   & (IData)(vlSelfRef.in_b)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.sel))
                                                   ? 
                                                  (~ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2))
                                                   : 
                                                  (~ (IData)(vlSelfRef.in_a)))))));
    } else if ((1U & (~ (IData)(vlSelfRef.mode)))) {
        vlSelfRef.alu_out = alu__DOT__ar__DOT__out;
    }
    vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xfffeU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
               - (IData)(1U)) & (IData)(vlSelfRef.carry_in)));
    __VdfgRegularize_he50b618e_0_2 = ((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                      & (IData)(vlSelfRef.carry_in));
    vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xfffeU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (1U & ((IData)(__VdfgRegularize_he50b618e_0_0) 
                    | ((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                       & ((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                          | (IData)(vlSelfRef.carry_in))))));
    vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xfffeU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (1U & ((IData)(__VdfgRegularize_he50b618e_0_0) 
                    | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                        & (IData)(vlSelfRef.in_a)) 
                       | (IData)(__VdfgRegularize_he50b618e_0_1)))));
    vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xfffeU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (1U & ((IData)(__VdfgRegularize_he50b618e_0_4) 
                    | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                        & (IData)(vlSelfRef.in_a)) 
                       | (IData)(__VdfgRegularize_he50b618e_0_1)))));
    vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xfffeU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (1U & ((IData)(__VdfgRegularize_he50b618e_0_1) 
                    | (((IData)(vlSelfRef.in_a) & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                       | (IData)(__VdfgRegularize_he50b618e_0_2)))));
    vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xfffeU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (1U & ((IData)(__VdfgRegularize_he50b618e_0_4) 
                    | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                        & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                       | (IData)(__VdfgRegularize_he50b618e_0_2)))));
}

void Valu___024root___ico_comb__TOP__0(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__0\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<CData/*0:0*/, 16> alu__DOT__ar__DOT__cout11__DOT__out;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        alu__DOT__ar__DOT__cout11__DOT__out[__Vi0] = 0;
    }
    // Body
    alu__DOT__ar__DOT__cout11__DOT__out[1U] = (1U & 
                                               ((1U 
                                                 & (((IData)(vlSelfRef.in_a) 
                                                     - (IData)(1U)) 
                                                    >> 1U)) 
                                                ^ (IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector)));
    vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xfffdU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (2U & (((IData)(vlSelfRef.in_a) - (IData)(1U)) 
                    & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                       << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[2U] = (1U & 
                                               ((1U 
                                                 & (((IData)(vlSelfRef.in_a) 
                                                     - (IData)(1U)) 
                                                    >> 2U)) 
                                                ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                   >> 1U)));
    vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xfffbU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (4U & (((IData)(vlSelfRef.in_a) - (IData)(1U)) 
                    & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                       << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[3U] = (1U & 
                                               ((1U 
                                                 & (((IData)(vlSelfRef.in_a) 
                                                     - (IData)(1U)) 
                                                    >> 3U)) 
                                                ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                   >> 2U)));
    vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xfff7U & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (8U & (((IData)(vlSelfRef.in_a) - (IData)(1U)) 
                    & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                       << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[4U] = (1U & 
                                               ((1U 
                                                 & (((IData)(vlSelfRef.in_a) 
                                                     - (IData)(1U)) 
                                                    >> 4U)) 
                                                ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                   >> 3U)));
    vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xffefU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x00000010U & (((IData)(vlSelfRef.in_a) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[5U] = (1U & 
                                               ((1U 
                                                 & (((IData)(vlSelfRef.in_a) 
                                                     - (IData)(1U)) 
                                                    >> 5U)) 
                                                ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                   >> 4U)));
    vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xffdfU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x00000020U & (((IData)(vlSelfRef.in_a) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[6U] = (1U & 
                                               ((1U 
                                                 & (((IData)(vlSelfRef.in_a) 
                                                     - (IData)(1U)) 
                                                    >> 6U)) 
                                                ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                   >> 5U)));
    vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xffbfU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x00000040U & (((IData)(vlSelfRef.in_a) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[7U] = (1U & 
                                               ((1U 
                                                 & (((IData)(vlSelfRef.in_a) 
                                                     - (IData)(1U)) 
                                                    >> 7U)) 
                                                ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                   >> 6U)));
    vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xff7fU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x00000080U & (((IData)(vlSelfRef.in_a) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[8U] = (1U & 
                                               ((1U 
                                                 & (((IData)(vlSelfRef.in_a) 
                                                     - (IData)(1U)) 
                                                    >> 8U)) 
                                                ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                   >> 7U)));
    vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xfeffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x00000100U & (((IData)(vlSelfRef.in_a) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[9U] = (1U & 
                                               ((1U 
                                                 & (((IData)(vlSelfRef.in_a) 
                                                     - (IData)(1U)) 
                                                    >> 9U)) 
                                                ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                   >> 8U)));
    vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xfdffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x00000200U & (((IData)(vlSelfRef.in_a) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[0x0aU] = (1U 
                                                  & ((1U 
                                                      & (((IData)(vlSelfRef.in_a) 
                                                          - (IData)(1U)) 
                                                         >> 0x0aU)) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                      >> 9U)));
    vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xfbffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x00000400U & (((IData)(vlSelfRef.in_a) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[0x0bU] = (1U 
                                                  & ((1U 
                                                      & (((IData)(vlSelfRef.in_a) 
                                                          - (IData)(1U)) 
                                                         >> 0x0bU)) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                      >> 0x0aU)));
    vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xf7ffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x00000800U & (((IData)(vlSelfRef.in_a) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[0x0cU] = (1U 
                                                  & ((1U 
                                                      & (((IData)(vlSelfRef.in_a) 
                                                          - (IData)(1U)) 
                                                         >> 0x0cU)) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                      >> 0x0bU)));
    vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xefffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x00001000U & (((IData)(vlSelfRef.in_a) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[0x0dU] = (1U 
                                                  & ((1U 
                                                      & (((IData)(vlSelfRef.in_a) 
                                                          - (IData)(1U)) 
                                                         >> 0x0dU)) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                      >> 0x0cU)));
    vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xdfffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x00002000U & (((IData)(vlSelfRef.in_a) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[0x0eU] = (1U 
                                                  & ((1U 
                                                      & (((IData)(vlSelfRef.in_a) 
                                                          - (IData)(1U)) 
                                                         >> 0x0eU)) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                      >> 0x0dU)));
    vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xbfffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x00004000U & (((IData)(vlSelfRef.in_a) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[0x0fU] = (1U 
                                                  & ((1U 
                                                      & (((IData)(vlSelfRef.in_a) 
                                                          - (IData)(1U)) 
                                                         >> 0x0fU)) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                      >> 0x0eU)));
    vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0x7fffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x00008000U & (((IData)(vlSelfRef.in_a) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                << 1U))));
}

void Valu___024root___ico_comb__TOP__1(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__1\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<CData/*0:0*/, 16> alu__DOT__ar__DOT__cout8__DOT__out;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        alu__DOT__ar__DOT__cout8__DOT__out[__Vi0] = 0;
    }
    // Body
    alu__DOT__ar__DOT__cout8__DOT__out[1U] = (1U & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector));
    vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xfffdU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (2U & ((((((IData)(vlSelfRef.in_a) >> 1U) 
                       & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
                      | ((IData)(vlSelfRef.in_a) >> 1U)) 
                     | (((IData)(vlSelfRef.in_a) >> 1U) 
                        & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector))) 
                    << 1U)));
    alu__DOT__ar__DOT__cout8__DOT__out[2U] = (1U & 
                                              ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                               >> 1U));
    vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xfffbU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (4U & ((((((IData)(vlSelfRef.in_a) >> 2U) 
                       & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                          >> 1U)) | ((IData)(vlSelfRef.in_a) 
                                     >> 2U)) | (((IData)(vlSelfRef.in_a) 
                                                 >> 2U) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                   >> 1U))) 
                    << 2U)));
    alu__DOT__ar__DOT__cout8__DOT__out[3U] = (1U & 
                                              ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                               >> 2U));
    vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xfff7U & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (8U & ((((((IData)(vlSelfRef.in_a) >> 3U) 
                       & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                          >> 2U)) | ((IData)(vlSelfRef.in_a) 
                                     >> 3U)) | (((IData)(vlSelfRef.in_a) 
                                                 >> 3U) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                   >> 2U))) 
                    << 3U)));
    alu__DOT__ar__DOT__cout8__DOT__out[4U] = (1U & 
                                              ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                               >> 3U));
    vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xffefU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x00000010U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 4U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                           >> 3U)) 
                               | ((IData)(vlSelfRef.in_a) 
                                  >> 4U)) | (((IData)(vlSelfRef.in_a) 
                                              >> 4U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                >> 3U))) 
                             << 4U)));
    alu__DOT__ar__DOT__cout8__DOT__out[5U] = (1U & 
                                              ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                               >> 4U));
    vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xffdfU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x00000020U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 5U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                           >> 4U)) 
                               | ((IData)(vlSelfRef.in_a) 
                                  >> 5U)) | (((IData)(vlSelfRef.in_a) 
                                              >> 5U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                >> 4U))) 
                             << 5U)));
    alu__DOT__ar__DOT__cout8__DOT__out[6U] = (1U & 
                                              ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                               >> 5U));
    vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xffbfU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x00000040U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 6U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                           >> 5U)) 
                               | ((IData)(vlSelfRef.in_a) 
                                  >> 6U)) | (((IData)(vlSelfRef.in_a) 
                                              >> 6U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                >> 5U))) 
                             << 6U)));
    alu__DOT__ar__DOT__cout8__DOT__out[7U] = (1U & 
                                              ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                               >> 6U));
    vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xff7fU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x00000080U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 7U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                           >> 6U)) 
                               | ((IData)(vlSelfRef.in_a) 
                                  >> 7U)) | (((IData)(vlSelfRef.in_a) 
                                              >> 7U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                >> 6U))) 
                             << 7U)));
    alu__DOT__ar__DOT__cout8__DOT__out[8U] = (1U & 
                                              ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                               >> 7U));
    vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xfeffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x00000100U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 8U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                           >> 7U)) 
                               | ((IData)(vlSelfRef.in_a) 
                                  >> 8U)) | (((IData)(vlSelfRef.in_a) 
                                              >> 8U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                >> 7U))) 
                             << 8U)));
    alu__DOT__ar__DOT__cout8__DOT__out[9U] = (1U & 
                                              ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                               >> 8U));
    vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xfdffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x00000200U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 9U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                           >> 8U)) 
                               | ((IData)(vlSelfRef.in_a) 
                                  >> 9U)) | (((IData)(vlSelfRef.in_a) 
                                              >> 9U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                >> 8U))) 
                             << 9U)));
    alu__DOT__ar__DOT__cout8__DOT__out[0x0aU] = (1U 
                                                 & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                    >> 9U));
    vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xfbffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x00000400U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 0x0aU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                              >> 9U)) 
                               | ((IData)(vlSelfRef.in_a) 
                                  >> 0x0aU)) | (((IData)(vlSelfRef.in_a) 
                                                 >> 0x0aU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                   >> 9U))) 
                             << 0x0000000aU)));
    alu__DOT__ar__DOT__cout8__DOT__out[0x0bU] = (1U 
                                                 & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                    >> 0x0aU));
    vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xf7ffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x00000800U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 0x0bU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                              >> 0x0aU)) 
                               | ((IData)(vlSelfRef.in_a) 
                                  >> 0x0bU)) | (((IData)(vlSelfRef.in_a) 
                                                 >> 0x0bU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                   >> 0x0aU))) 
                             << 0x0000000bU)));
    alu__DOT__ar__DOT__cout8__DOT__out[0x0cU] = (1U 
                                                 & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                    >> 0x0bU));
    vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xefffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x00001000U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 0x0cU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                              >> 0x0bU)) 
                               | ((IData)(vlSelfRef.in_a) 
                                  >> 0x0cU)) | (((IData)(vlSelfRef.in_a) 
                                                 >> 0x0cU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                   >> 0x0bU))) 
                             << 0x0000000cU)));
    alu__DOT__ar__DOT__cout8__DOT__out[0x0dU] = (1U 
                                                 & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                    >> 0x0cU));
    vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xdfffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x00002000U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 0x0dU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                              >> 0x0cU)) 
                               | ((IData)(vlSelfRef.in_a) 
                                  >> 0x0dU)) | (((IData)(vlSelfRef.in_a) 
                                                 >> 0x0dU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                   >> 0x0cU))) 
                             << 0x0000000dU)));
    alu__DOT__ar__DOT__cout8__DOT__out[0x0eU] = (1U 
                                                 & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                    >> 0x0dU));
    vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xbfffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x00004000U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 0x0eU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                              >> 0x0dU)) 
                               | ((IData)(vlSelfRef.in_a) 
                                  >> 0x0eU)) | (((IData)(vlSelfRef.in_a) 
                                                 >> 0x0eU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                   >> 0x0dU))) 
                             << 0x0000000eU)));
    alu__DOT__ar__DOT__cout8__DOT__out[0x0fU] = (1U 
                                                 & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                    >> 0x0eU));
    vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0x7fffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x00008000U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 0x0fU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                              >> 0x0eU)) 
                               | ((IData)(vlSelfRef.in_a) 
                                  >> 0x0fU)) | (((IData)(vlSelfRef.in_a) 
                                                 >> 0x0fU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                   >> 0x0eU))) 
                             << 0x0000000fU)));
}

void Valu___024root___ico_comb__TOP__2(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__2\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<CData/*0:0*/, 16> alu__DOT__ar__DOT__cout5__DOT__out;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        alu__DOT__ar__DOT__cout5__DOT__out[__Vi0] = 0;
    }
    // Body
    alu__DOT__ar__DOT__cout5__DOT__out[1U] = (1U & 
                                              ((((IData)(vlSelfRef.in_a) 
                                                 ^ (IData)(vlSelfRef.in_b)) 
                                                >> 1U) 
                                               ^ (IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector)));
    vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xfffdU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (2U & ((((((IData)(vlSelfRef.in_a) >> 1U) 
                       & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
                      | (((IData)(vlSelfRef.in_a) & (IData)(vlSelfRef.in_b)) 
                         >> 1U)) | (((IData)(vlSelfRef.in_b) 
                                     >> 1U) & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector))) 
                    << 1U)));
    alu__DOT__ar__DOT__cout5__DOT__out[2U] = (1U & 
                                              ((((IData)(vlSelfRef.in_a) 
                                                 ^ (IData)(vlSelfRef.in_b)) 
                                                >> 2U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                  >> 1U)));
    vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xfffbU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (4U & ((((((IData)(vlSelfRef.in_a) >> 2U) 
                       & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                          >> 1U)) | (((IData)(vlSelfRef.in_a) 
                                      & (IData)(vlSelfRef.in_b)) 
                                     >> 2U)) | (((IData)(vlSelfRef.in_b) 
                                                 >> 2U) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                   >> 1U))) 
                    << 2U)));
    alu__DOT__ar__DOT__cout5__DOT__out[3U] = (1U & 
                                              ((((IData)(vlSelfRef.in_a) 
                                                 ^ (IData)(vlSelfRef.in_b)) 
                                                >> 3U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                  >> 2U)));
    vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xfff7U & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (8U & ((((((IData)(vlSelfRef.in_a) >> 3U) 
                       & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                          >> 2U)) | (((IData)(vlSelfRef.in_a) 
                                      & (IData)(vlSelfRef.in_b)) 
                                     >> 3U)) | (((IData)(vlSelfRef.in_b) 
                                                 >> 3U) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                   >> 2U))) 
                    << 3U)));
    alu__DOT__ar__DOT__cout5__DOT__out[4U] = (1U & 
                                              ((((IData)(vlSelfRef.in_a) 
                                                 ^ (IData)(vlSelfRef.in_b)) 
                                                >> 4U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                  >> 3U)));
    vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xffefU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x00000010U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 4U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                           >> 3U)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.in_b)) 
                                  >> 4U)) | (((IData)(vlSelfRef.in_b) 
                                              >> 4U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                >> 3U))) 
                             << 4U)));
    alu__DOT__ar__DOT__cout5__DOT__out[5U] = (1U & 
                                              ((((IData)(vlSelfRef.in_a) 
                                                 ^ (IData)(vlSelfRef.in_b)) 
                                                >> 5U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                  >> 4U)));
    vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xffdfU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x00000020U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 5U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                           >> 4U)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.in_b)) 
                                  >> 5U)) | (((IData)(vlSelfRef.in_b) 
                                              >> 5U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                >> 4U))) 
                             << 5U)));
    alu__DOT__ar__DOT__cout5__DOT__out[6U] = (1U & 
                                              ((((IData)(vlSelfRef.in_a) 
                                                 ^ (IData)(vlSelfRef.in_b)) 
                                                >> 6U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                  >> 5U)));
    vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xffbfU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x00000040U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 6U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                           >> 5U)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.in_b)) 
                                  >> 6U)) | (((IData)(vlSelfRef.in_b) 
                                              >> 6U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                >> 5U))) 
                             << 6U)));
    alu__DOT__ar__DOT__cout5__DOT__out[7U] = (1U & 
                                              ((((IData)(vlSelfRef.in_a) 
                                                 ^ (IData)(vlSelfRef.in_b)) 
                                                >> 7U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                  >> 6U)));
    vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xff7fU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x00000080U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 7U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                           >> 6U)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.in_b)) 
                                  >> 7U)) | (((IData)(vlSelfRef.in_b) 
                                              >> 7U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                >> 6U))) 
                             << 7U)));
    alu__DOT__ar__DOT__cout5__DOT__out[8U] = (1U & 
                                              ((((IData)(vlSelfRef.in_a) 
                                                 ^ (IData)(vlSelfRef.in_b)) 
                                                >> 8U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                  >> 7U)));
    vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xfeffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x00000100U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 8U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                           >> 7U)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.in_b)) 
                                  >> 8U)) | (((IData)(vlSelfRef.in_b) 
                                              >> 8U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                >> 7U))) 
                             << 8U)));
    alu__DOT__ar__DOT__cout5__DOT__out[9U] = (1U & 
                                              ((((IData)(vlSelfRef.in_a) 
                                                 ^ (IData)(vlSelfRef.in_b)) 
                                                >> 9U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                  >> 8U)));
    vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xfdffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x00000200U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 9U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                           >> 8U)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.in_b)) 
                                  >> 9U)) | (((IData)(vlSelfRef.in_b) 
                                              >> 9U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                >> 8U))) 
                             << 9U)));
    alu__DOT__ar__DOT__cout5__DOT__out[0x0aU] = (1U 
                                                 & ((((IData)(vlSelfRef.in_a) 
                                                      ^ (IData)(vlSelfRef.in_b)) 
                                                     >> 0x0aU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                     >> 9U)));
    vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xfbffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x00000400U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 0x0aU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                              >> 9U)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.in_b)) 
                                  >> 0x0aU)) | (((IData)(vlSelfRef.in_b) 
                                                 >> 0x0aU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                   >> 9U))) 
                             << 0x0000000aU)));
    alu__DOT__ar__DOT__cout5__DOT__out[0x0bU] = (1U 
                                                 & ((((IData)(vlSelfRef.in_a) 
                                                      ^ (IData)(vlSelfRef.in_b)) 
                                                     >> 0x0bU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                     >> 0x0aU)));
    vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xf7ffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x00000800U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 0x0bU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                              >> 0x0aU)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.in_b)) 
                                  >> 0x0bU)) | (((IData)(vlSelfRef.in_b) 
                                                 >> 0x0bU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                   >> 0x0aU))) 
                             << 0x0000000bU)));
    alu__DOT__ar__DOT__cout5__DOT__out[0x0cU] = (1U 
                                                 & ((((IData)(vlSelfRef.in_a) 
                                                      ^ (IData)(vlSelfRef.in_b)) 
                                                     >> 0x0cU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                     >> 0x0bU)));
    vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xefffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x00001000U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 0x0cU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                              >> 0x0bU)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.in_b)) 
                                  >> 0x0cU)) | (((IData)(vlSelfRef.in_b) 
                                                 >> 0x0cU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                   >> 0x0bU))) 
                             << 0x0000000cU)));
    alu__DOT__ar__DOT__cout5__DOT__out[0x0dU] = (1U 
                                                 & ((((IData)(vlSelfRef.in_a) 
                                                      ^ (IData)(vlSelfRef.in_b)) 
                                                     >> 0x0dU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                     >> 0x0cU)));
    vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xdfffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x00002000U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 0x0dU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                              >> 0x0cU)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.in_b)) 
                                  >> 0x0dU)) | (((IData)(vlSelfRef.in_b) 
                                                 >> 0x0dU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                   >> 0x0cU))) 
                             << 0x0000000dU)));
    alu__DOT__ar__DOT__cout5__DOT__out[0x0eU] = (1U 
                                                 & ((((IData)(vlSelfRef.in_a) 
                                                      ^ (IData)(vlSelfRef.in_b)) 
                                                     >> 0x0eU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                     >> 0x0dU)));
    vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xbfffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x00004000U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 0x0eU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                              >> 0x0dU)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.in_b)) 
                                  >> 0x0eU)) | (((IData)(vlSelfRef.in_b) 
                                                 >> 0x0eU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                   >> 0x0dU))) 
                             << 0x0000000eU)));
    alu__DOT__ar__DOT__cout5__DOT__out[0x0fU] = (1U 
                                                 & ((((IData)(vlSelfRef.in_a) 
                                                      ^ (IData)(vlSelfRef.in_b)) 
                                                     >> 0x0fU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                     >> 0x0eU)));
    vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0x7fffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x00008000U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 0x0fU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                              >> 0x0eU)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.in_b)) 
                                  >> 0x0fU)) | (((IData)(vlSelfRef.in_b) 
                                                 >> 0x0fU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                   >> 0x0eU))) 
                             << 0x0000000fU)));
}

void Valu___024root___ico_comb__TOP__3(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__3\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<CData/*0:0*/, 16> alu__DOT__ar__DOT__cout2__DOT__out;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        alu__DOT__ar__DOT__cout2__DOT__out[__Vi0] = 0;
    }
    // Body
    alu__DOT__ar__DOT__cout2__DOT__out[1U] = (1U & 
                                              (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                >> 1U) 
                                               ^ (IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector)));
    vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xfffdU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (2U & ((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                    & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                       << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[2U] = (1U & 
                                              (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                >> 2U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                  >> 1U)));
    vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xfffbU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (4U & ((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                    & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                       << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[3U] = (1U & 
                                              (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                >> 3U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                  >> 2U)));
    vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xfff7U & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (8U & ((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                    & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                       << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[4U] = (1U & 
                                              (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                >> 4U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                  >> 3U)));
    vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xffefU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (0x00000010U & ((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[5U] = (1U & 
                                              (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                >> 5U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                  >> 4U)));
    vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xffdfU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (0x00000020U & ((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[6U] = (1U & 
                                              (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                >> 6U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                  >> 5U)));
    vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xffbfU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (0x00000040U & ((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[7U] = (1U & 
                                              (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                >> 7U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                  >> 6U)));
    vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xff7fU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (0x00000080U & ((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[8U] = (1U & 
                                              (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                >> 8U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                  >> 7U)));
    vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xfeffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (0x00000100U & ((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[9U] = (1U & 
                                              (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                >> 9U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                  >> 8U)));
    vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xfdffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (0x00000200U & ((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[0x0aU] = (1U 
                                                 & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                     >> 0x0aU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                     >> 9U)));
    vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xfbffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (0x00000400U & ((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[0x0bU] = (1U 
                                                 & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                     >> 0x0bU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                     >> 0x0aU)));
    vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xf7ffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (0x00000800U & ((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[0x0cU] = (1U 
                                                 & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                     >> 0x0cU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                     >> 0x0bU)));
    vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xefffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (0x00001000U & ((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[0x0dU] = (1U 
                                                 & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                     >> 0x0dU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                     >> 0x0cU)));
    vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xdfffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (0x00002000U & ((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[0x0eU] = (1U 
                                                 & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                     >> 0x0eU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                     >> 0x0dU)));
    vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xbfffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (0x00004000U & ((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[0x0fU] = (1U 
                                                 & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                     >> 0x0fU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                     >> 0x0eU)));
    vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0x7fffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | ((IData)((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                        >> 0x0000000fU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                           >> 0x0000000eU))) 
              << 0x0000000fU));
}

void Valu___024root___ico_comb__TOP__4(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__4\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<CData/*0:0*/, 16> alu__DOT__ar__DOT__cout3__DOT__out;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        alu__DOT__ar__DOT__cout3__DOT__out[__Vi0] = 0;
    }
    // Body
    alu__DOT__ar__DOT__cout3__DOT__out[1U] = (1U & 
                                              ((1U 
                                                & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 1U)) 
                                               ^ (IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector)));
    vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xfffdU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (2U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                     - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                       << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[2U] = (1U & 
                                              ((1U 
                                                & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 2U)) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                  >> 1U)));
    vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xfffbU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (4U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                     - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                       << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[3U] = (1U & 
                                              ((1U 
                                                & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 3U)) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                  >> 2U)));
    vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xfff7U & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (8U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                     - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                       << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[4U] = (1U & 
                                              ((1U 
                                                & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 4U)) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                  >> 3U)));
    vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xffefU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x00000010U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[5U] = (1U & 
                                              ((1U 
                                                & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 5U)) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                  >> 4U)));
    vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xffdfU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x00000020U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[6U] = (1U & 
                                              ((1U 
                                                & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 6U)) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                  >> 5U)));
    vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xffbfU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x00000040U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[7U] = (1U & 
                                              ((1U 
                                                & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 7U)) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                  >> 6U)));
    vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xff7fU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x00000080U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[8U] = (1U & 
                                              ((1U 
                                                & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 8U)) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                  >> 7U)));
    vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xfeffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x00000100U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[9U] = (1U & 
                                              ((1U 
                                                & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 9U)) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                  >> 8U)));
    vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xfdffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x00000200U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[0x0aU] = (1U 
                                                 & ((1U 
                                                     & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                         - (IData)(1U)) 
                                                        >> 0x0aU)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                     >> 9U)));
    vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xfbffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x00000400U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[0x0bU] = (1U 
                                                 & ((1U 
                                                     & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                         - (IData)(1U)) 
                                                        >> 0x0bU)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                     >> 0x0aU)));
    vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xf7ffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x00000800U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[0x0cU] = (1U 
                                                 & ((1U 
                                                     & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                         - (IData)(1U)) 
                                                        >> 0x0cU)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                     >> 0x0bU)));
    vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xefffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x00001000U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[0x0dU] = (1U 
                                                 & ((1U 
                                                     & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                         - (IData)(1U)) 
                                                        >> 0x0dU)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                     >> 0x0cU)));
    vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xdfffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x00002000U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[0x0eU] = (1U 
                                                 & ((1U 
                                                     & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                         - (IData)(1U)) 
                                                        >> 0x0eU)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                     >> 0x0dU)));
    vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xbfffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x00004000U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[0x0fU] = (1U 
                                                 & ((1U 
                                                     & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                         - (IData)(1U)) 
                                                        >> 0x0fU)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                     >> 0x0eU)));
    vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0x7fffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x00008000U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                << 1U))));
}

void Valu___024root___ico_comb__TOP__5(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__5\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<CData/*0:0*/, 16> alu__DOT__ar__DOT__cout9__DOT__out;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        alu__DOT__ar__DOT__cout9__DOT__out[__Vi0] = 0;
    }
    // Body
    alu__DOT__ar__DOT__cout9__DOT__out[1U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.in_a)) 
                                                >> 1U) 
                                               ^ (IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector)));
    vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xfffdU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (2U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                        >> 1U) & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
                      | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                          & (IData)(vlSelfRef.in_a)) 
                         >> 1U)) | (((IData)(vlSelfRef.in_a) 
                                     >> 1U) & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector))) 
                    << 1U)));
    alu__DOT__ar__DOT__cout9__DOT__out[2U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.in_a)) 
                                                >> 2U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                  >> 1U)));
    vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xfffbU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (4U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                        >> 2U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                  >> 1U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                              & (IData)(vlSelfRef.in_a)) 
                                             >> 2U)) 
                     | (((IData)(vlSelfRef.in_a) >> 2U) 
                        & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                           >> 1U))) << 2U)));
    alu__DOT__ar__DOT__cout9__DOT__out[3U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.in_a)) 
                                                >> 3U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                  >> 2U)));
    vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xfff7U & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (8U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                        >> 3U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                  >> 2U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                              & (IData)(vlSelfRef.in_a)) 
                                             >> 3U)) 
                     | (((IData)(vlSelfRef.in_a) >> 3U) 
                        & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                           >> 2U))) << 3U)));
    alu__DOT__ar__DOT__cout9__DOT__out[4U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.in_a)) 
                                                >> 4U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                  >> 3U)));
    vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xffefU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x00000010U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 4U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                           >> 3U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 4U)) | (((IData)(vlSelfRef.in_a) 
                                              >> 4U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                >> 3U))) 
                             << 4U)));
    alu__DOT__ar__DOT__cout9__DOT__out[5U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.in_a)) 
                                                >> 5U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                  >> 4U)));
    vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xffdfU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x00000020U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 5U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                           >> 4U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 5U)) | (((IData)(vlSelfRef.in_a) 
                                              >> 5U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                >> 4U))) 
                             << 5U)));
    alu__DOT__ar__DOT__cout9__DOT__out[6U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.in_a)) 
                                                >> 6U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                  >> 5U)));
    vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xffbfU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x00000040U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 6U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                           >> 5U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 6U)) | (((IData)(vlSelfRef.in_a) 
                                              >> 6U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                >> 5U))) 
                             << 6U)));
    alu__DOT__ar__DOT__cout9__DOT__out[7U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.in_a)) 
                                                >> 7U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                  >> 6U)));
    vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xff7fU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x00000080U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 7U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                           >> 6U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 7U)) | (((IData)(vlSelfRef.in_a) 
                                              >> 7U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                >> 6U))) 
                             << 7U)));
    alu__DOT__ar__DOT__cout9__DOT__out[8U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.in_a)) 
                                                >> 8U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                  >> 7U)));
    vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xfeffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x00000100U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 8U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                           >> 7U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 8U)) | (((IData)(vlSelfRef.in_a) 
                                              >> 8U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                >> 7U))) 
                             << 8U)));
    alu__DOT__ar__DOT__cout9__DOT__out[9U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.in_a)) 
                                                >> 9U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                  >> 8U)));
    vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xfdffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x00000200U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 9U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                           >> 8U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 9U)) | (((IData)(vlSelfRef.in_a) 
                                              >> 9U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                >> 8U))) 
                             << 9U)));
    alu__DOT__ar__DOT__cout9__DOT__out[0x0aU] = (1U 
                                                 & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                      ^ (IData)(vlSelfRef.in_a)) 
                                                     >> 0x0aU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                     >> 9U)));
    vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xfbffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x00000400U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 0x0aU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                              >> 9U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 0x0aU)) | (((IData)(vlSelfRef.in_a) 
                                                 >> 0x0aU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                   >> 9U))) 
                             << 0x0000000aU)));
    alu__DOT__ar__DOT__cout9__DOT__out[0x0bU] = (1U 
                                                 & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                      ^ (IData)(vlSelfRef.in_a)) 
                                                     >> 0x0bU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                     >> 0x0aU)));
    vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xf7ffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x00000800U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 0x0bU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                              >> 0x0aU)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 0x0bU)) | (((IData)(vlSelfRef.in_a) 
                                                 >> 0x0bU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                   >> 0x0aU))) 
                             << 0x0000000bU)));
    alu__DOT__ar__DOT__cout9__DOT__out[0x0cU] = (1U 
                                                 & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                      ^ (IData)(vlSelfRef.in_a)) 
                                                     >> 0x0cU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                     >> 0x0bU)));
    vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xefffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x00001000U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 0x0cU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                              >> 0x0bU)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 0x0cU)) | (((IData)(vlSelfRef.in_a) 
                                                 >> 0x0cU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                   >> 0x0bU))) 
                             << 0x0000000cU)));
    alu__DOT__ar__DOT__cout9__DOT__out[0x0dU] = (1U 
                                                 & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                      ^ (IData)(vlSelfRef.in_a)) 
                                                     >> 0x0dU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                     >> 0x0cU)));
    vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xdfffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x00002000U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 0x0dU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                              >> 0x0cU)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 0x0dU)) | (((IData)(vlSelfRef.in_a) 
                                                 >> 0x0dU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                   >> 0x0cU))) 
                             << 0x0000000dU)));
    alu__DOT__ar__DOT__cout9__DOT__out[0x0eU] = (1U 
                                                 & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                      ^ (IData)(vlSelfRef.in_a)) 
                                                     >> 0x0eU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                     >> 0x0dU)));
    vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xbfffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x00004000U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 0x0eU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                              >> 0x0dU)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 0x0eU)) | (((IData)(vlSelfRef.in_a) 
                                                 >> 0x0eU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                   >> 0x0dU))) 
                             << 0x0000000eU)));
    alu__DOT__ar__DOT__cout9__DOT__out[0x0fU] = (1U 
                                                 & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                      ^ (IData)(vlSelfRef.in_a)) 
                                                     >> 0x0fU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                     >> 0x0eU)));
    vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0x7fffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x00008000U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 0x0fU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                              >> 0x0eU)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 0x0fU)) | (((IData)(vlSelfRef.in_a) 
                                                 >> 0x0fU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                   >> 0x0eU))) 
                             << 0x0000000fU)));
}

void Valu___024root___ico_comb__TOP__6(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__6\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<CData/*0:0*/, 16> alu__DOT__ar__DOT__cout1__DOT__out;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        alu__DOT__ar__DOT__cout1__DOT__out[__Vi0] = 0;
    }
    // Body
    alu__DOT__ar__DOT__cout1__DOT__out[1U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                >> 1U) 
                                               ^ (IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector)));
    vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xfffdU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (2U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                        >> 1U) & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
                      | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                          & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                         >> 1U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                     >> 1U) & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector))) 
                    << 1U)));
    alu__DOT__ar__DOT__cout1__DOT__out[2U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                >> 2U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                  >> 1U)));
    vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xfffbU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (4U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                        >> 2U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                  >> 1U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                              & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                             >> 2U)) 
                     | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                         >> 2U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                   >> 1U))) << 2U)));
    alu__DOT__ar__DOT__cout1__DOT__out[3U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                >> 3U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                  >> 2U)));
    vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xfff7U & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (8U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                        >> 3U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                  >> 2U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                              & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                             >> 3U)) 
                     | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                         >> 3U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                   >> 2U))) << 3U)));
    alu__DOT__ar__DOT__cout1__DOT__out[4U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                >> 4U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                  >> 3U)));
    vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xffefU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x00000010U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 4U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                           >> 3U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                  >> 4U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                              >> 4U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                >> 3U))) 
                             << 4U)));
    alu__DOT__ar__DOT__cout1__DOT__out[5U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                >> 5U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                  >> 4U)));
    vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xffdfU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x00000020U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 5U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                           >> 4U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                  >> 5U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                              >> 5U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                >> 4U))) 
                             << 5U)));
    alu__DOT__ar__DOT__cout1__DOT__out[6U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                >> 6U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                  >> 5U)));
    vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xffbfU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x00000040U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 6U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                           >> 5U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                  >> 6U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                              >> 6U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                >> 5U))) 
                             << 6U)));
    alu__DOT__ar__DOT__cout1__DOT__out[7U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                >> 7U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                  >> 6U)));
    vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xff7fU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x00000080U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 7U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                           >> 6U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                  >> 7U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                              >> 7U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                >> 6U))) 
                             << 7U)));
    alu__DOT__ar__DOT__cout1__DOT__out[8U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                >> 8U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                  >> 7U)));
    vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xfeffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x00000100U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 8U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                           >> 7U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                  >> 8U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                              >> 8U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                >> 7U))) 
                             << 8U)));
    alu__DOT__ar__DOT__cout1__DOT__out[9U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                >> 9U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                  >> 8U)));
    vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xfdffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x00000200U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 9U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                           >> 8U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                  >> 9U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                              >> 9U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                >> 8U))) 
                             << 9U)));
    alu__DOT__ar__DOT__cout1__DOT__out[0x0aU] = (1U 
                                                 & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                      ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                     >> 0x0aU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                     >> 9U)));
    vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xfbffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x00000400U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 0x0aU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                              >> 9U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                  >> 0x0aU)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                 >> 0x0aU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                   >> 9U))) 
                             << 0x0000000aU)));
    alu__DOT__ar__DOT__cout1__DOT__out[0x0bU] = (1U 
                                                 & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                      ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                     >> 0x0bU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                     >> 0x0aU)));
    vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xf7ffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x00000800U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 0x0bU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                              >> 0x0aU)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                  >> 0x0bU)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                 >> 0x0bU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                   >> 0x0aU))) 
                             << 0x0000000bU)));
    alu__DOT__ar__DOT__cout1__DOT__out[0x0cU] = (1U 
                                                 & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                      ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                     >> 0x0cU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                     >> 0x0bU)));
    vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xefffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x00001000U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 0x0cU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                              >> 0x0bU)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                  >> 0x0cU)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                 >> 0x0cU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                   >> 0x0bU))) 
                             << 0x0000000cU)));
    alu__DOT__ar__DOT__cout1__DOT__out[0x0dU] = (1U 
                                                 & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                      ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                     >> 0x0dU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                     >> 0x0cU)));
    vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xdfffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x00002000U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 0x0dU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                              >> 0x0cU)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                  >> 0x0dU)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                 >> 0x0dU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                   >> 0x0cU))) 
                             << 0x0000000dU)));
    alu__DOT__ar__DOT__cout1__DOT__out[0x0eU] = (1U 
                                                 & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                      ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                     >> 0x0eU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                     >> 0x0dU)));
    vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xbfffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x00004000U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 0x0eU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                              >> 0x0dU)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                  >> 0x0eU)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                 >> 0x0eU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                   >> 0x0dU))) 
                             << 0x0000000eU)));
    alu__DOT__ar__DOT__cout1__DOT__out[0x0fU] = (1U 
                                                 & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                      ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                     >> 0x0fU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                     >> 0x0eU)));
    vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0x7fffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x00008000U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                 >> 0x0fU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                              >> 0x0eU)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                  >> 0x0fU)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                 >> 0x0fU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                   >> 0x0eU))) 
                             << 0x0000000fU)));
}

void Valu___024root___ico_comb__TOP__7(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__7\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<CData/*0:0*/, 16> alu__DOT__ar__DOT__cout10__DOT__out;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        alu__DOT__ar__DOT__cout10__DOT__out[__Vi0] = 0;
    }
    // Body
    alu__DOT__ar__DOT__cout10__DOT__out[1U] = (1U & 
                                               ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                  ^ (IData)(vlSelfRef.in_a)) 
                                                 >> 1U) 
                                                ^ (IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector)));
    vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xfffdU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (2U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                        >> 1U) & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
                      | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                          & (IData)(vlSelfRef.in_a)) 
                         >> 1U)) | (((IData)(vlSelfRef.in_a) 
                                     >> 1U) & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector))) 
                    << 1U)));
    alu__DOT__ar__DOT__cout10__DOT__out[2U] = (1U & 
                                               ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                  ^ (IData)(vlSelfRef.in_a)) 
                                                 >> 2U) 
                                                ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   >> 1U)));
    vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xfffbU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (4U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                        >> 2U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                  >> 1U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                              & (IData)(vlSelfRef.in_a)) 
                                             >> 2U)) 
                     | (((IData)(vlSelfRef.in_a) >> 2U) 
                        & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                           >> 1U))) << 2U)));
    alu__DOT__ar__DOT__cout10__DOT__out[3U] = (1U & 
                                               ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                  ^ (IData)(vlSelfRef.in_a)) 
                                                 >> 3U) 
                                                ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   >> 2U)));
    vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xfff7U & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (8U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                        >> 3U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                  >> 2U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                              & (IData)(vlSelfRef.in_a)) 
                                             >> 3U)) 
                     | (((IData)(vlSelfRef.in_a) >> 3U) 
                        & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                           >> 2U))) << 3U)));
    alu__DOT__ar__DOT__cout10__DOT__out[4U] = (1U & 
                                               ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                  ^ (IData)(vlSelfRef.in_a)) 
                                                 >> 4U) 
                                                ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   >> 3U)));
    vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xffefU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x00000010U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 4U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                           >> 3U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 4U)) | (((IData)(vlSelfRef.in_a) 
                                              >> 4U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                >> 3U))) 
                             << 4U)));
    alu__DOT__ar__DOT__cout10__DOT__out[5U] = (1U & 
                                               ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                  ^ (IData)(vlSelfRef.in_a)) 
                                                 >> 5U) 
                                                ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   >> 4U)));
    vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xffdfU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x00000020U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 5U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                           >> 4U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 5U)) | (((IData)(vlSelfRef.in_a) 
                                              >> 5U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                >> 4U))) 
                             << 5U)));
    alu__DOT__ar__DOT__cout10__DOT__out[6U] = (1U & 
                                               ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                  ^ (IData)(vlSelfRef.in_a)) 
                                                 >> 6U) 
                                                ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   >> 5U)));
    vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xffbfU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x00000040U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 6U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                           >> 5U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 6U)) | (((IData)(vlSelfRef.in_a) 
                                              >> 6U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                >> 5U))) 
                             << 6U)));
    alu__DOT__ar__DOT__cout10__DOT__out[7U] = (1U & 
                                               ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                  ^ (IData)(vlSelfRef.in_a)) 
                                                 >> 7U) 
                                                ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   >> 6U)));
    vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xff7fU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x00000080U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 7U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                           >> 6U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 7U)) | (((IData)(vlSelfRef.in_a) 
                                              >> 7U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                >> 6U))) 
                             << 7U)));
    alu__DOT__ar__DOT__cout10__DOT__out[8U] = (1U & 
                                               ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                  ^ (IData)(vlSelfRef.in_a)) 
                                                 >> 8U) 
                                                ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   >> 7U)));
    vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xfeffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x00000100U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 8U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                           >> 7U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 8U)) | (((IData)(vlSelfRef.in_a) 
                                              >> 8U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                >> 7U))) 
                             << 8U)));
    alu__DOT__ar__DOT__cout10__DOT__out[9U] = (1U & 
                                               ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                  ^ (IData)(vlSelfRef.in_a)) 
                                                 >> 9U) 
                                                ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   >> 8U)));
    vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xfdffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x00000200U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 9U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                           >> 8U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 9U)) | (((IData)(vlSelfRef.in_a) 
                                              >> 9U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                >> 8U))) 
                             << 9U)));
    alu__DOT__ar__DOT__cout10__DOT__out[0x0aU] = (1U 
                                                  & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                       ^ (IData)(vlSelfRef.in_a)) 
                                                      >> 0x0aU) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                      >> 9U)));
    vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xfbffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x00000400U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 0x0aU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                              >> 9U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 0x0aU)) | (((IData)(vlSelfRef.in_a) 
                                                 >> 0x0aU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   >> 9U))) 
                             << 0x0000000aU)));
    alu__DOT__ar__DOT__cout10__DOT__out[0x0bU] = (1U 
                                                  & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                       ^ (IData)(vlSelfRef.in_a)) 
                                                      >> 0x0bU) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                      >> 0x0aU)));
    vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xf7ffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x00000800U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 0x0bU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                              >> 0x0aU)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 0x0bU)) | (((IData)(vlSelfRef.in_a) 
                                                 >> 0x0bU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   >> 0x0aU))) 
                             << 0x0000000bU)));
    alu__DOT__ar__DOT__cout10__DOT__out[0x0cU] = (1U 
                                                  & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                       ^ (IData)(vlSelfRef.in_a)) 
                                                      >> 0x0cU) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                      >> 0x0bU)));
    vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xefffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x00001000U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 0x0cU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                              >> 0x0bU)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 0x0cU)) | (((IData)(vlSelfRef.in_a) 
                                                 >> 0x0cU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   >> 0x0bU))) 
                             << 0x0000000cU)));
    alu__DOT__ar__DOT__cout10__DOT__out[0x0dU] = (1U 
                                                  & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                       ^ (IData)(vlSelfRef.in_a)) 
                                                      >> 0x0dU) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                      >> 0x0cU)));
    vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xdfffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x00002000U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 0x0dU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                              >> 0x0cU)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 0x0dU)) | (((IData)(vlSelfRef.in_a) 
                                                 >> 0x0dU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   >> 0x0cU))) 
                             << 0x0000000dU)));
    alu__DOT__ar__DOT__cout10__DOT__out[0x0eU] = (1U 
                                                  & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                       ^ (IData)(vlSelfRef.in_a)) 
                                                      >> 0x0eU) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                      >> 0x0dU)));
    vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xbfffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x00004000U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 0x0eU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                              >> 0x0dU)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 0x0eU)) | (((IData)(vlSelfRef.in_a) 
                                                 >> 0x0eU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   >> 0x0dU))) 
                             << 0x0000000eU)));
    alu__DOT__ar__DOT__cout10__DOT__out[0x0fU] = (1U 
                                                  & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                       ^ (IData)(vlSelfRef.in_a)) 
                                                      >> 0x0fU) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                      >> 0x0eU)));
    vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0x7fffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x00008000U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 0x0fU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                              >> 0x0eU)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.in_a)) 
                                  >> 0x0fU)) | (((IData)(vlSelfRef.in_a) 
                                                 >> 0x0fU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   >> 0x0eU))) 
                             << 0x0000000fU)));
}

void Valu___024root___ico_comb__TOP__8(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__8\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<CData/*0:0*/, 16> alu__DOT__ar__DOT__cout7__DOT__out;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        alu__DOT__ar__DOT__cout7__DOT__out[__Vi0] = 0;
    }
    // Body
    alu__DOT__ar__DOT__cout7__DOT__out[1U] = (1U & 
                                              ((1U 
                                                & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 1U)) 
                                               ^ (IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector)));
    vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xfffdU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (2U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                     - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                       << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[2U] = (1U & 
                                              ((1U 
                                                & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 2U)) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                  >> 1U)));
    vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xfffbU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (4U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                     - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                       << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[3U] = (1U & 
                                              ((1U 
                                                & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 3U)) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                  >> 2U)));
    vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xfff7U & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (8U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                     - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                       << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[4U] = (1U & 
                                              ((1U 
                                                & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 4U)) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                  >> 3U)));
    vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xffefU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x00000010U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[5U] = (1U & 
                                              ((1U 
                                                & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 5U)) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                  >> 4U)));
    vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xffdfU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x00000020U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[6U] = (1U & 
                                              ((1U 
                                                & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 6U)) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                  >> 5U)));
    vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xffbfU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x00000040U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[7U] = (1U & 
                                              ((1U 
                                                & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 7U)) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                  >> 6U)));
    vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xff7fU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x00000080U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[8U] = (1U & 
                                              ((1U 
                                                & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 8U)) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                  >> 7U)));
    vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xfeffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x00000100U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[9U] = (1U & 
                                              ((1U 
                                                & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 9U)) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                  >> 8U)));
    vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xfdffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x00000200U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[0x0aU] = (1U 
                                                 & ((1U 
                                                     & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                         - (IData)(1U)) 
                                                        >> 0x0aU)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                     >> 9U)));
    vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xfbffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x00000400U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[0x0bU] = (1U 
                                                 & ((1U 
                                                     & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                         - (IData)(1U)) 
                                                        >> 0x0bU)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                     >> 0x0aU)));
    vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xf7ffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x00000800U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[0x0cU] = (1U 
                                                 & ((1U 
                                                     & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                         - (IData)(1U)) 
                                                        >> 0x0cU)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                     >> 0x0bU)));
    vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xefffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x00001000U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[0x0dU] = (1U 
                                                 & ((1U 
                                                     & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                         - (IData)(1U)) 
                                                        >> 0x0dU)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                     >> 0x0cU)));
    vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xdfffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x00002000U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[0x0eU] = (1U 
                                                 & ((1U 
                                                     & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                         - (IData)(1U)) 
                                                        >> 0x0eU)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                     >> 0x0dU)));
    vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xbfffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x00004000U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[0x0fU] = (1U 
                                                 & ((1U 
                                                     & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                         - (IData)(1U)) 
                                                        >> 0x0fU)) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                     >> 0x0eU)));
    vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0x7fffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x00008000U & (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                              - (IData)(1U)) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                << 1U))));
}

void Valu___024root___ico_comb__TOP__9(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__9\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<CData/*0:0*/, 16> alu__DOT__ar__DOT__cout6__DOT__out;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        alu__DOT__ar__DOT__cout6__DOT__out[__Vi0] = 0;
    }
    // Body
    alu__DOT__ar__DOT__cout6__DOT__out[1U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 1U) 
                                               ^ (IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector)));
    vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xfffdU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (2U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                        >> 1U) & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
                      | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                          & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                         >> 1U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                     >> 1U) & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector))) 
                    << 1U)));
    alu__DOT__ar__DOT__cout6__DOT__out[2U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 2U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                  >> 1U)));
    vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xfffbU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (4U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                        >> 2U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                  >> 1U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                              & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                             >> 2U)) 
                     | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                         >> 2U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                   >> 1U))) << 2U)));
    alu__DOT__ar__DOT__cout6__DOT__out[3U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 3U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                  >> 2U)));
    vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xfff7U & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (8U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                        >> 3U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                  >> 2U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                              & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                             >> 3U)) 
                     | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                         >> 3U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                   >> 2U))) << 3U)));
    alu__DOT__ar__DOT__cout6__DOT__out[4U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 4U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                  >> 3U)));
    vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xffefU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x00000010U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 4U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                           >> 3U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 4U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                              >> 4U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                >> 3U))) 
                             << 4U)));
    alu__DOT__ar__DOT__cout6__DOT__out[5U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 5U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                  >> 4U)));
    vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xffdfU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x00000020U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 5U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                           >> 4U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 5U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                              >> 5U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                >> 4U))) 
                             << 5U)));
    alu__DOT__ar__DOT__cout6__DOT__out[6U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 6U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                  >> 5U)));
    vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xffbfU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x00000040U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 6U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                           >> 5U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 6U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                              >> 6U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                >> 5U))) 
                             << 6U)));
    alu__DOT__ar__DOT__cout6__DOT__out[7U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 7U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                  >> 6U)));
    vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xff7fU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x00000080U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 7U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                           >> 6U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 7U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                              >> 7U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                >> 6U))) 
                             << 7U)));
    alu__DOT__ar__DOT__cout6__DOT__out[8U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 8U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                  >> 7U)));
    vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xfeffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x00000100U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 8U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                           >> 7U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 8U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                              >> 8U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                >> 7U))) 
                             << 8U)));
    alu__DOT__ar__DOT__cout6__DOT__out[9U] = (1U & 
                                              ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 9U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                  >> 8U)));
    vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xfdffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x00000200U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 9U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                           >> 8U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 9U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                              >> 9U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                >> 8U))) 
                             << 9U)));
    alu__DOT__ar__DOT__cout6__DOT__out[0x0aU] = (1U 
                                                 & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                      ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                     >> 0x0aU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                     >> 9U)));
    vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xfbffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x00000400U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 0x0aU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                              >> 9U)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 0x0aU)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                 >> 0x0aU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                   >> 9U))) 
                             << 0x0000000aU)));
    alu__DOT__ar__DOT__cout6__DOT__out[0x0bU] = (1U 
                                                 & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                      ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                     >> 0x0bU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                     >> 0x0aU)));
    vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xf7ffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x00000800U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 0x0bU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                              >> 0x0aU)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 0x0bU)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                 >> 0x0bU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                   >> 0x0aU))) 
                             << 0x0000000bU)));
    alu__DOT__ar__DOT__cout6__DOT__out[0x0cU] = (1U 
                                                 & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                      ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                     >> 0x0cU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                     >> 0x0bU)));
    vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xefffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x00001000U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 0x0cU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                              >> 0x0bU)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 0x0cU)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                 >> 0x0cU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                   >> 0x0bU))) 
                             << 0x0000000cU)));
    alu__DOT__ar__DOT__cout6__DOT__out[0x0dU] = (1U 
                                                 & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                      ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                     >> 0x0dU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                     >> 0x0cU)));
    vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xdfffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x00002000U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 0x0dU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                              >> 0x0cU)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 0x0dU)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                 >> 0x0dU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                   >> 0x0cU))) 
                             << 0x0000000dU)));
    alu__DOT__ar__DOT__cout6__DOT__out[0x0eU] = (1U 
                                                 & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                      ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                     >> 0x0eU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                     >> 0x0dU)));
    vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xbfffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x00004000U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 0x0eU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                              >> 0x0dU)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 0x0eU)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                 >> 0x0eU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                   >> 0x0dU))) 
                             << 0x0000000eU)));
    alu__DOT__ar__DOT__cout6__DOT__out[0x0fU] = (1U 
                                                 & ((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                      ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                     >> 0x0fU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                     >> 0x0eU)));
    vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0x7fffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x00008000U & ((((((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                 >> 0x0fU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                              >> 0x0eU)) 
                               | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 0x0fU)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                 >> 0x0fU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                   >> 0x0eU))) 
                             << 0x0000000fU)));
}

void Valu___024root___ico_comb__TOP__10(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__10\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<CData/*0:0*/, 16> alu__DOT__ar__DOT__cout4__DOT__out;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        alu__DOT__ar__DOT__cout4__DOT__out[__Vi0] = 0;
    }
    // Body
    alu__DOT__ar__DOT__cout4__DOT__out[1U] = (1U & 
                                              ((((IData)(vlSelfRef.in_a) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 1U) 
                                               ^ (IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector)));
    vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xfffdU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (2U & ((((((IData)(vlSelfRef.in_a) >> 1U) 
                       & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
                      | (((IData)(vlSelfRef.in_a) & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                         >> 1U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                     >> 1U) & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector))) 
                    << 1U)));
    alu__DOT__ar__DOT__cout4__DOT__out[2U] = (1U & 
                                              ((((IData)(vlSelfRef.in_a) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 2U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                  >> 1U)));
    vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xfffbU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (4U & ((((((IData)(vlSelfRef.in_a) >> 2U) 
                       & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                          >> 1U)) | (((IData)(vlSelfRef.in_a) 
                                      & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                     >> 2U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                 >> 2U) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                   >> 1U))) 
                    << 2U)));
    alu__DOT__ar__DOT__cout4__DOT__out[3U] = (1U & 
                                              ((((IData)(vlSelfRef.in_a) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 3U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                  >> 2U)));
    vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xfff7U & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (8U & ((((((IData)(vlSelfRef.in_a) >> 3U) 
                       & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                          >> 2U)) | (((IData)(vlSelfRef.in_a) 
                                      & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                     >> 3U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                 >> 3U) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                   >> 2U))) 
                    << 3U)));
    alu__DOT__ar__DOT__cout4__DOT__out[4U] = (1U & 
                                              ((((IData)(vlSelfRef.in_a) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 4U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                  >> 3U)));
    vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xffefU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x00000010U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 4U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                           >> 3U)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 4U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                              >> 4U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                >> 3U))) 
                             << 4U)));
    alu__DOT__ar__DOT__cout4__DOT__out[5U] = (1U & 
                                              ((((IData)(vlSelfRef.in_a) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 5U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                  >> 4U)));
    vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xffdfU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x00000020U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 5U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                           >> 4U)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 5U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                              >> 5U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                >> 4U))) 
                             << 5U)));
    alu__DOT__ar__DOT__cout4__DOT__out[6U] = (1U & 
                                              ((((IData)(vlSelfRef.in_a) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 6U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                  >> 5U)));
    vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xffbfU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x00000040U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 6U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                           >> 5U)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 6U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                              >> 6U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                >> 5U))) 
                             << 6U)));
    alu__DOT__ar__DOT__cout4__DOT__out[7U] = (1U & 
                                              ((((IData)(vlSelfRef.in_a) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 7U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                  >> 6U)));
    vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xff7fU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x00000080U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 7U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                           >> 6U)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 7U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                              >> 7U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                >> 6U))) 
                             << 7U)));
    alu__DOT__ar__DOT__cout4__DOT__out[8U] = (1U & 
                                              ((((IData)(vlSelfRef.in_a) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 8U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                  >> 7U)));
    vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xfeffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x00000100U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 8U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                           >> 7U)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 8U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                              >> 8U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                >> 7U))) 
                             << 8U)));
    alu__DOT__ar__DOT__cout4__DOT__out[9U] = (1U & 
                                              ((((IData)(vlSelfRef.in_a) 
                                                 ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 9U) 
                                               ^ ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                  >> 8U)));
    vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xfdffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x00000200U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 9U) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                           >> 8U)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 9U)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                              >> 9U) 
                                             & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                >> 8U))) 
                             << 9U)));
    alu__DOT__ar__DOT__cout4__DOT__out[0x0aU] = (1U 
                                                 & ((((IData)(vlSelfRef.in_a) 
                                                      ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                     >> 0x0aU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                     >> 9U)));
    vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xfbffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x00000400U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 0x0aU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                              >> 9U)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 0x0aU)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                 >> 0x0aU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                   >> 9U))) 
                             << 0x0000000aU)));
    alu__DOT__ar__DOT__cout4__DOT__out[0x0bU] = (1U 
                                                 & ((((IData)(vlSelfRef.in_a) 
                                                      ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                     >> 0x0bU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                     >> 0x0aU)));
    vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xf7ffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x00000800U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 0x0bU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                              >> 0x0aU)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 0x0bU)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                 >> 0x0bU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                   >> 0x0aU))) 
                             << 0x0000000bU)));
    alu__DOT__ar__DOT__cout4__DOT__out[0x0cU] = (1U 
                                                 & ((((IData)(vlSelfRef.in_a) 
                                                      ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                     >> 0x0cU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                     >> 0x0bU)));
    vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xefffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x00001000U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 0x0cU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                              >> 0x0bU)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 0x0cU)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                 >> 0x0cU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                   >> 0x0bU))) 
                             << 0x0000000cU)));
    alu__DOT__ar__DOT__cout4__DOT__out[0x0dU] = (1U 
                                                 & ((((IData)(vlSelfRef.in_a) 
                                                      ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                     >> 0x0dU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                     >> 0x0cU)));
    vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xdfffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x00002000U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 0x0dU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                              >> 0x0cU)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 0x0dU)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                 >> 0x0dU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                   >> 0x0cU))) 
                             << 0x0000000dU)));
    alu__DOT__ar__DOT__cout4__DOT__out[0x0eU] = (1U 
                                                 & ((((IData)(vlSelfRef.in_a) 
                                                      ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                     >> 0x0eU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                     >> 0x0dU)));
    vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xbfffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x00004000U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 0x0eU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                              >> 0x0dU)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 0x0eU)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                 >> 0x0eU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                   >> 0x0dU))) 
                             << 0x0000000eU)));
    alu__DOT__ar__DOT__cout4__DOT__out[0x0fU] = (1U 
                                                 & ((((IData)(vlSelfRef.in_a) 
                                                      ^ (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                     >> 0x0fU) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                     >> 0x0eU)));
    vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0x7fffU & (IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x00008000U & ((((((IData)(vlSelfRef.in_a) 
                                 >> 0x0fU) & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                              >> 0x0eU)) 
                               | (((IData)(vlSelfRef.in_a) 
                                   & (IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                  >> 0x0fU)) | (((IData)(vlSelfRef.alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                 >> 0x0fU) 
                                                & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                   >> 0x0eU))) 
                             << 0x0000000fU)));
}

void Valu___024root___ico_comb__TOP__11(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__11\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8U & (IData)(vlSelfRef.sel))) {
        vlSelfRef.alu__DOT__ar__DOT__cout = (1U & (
                                                   (4U 
                                                    & (IData)(vlSelfRef.sel))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.sel))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.sel))
                                                      ? 
                                                     ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                      >> 0x0000000fU)
                                                      : 
                                                     ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                      >> 0x0000000fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.sel))
                                                      ? 
                                                     ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                      >> 0x0000000fU)
                                                      : 
                                                     ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                      >> 0x0000000fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.sel))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.sel))
                                                      ? 
                                                     ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                      >> 0x0000000fU)
                                                      : 
                                                     ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                      >> 0x0000000fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.sel))
                                                      ? 
                                                     ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                      >> 0x0000000fU)
                                                      : 
                                                     ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                      >> 0x0000000fU)))));
    } else if ((4U & (IData)(vlSelfRef.sel))) {
        if ((2U & (IData)(vlSelfRef.sel))) {
            vlSelfRef.alu__DOT__ar__DOT__cout = (1U 
                                                 & ((1U 
                                                     & (IData)(vlSelfRef.sel))
                                                     ? 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                     >> 0x0000000fU)
                                                     : 
                                                    ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                     >> 0x0000000fU)));
        } else if ((1U & (IData)(vlSelfRef.sel))) {
            vlSelfRef.alu__DOT__ar__DOT__cout = (1U 
                                                 & ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                    >> 0x0000000fU));
        }
    }
    vlSelfRef.carry_out = vlSelfRef.alu__DOT__ar__DOT__cout;
}

void Valu___024root___eval_ico(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_ico\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[1U])) {
        Valu___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & (vlSelfRef.__VicoTriggered[1U] | vlSelfRef.__VicoTriggered
                 [0U]))) {
        Valu___024root___ico_comb__TOP__0(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (8ULL 
                                                   & vlSelfRef.__VicoTriggered
                                                   [0U]))) {
        Valu___024root___ico_comb__TOP__1(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000040ULL 
                                                   & vlSelfRef.__VicoTriggered
                                                   [0U]))) {
        Valu___024root___ico_comb__TOP__2(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000200ULL 
                                                   & vlSelfRef.__VicoTriggered
                                                   [0U]))) {
        Valu___024root___ico_comb__TOP__3(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000100ULL 
                                                   & vlSelfRef.__VicoTriggered
                                                   [0U]))) {
        Valu___024root___ico_comb__TOP__4(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (4ULL 
                                                   & vlSelfRef.__VicoTriggered
                                                   [0U]))) {
        Valu___024root___ico_comb__TOP__5(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000400ULL 
                                                   & vlSelfRef.__VicoTriggered
                                                   [0U]))) {
        Valu___024root___ico_comb__TOP__6(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (2ULL 
                                                   & vlSelfRef.__VicoTriggered
                                                   [0U]))) {
        Valu___024root___ico_comb__TOP__7(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000010ULL 
                                                   & vlSelfRef.__VicoTriggered
                                                   [0U]))) {
        Valu___024root___ico_comb__TOP__8(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000020ULL 
                                                   & vlSelfRef.__VicoTriggered
                                                   [0U]))) {
        Valu___024root___ico_comb__TOP__9(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000080ULL 
                                                   & vlSelfRef.__VicoTriggered
                                                   [0U]))) {
        Valu___024root___ico_comb__TOP__10(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x00000000000007ffULL 
                                                   & vlSelfRef.__VicoTriggered
                                                   [0U]))) {
        Valu___024root___ico_comb__TOP__11(vlSelf);
    }
}

bool Valu___024root___eval_phase__ico(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__ico\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Valu___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Valu___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Valu___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Valu___024root___eval_triggers__act(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_triggers__act\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((IData)(vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout1__DOT__carry_vector__2)) 
                                                       << 0x0000000aU) 
                                                      | ((((IData)(vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout2__DOT__carry_vector__2)) 
                                                          << 9U) 
                                                         | (((IData)(vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout3__DOT__carry_vector__2)) 
                                                            << 8U))) 
                                                     | (((((((IData)(vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout4__DOT__carry_vector__2)) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout5__DOT__carry_vector__2)) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout6__DOT__carry_vector__2)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout7__DOT__carry_vector__2)))) 
                                                         << 4U) 
                                                        | (((((IData)(vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout8__DOT__carry_vector__2)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout9__DOT__carry_vector__2)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout10__DOT__carry_vector__2)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout11__DOT__carry_vector__2))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout11__DOT__carry_vector__2 
        = vlSelfRef.alu__DOT__ar__DOT__cout11__DOT__carry_vector;
    vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout10__DOT__carry_vector__2 
        = vlSelfRef.alu__DOT__ar__DOT__cout10__DOT__carry_vector;
    vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout9__DOT__carry_vector__2 
        = vlSelfRef.alu__DOT__ar__DOT__cout9__DOT__carry_vector;
    vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout8__DOT__carry_vector__2 
        = vlSelfRef.alu__DOT__ar__DOT__cout8__DOT__carry_vector;
    vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout7__DOT__carry_vector__2 
        = vlSelfRef.alu__DOT__ar__DOT__cout7__DOT__carry_vector;
    vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout6__DOT__carry_vector__2 
        = vlSelfRef.alu__DOT__ar__DOT__cout6__DOT__carry_vector;
    vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout5__DOT__carry_vector__2 
        = vlSelfRef.alu__DOT__ar__DOT__cout5__DOT__carry_vector;
    vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout4__DOT__carry_vector__2 
        = vlSelfRef.alu__DOT__ar__DOT__cout4__DOT__carry_vector;
    vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout3__DOT__carry_vector__2 
        = vlSelfRef.alu__DOT__ar__DOT__cout3__DOT__carry_vector;
    vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout2__DOT__carry_vector__2 
        = vlSelfRef.alu__DOT__ar__DOT__cout2__DOT__carry_vector;
    vlSelfRef.__Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout1__DOT__carry_vector__2 
        = vlSelfRef.alu__DOT__ar__DOT__cout1__DOT__carry_vector;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                         | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (0x0000000000000020ULL 
                                         | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (0x0000000000000040ULL 
                                         | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (0x0000000000000080ULL 
                                         | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (0x0000000000000100ULL 
                                         | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (0x0000000000000200ULL 
                                         | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (0x0000000000000400ULL 
                                         | vlSelfRef.__VactTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Valu___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Valu___024root___eval_act(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_act\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Valu___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        Valu___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered
         [0U])) {
        Valu___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered
         [0U])) {
        Valu___024root___ico_comb__TOP__8(vlSelf);
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VactTriggered
         [0U])) {
        Valu___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VactTriggered
         [0U])) {
        Valu___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        Valu___024root___ico_comb__TOP__7(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        Valu___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered
         [0U])) {
        Valu___024root___ico_comb__TOP__9(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VactTriggered
         [0U])) {
        Valu___024root___ico_comb__TOP__10(vlSelf);
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VactTriggered
         [0U])) {
        Valu___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((0x00000000000007ffULL & vlSelfRef.__VactTriggered
         [0U])) {
        Valu___024root___ico_comb__TOP__11(vlSelf);
    }
}

void Valu___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Valu___024root___eval_phase__act(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__act\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Valu___024root___eval_triggers__act(vlSelf);
    Valu___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Valu___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Valu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Valu___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Valu___024root___eval_phase__nba(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__nba\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Valu___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Valu___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Valu___024root___eval(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Valu___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("rtl/alu.v", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Valu___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Valu___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("rtl/alu.v", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Valu___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("rtl/alu.v", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Valu___024root___eval_phase__act(vlSelf));
    } while (Valu___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.carry_in & 0xfeU)))) {
        Verilated::overWidthError("carry_in");
    }
    if (VL_UNLIKELY(((vlSelfRef.sel & 0xf0U)))) {
        Verilated::overWidthError("sel");
    }
    if (VL_UNLIKELY(((vlSelfRef.mode & 0xfeU)))) {
        Verilated::overWidthError("mode");
    }
}
#endif  // VL_DEBUG
