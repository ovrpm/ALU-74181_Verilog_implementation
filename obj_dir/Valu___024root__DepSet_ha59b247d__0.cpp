// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu__pch.h"
#include "Valu___024root.h"

VL_INLINE_OPT void Valu___024root___ico_sequent__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ alu__DOT__ar__DOT__out;
    alu__DOT__ar__DOT__out = 0;
    SData/*15:0*/ alu__DOT__lo__DOT__out;
    alu__DOT__lo__DOT__out = 0;
    CData/*0:0*/ __VdfgTmp_h9e6d03f3__0;
    __VdfgTmp_h9e6d03f3__0 = 0;
    CData/*0:0*/ __VdfgTmp_h52e1b6eb__0;
    __VdfgTmp_h52e1b6eb__0 = 0;
    CData/*0:0*/ __VdfgTmp_h0e8e16b5__0;
    __VdfgTmp_h0e8e16b5__0 = 0;
    CData/*0:0*/ __VdfgTmp_h144285fb__0;
    __VdfgTmp_h144285fb__0 = 0;
    // Body
    vlSelf->compare = ((IData)(vlSelf->in_a) == (IData)(vlSelf->in_b));
    if ((8U & (IData)(vlSelf->sel))) {
        if ((4U & (IData)(vlSelf->sel))) {
            if ((2U & (IData)(vlSelf->sel))) {
                if ((1U & (IData)(vlSelf->sel))) {
                    alu__DOT__lo__DOT__out = (0xffffU 
                                              & (IData)(vlSelf->in_a));
                    alu__DOT__ar__DOT__out = (0xffffU 
                                              & (((IData)(vlSelf->in_a) 
                                                  - (IData)(1U)) 
                                                 + (IData)(vlSelf->carry_in)));
                } else {
                    alu__DOT__lo__DOT__out = (0xffffU 
                                              & ((IData)(vlSelf->in_a) 
                                                 | (IData)(vlSelf->in_b)));
                    alu__DOT__ar__DOT__out = (0xffffU 
                                              & ((((IData)(vlSelf->in_a) 
                                                   | (~ (IData)(vlSelf->in_b))) 
                                                  + (IData)(vlSelf->in_a)) 
                                                 + (IData)(vlSelf->carry_in)));
                }
            } else if ((1U & (IData)(vlSelf->sel))) {
                alu__DOT__lo__DOT__out = (0xffffU & 
                                          ((IData)(vlSelf->in_a) 
                                           | (~ (IData)(vlSelf->in_b))));
                alu__DOT__ar__DOT__out = (0xffffU & 
                                          ((((IData)(vlSelf->in_a) 
                                             | (IData)(vlSelf->in_b)) 
                                            + (IData)(vlSelf->in_a)) 
                                           + (IData)(vlSelf->carry_in)));
            } else {
                alu__DOT__lo__DOT__out = (0xffffU & 1U);
                alu__DOT__ar__DOT__out = (0xffffU & 
                                          (((IData)(vlSelf->in_a) 
                                            + (IData)(vlSelf->in_a)) 
                                           + (IData)(vlSelf->carry_in)));
            }
        } else if ((2U & (IData)(vlSelf->sel))) {
            if ((1U & (IData)(vlSelf->sel))) {
                alu__DOT__lo__DOT__out = (0xffffU & 
                                          ((IData)(vlSelf->in_a) 
                                           & (IData)(vlSelf->in_b)));
                alu__DOT__ar__DOT__out = (0xffffU & 
                                          ((((IData)(vlSelf->in_a) 
                                             & (IData)(vlSelf->in_b)) 
                                            - (IData)(1U)) 
                                           + (IData)(vlSelf->carry_in)));
            } else {
                alu__DOT__lo__DOT__out = (0xffffU & (IData)(vlSelf->in_b));
                alu__DOT__ar__DOT__out = (0xffffU & 
                                          ((((IData)(vlSelf->in_a) 
                                             | (~ (IData)(vlSelf->in_b))) 
                                            + ((IData)(vlSelf->in_a) 
                                               & (IData)(vlSelf->in_b))) 
                                           + (IData)(vlSelf->carry_in)));
            }
        } else if ((1U & (IData)(vlSelf->sel))) {
            alu__DOT__lo__DOT__out = (0xffffU & (~ 
                                                 ((IData)(vlSelf->in_a) 
                                                  ^ (IData)(vlSelf->in_b))));
            alu__DOT__ar__DOT__out = (0xffffU & (((IData)(vlSelf->in_a) 
                                                  + (IData)(vlSelf->in_b)) 
                                                 + (IData)(vlSelf->carry_in)));
        } else {
            alu__DOT__lo__DOT__out = (0xffffU & ((~ (IData)(vlSelf->in_a)) 
                                                 | (IData)(vlSelf->in_b)));
            alu__DOT__ar__DOT__out = (0xffffU & (((IData)(vlSelf->in_a) 
                                                  + 
                                                  ((IData)(vlSelf->in_a) 
                                                   & (IData)(vlSelf->in_b))) 
                                                 + (IData)(vlSelf->carry_in)));
        }
    } else if ((4U & (IData)(vlSelf->sel))) {
        if ((2U & (IData)(vlSelf->sel))) {
            if ((1U & (IData)(vlSelf->sel))) {
                alu__DOT__lo__DOT__out = (0xffffU & 
                                          ((IData)(vlSelf->in_a) 
                                           & (~ (IData)(vlSelf->in_b))));
                alu__DOT__ar__DOT__out = (0xffffU & 
                                          ((((IData)(vlSelf->in_a) 
                                             & (~ (IData)(vlSelf->in_b))) 
                                            - (IData)(1U)) 
                                           + (IData)(vlSelf->carry_in)));
            } else {
                alu__DOT__lo__DOT__out = (0xffffU & 
                                          ((IData)(vlSelf->in_a) 
                                           ^ (IData)(vlSelf->in_b)));
                alu__DOT__ar__DOT__out = (0xffffU & 
                                          ((((IData)(vlSelf->in_a) 
                                             - (IData)(vlSelf->in_b)) 
                                            - (IData)(1U)) 
                                           + (IData)(vlSelf->carry_in)));
            }
        } else if ((1U & (IData)(vlSelf->sel))) {
            alu__DOT__lo__DOT__out = (0xffffU & (~ (IData)(vlSelf->in_b)));
            alu__DOT__ar__DOT__out = (0xffffU & ((((IData)(vlSelf->in_a) 
                                                   | (IData)(vlSelf->in_b)) 
                                                  + 
                                                  ((IData)(vlSelf->in_a) 
                                                   & (~ (IData)(vlSelf->in_b)))) 
                                                 + (IData)(vlSelf->carry_in)));
        } else {
            alu__DOT__lo__DOT__out = (0xffffU & (~ 
                                                 ((IData)(vlSelf->in_a) 
                                                  & (IData)(vlSelf->in_b))));
            alu__DOT__ar__DOT__out = (0xffffU & ((IData)(vlSelf->in_a) 
                                                 | ((IData)(vlSelf->in_a) 
                                                    & (~ (IData)(vlSelf->in_b)))));
        }
    } else if ((2U & (IData)(vlSelf->sel))) {
        if ((1U & (IData)(vlSelf->sel))) {
            alu__DOT__lo__DOT__out = (0xffffU & 0U);
            alu__DOT__ar__DOT__out = (0xffffU & 1U);
        } else {
            alu__DOT__lo__DOT__out = (0xffffU & ((~ (IData)(vlSelf->in_a)) 
                                                 & (IData)(vlSelf->in_b)));
            alu__DOT__ar__DOT__out = (0xffffU & ((IData)(vlSelf->in_a) 
                                                 | (~ (IData)(vlSelf->in_b))));
        }
    } else if ((1U & (IData)(vlSelf->sel))) {
        alu__DOT__lo__DOT__out = (0xffffU & (~ ((IData)(vlSelf->in_a) 
                                                | (IData)(vlSelf->in_b))));
        alu__DOT__ar__DOT__out = (0xffffU & ((IData)(vlSelf->in_a) 
                                             | (IData)(vlSelf->in_b)));
    } else {
        alu__DOT__lo__DOT__out = (0xffffU & (~ (IData)(vlSelf->in_a)));
        alu__DOT__ar__DOT__out = (0xffffU & (IData)(vlSelf->in_a));
    }
    vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xfffeU & (IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (((IData)(vlSelf->in_a) - (IData)(1U)) 
              & (IData)(vlSelf->carry_in)));
    vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3 
        = (0xffffU & (((IData)(vlSelf->in_a) - (IData)(vlSelf->in_b)) 
                      - (IData)(1U)));
    vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3 
        = ((~ (IData)(vlSelf->in_b)) & (IData)(vlSelf->in_a));
    __VdfgTmp_h52e1b6eb__0 = ((IData)(vlSelf->in_a) 
                              & (IData)(vlSelf->carry_in));
    vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2 
        = ((IData)(vlSelf->in_a) | (IData)(vlSelf->in_b));
    vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2 
        = (0xffffU & ((~ (IData)(vlSelf->in_b)) | (IData)(vlSelf->in_a)));
    vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3 
        = ((IData)(vlSelf->in_a) & (IData)(vlSelf->in_b));
    vlSelf->alu_out = 0U;
    if (vlSelf->mode) {
        vlSelf->alu_out = alu__DOT__lo__DOT__out;
    } else if ((1U & (~ (IData)(vlSelf->mode)))) {
        vlSelf->alu_out = alu__DOT__ar__DOT__out;
    }
    vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xfffeU & (IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
              & (IData)(vlSelf->carry_in)));
    vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xfffeU & (IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
               - (IData)(1U)) & (IData)(vlSelf->carry_in)));
    vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xfffeU & (IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (1U & ((IData)(__VdfgTmp_h52e1b6eb__0) 
                    | (IData)(vlSelf->in_a))));
    vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xfffeU & (IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (1U & ((IData)(__VdfgTmp_h52e1b6eb__0) 
                    | (((IData)(vlSelf->in_a) & (IData)(vlSelf->in_b)) 
                       | ((IData)(vlSelf->in_b) & (IData)(vlSelf->carry_in))))));
    __VdfgTmp_h9e6d03f3__0 = ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                              & (IData)(vlSelf->carry_in));
    __VdfgTmp_h144285fb__0 = ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                              & (IData)(vlSelf->carry_in));
    vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xfffeU & (IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
               - (IData)(1U)) & (IData)(vlSelf->carry_in)));
    __VdfgTmp_h0e8e16b5__0 = ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                              & (IData)(vlSelf->carry_in));
    vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xfffeU & (IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (1U & ((IData)(__VdfgTmp_h9e6d03f3__0) 
                    | (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                        & (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                       | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                          & (IData)(vlSelf->carry_in))))));
    vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xfffeU & (IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (1U & ((IData)(__VdfgTmp_h9e6d03f3__0) 
                    | (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                        & (IData)(vlSelf->in_a)) | (IData)(__VdfgTmp_h52e1b6eb__0)))));
    vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xfffeU & (IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (1U & ((IData)(__VdfgTmp_h144285fb__0) 
                    | (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                        & (IData)(vlSelf->in_a)) | (IData)(__VdfgTmp_h52e1b6eb__0)))));
    vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xfffeU & (IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (1U & ((IData)(__VdfgTmp_h52e1b6eb__0) 
                    | (((IData)(vlSelf->in_a) & (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                       | (IData)(__VdfgTmp_h0e8e16b5__0)))));
    vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xfffeU & (IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (1U & ((IData)(__VdfgTmp_h144285fb__0) 
                    | (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                        & (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                       | (IData)(__VdfgTmp_h0e8e16b5__0)))));
}

VL_INLINE_OPT void Valu___024root___ico_comb__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__0\n"); );
    // Init
    VlUnpacked<CData/*0:0*/, 16> alu__DOT__ar__DOT__cout11__DOT__out;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        alu__DOT__ar__DOT__cout11__DOT__out[__Vi0] = 0;
    }
    // Body
    alu__DOT__ar__DOT__cout11__DOT__out[1U] = (1U & 
                                               ((0x7fffU 
                                                 & (((IData)(vlSelf->in_a) 
                                                     - (IData)(1U)) 
                                                    >> 1U)) 
                                                ^ (IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector)));
    vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xfffdU & (IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (2U & (((IData)(vlSelf->in_a) - (IData)(1U)) 
                    & ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                       << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[2U] = (1U & 
                                               ((0x3fffU 
                                                 & (((IData)(vlSelf->in_a) 
                                                     - (IData)(1U)) 
                                                    >> 2U)) 
                                                ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                   >> 1U)));
    vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xfffbU & (IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (4U & (((IData)(vlSelf->in_a) - (IData)(1U)) 
                    & ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                       << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[3U] = (1U & 
                                               ((0x1fffU 
                                                 & (((IData)(vlSelf->in_a) 
                                                     - (IData)(1U)) 
                                                    >> 3U)) 
                                                ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                   >> 2U)));
    vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xfff7U & (IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (8U & (((IData)(vlSelf->in_a) - (IData)(1U)) 
                    & ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                       << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[4U] = (1U & 
                                               ((0xfffU 
                                                 & (((IData)(vlSelf->in_a) 
                                                     - (IData)(1U)) 
                                                    >> 4U)) 
                                                ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                   >> 3U)));
    vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xffefU & (IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x10U & (((IData)(vlSelf->in_a) - (IData)(1U)) 
                       & ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                          << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[5U] = (1U & 
                                               ((0x7ffU 
                                                 & (((IData)(vlSelf->in_a) 
                                                     - (IData)(1U)) 
                                                    >> 5U)) 
                                                ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                   >> 4U)));
    vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xffdfU & (IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x20U & (((IData)(vlSelf->in_a) - (IData)(1U)) 
                       & ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                          << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[6U] = (1U & 
                                               ((0x3ffU 
                                                 & (((IData)(vlSelf->in_a) 
                                                     - (IData)(1U)) 
                                                    >> 6U)) 
                                                ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                   >> 5U)));
    vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xffbfU & (IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x40U & (((IData)(vlSelf->in_a) - (IData)(1U)) 
                       & ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                          << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[7U] = (1U & 
                                               ((0x1ffU 
                                                 & (((IData)(vlSelf->in_a) 
                                                     - (IData)(1U)) 
                                                    >> 7U)) 
                                                ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                   >> 6U)));
    vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xff7fU & (IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x80U & (((IData)(vlSelf->in_a) - (IData)(1U)) 
                       & ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                          << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[8U] = (1U & 
                                               ((0xffU 
                                                 & (((IData)(vlSelf->in_a) 
                                                     - (IData)(1U)) 
                                                    >> 8U)) 
                                                ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                   >> 7U)));
    vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xfeffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x100U & (((IData)(vlSelf->in_a) - (IData)(1U)) 
                        & ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                           << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[9U] = (1U & 
                                               ((0x7fU 
                                                 & (((IData)(vlSelf->in_a) 
                                                     - (IData)(1U)) 
                                                    >> 9U)) 
                                                ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                   >> 8U)));
    vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xfdffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x200U & (((IData)(vlSelf->in_a) - (IData)(1U)) 
                        & ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                           << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[0xaU] = (1U 
                                                 & ((0x3fU 
                                                     & (((IData)(vlSelf->in_a) 
                                                         - (IData)(1U)) 
                                                        >> 0xaU)) 
                                                    ^ 
                                                    ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                     >> 9U)));
    vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xfbffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x400U & (((IData)(vlSelf->in_a) - (IData)(1U)) 
                        & ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                           << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[0xbU] = (1U 
                                                 & ((0x1fU 
                                                     & (((IData)(vlSelf->in_a) 
                                                         - (IData)(1U)) 
                                                        >> 0xbU)) 
                                                    ^ 
                                                    ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                     >> 0xaU)));
    vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xf7ffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x800U & (((IData)(vlSelf->in_a) - (IData)(1U)) 
                        & ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                           << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[0xcU] = (1U 
                                                 & ((0xfU 
                                                     & (((IData)(vlSelf->in_a) 
                                                         - (IData)(1U)) 
                                                        >> 0xcU)) 
                                                    ^ 
                                                    ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                     >> 0xbU)));
    vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xefffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x1000U & (((IData)(vlSelf->in_a) - (IData)(1U)) 
                         & ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                            << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[0xdU] = (1U 
                                                 & ((7U 
                                                     & (((IData)(vlSelf->in_a) 
                                                         - (IData)(1U)) 
                                                        >> 0xdU)) 
                                                    ^ 
                                                    ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                     >> 0xcU)));
    vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xdfffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x2000U & (((IData)(vlSelf->in_a) - (IData)(1U)) 
                         & ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                            << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[0xeU] = (1U 
                                                 & ((3U 
                                                     & (((IData)(vlSelf->in_a) 
                                                         - (IData)(1U)) 
                                                        >> 0xeU)) 
                                                    ^ 
                                                    ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                     >> 0xdU)));
    vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0xbfffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x4000U & (((IData)(vlSelf->in_a) - (IData)(1U)) 
                         & ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                            << 1U))));
    alu__DOT__ar__DOT__cout11__DOT__out[0xfU] = (1U 
                                                 & ((1U 
                                                     & (((IData)(vlSelf->in_a) 
                                                         - (IData)(1U)) 
                                                        >> 0xfU)) 
                                                    ^ 
                                                    ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                     >> 0xeU)));
    vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector 
        = ((0x7fffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector)) 
           | (0x8000U & (((IData)(vlSelf->in_a) - (IData)(1U)) 
                         & ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                            << 1U))));
}

VL_INLINE_OPT void Valu___024root___ico_comb__TOP__1(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__1\n"); );
    // Init
    VlUnpacked<CData/*0:0*/, 16> alu__DOT__ar__DOT__cout8__DOT__out;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        alu__DOT__ar__DOT__cout8__DOT__out[__Vi0] = 0;
    }
    // Body
    alu__DOT__ar__DOT__cout8__DOT__out[1U] = (1U & (IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector));
    vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xfffdU & (IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (2U & ((((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                               << 1U)) 
                     | (IData)(vlSelf->in_a)) | ((IData)(vlSelf->in_a) 
                                                 & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                    << 1U)))));
    alu__DOT__ar__DOT__cout8__DOT__out[2U] = (1U & 
                                              ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                               >> 1U));
    vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xfffbU & (IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (4U & ((((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                               << 1U)) 
                     | (IData)(vlSelf->in_a)) | ((IData)(vlSelf->in_a) 
                                                 & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                    << 1U)))));
    alu__DOT__ar__DOT__cout8__DOT__out[3U] = (1U & 
                                              ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                               >> 2U));
    vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xfff7U & (IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (8U & ((((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                               << 1U)) 
                     | (IData)(vlSelf->in_a)) | ((IData)(vlSelf->in_a) 
                                                 & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                    << 1U)))));
    alu__DOT__ar__DOT__cout8__DOT__out[4U] = (1U & 
                                              ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                               >> 3U));
    vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xffefU & (IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x10U & ((((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                  << 1U)) 
                        | (IData)(vlSelf->in_a)) | 
                       ((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                 << 1U)))));
    alu__DOT__ar__DOT__cout8__DOT__out[5U] = (1U & 
                                              ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                               >> 4U));
    vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xffdfU & (IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x20U & ((((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                  << 1U)) 
                        | (IData)(vlSelf->in_a)) | 
                       ((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                 << 1U)))));
    alu__DOT__ar__DOT__cout8__DOT__out[6U] = (1U & 
                                              ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                               >> 5U));
    vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xffbfU & (IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x40U & ((((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                  << 1U)) 
                        | (IData)(vlSelf->in_a)) | 
                       ((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                 << 1U)))));
    alu__DOT__ar__DOT__cout8__DOT__out[7U] = (1U & 
                                              ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                               >> 6U));
    vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xff7fU & (IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x80U & ((((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                  << 1U)) 
                        | (IData)(vlSelf->in_a)) | 
                       ((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                 << 1U)))));
    alu__DOT__ar__DOT__cout8__DOT__out[8U] = (1U & 
                                              ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                               >> 7U));
    vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xfeffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x100U & ((((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                   << 1U)) 
                         | (IData)(vlSelf->in_a)) | 
                        ((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                  << 1U)))));
    alu__DOT__ar__DOT__cout8__DOT__out[9U] = (1U & 
                                              ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                               >> 8U));
    vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xfdffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x200U & ((((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                   << 1U)) 
                         | (IData)(vlSelf->in_a)) | 
                        ((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                  << 1U)))));
    alu__DOT__ar__DOT__cout8__DOT__out[0xaU] = (1U 
                                                & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                   >> 9U));
    vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xfbffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x400U & ((((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                   << 1U)) 
                         | (IData)(vlSelf->in_a)) | 
                        ((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                  << 1U)))));
    alu__DOT__ar__DOT__cout8__DOT__out[0xbU] = (1U 
                                                & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                   >> 0xaU));
    vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xf7ffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x800U & ((((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                   << 1U)) 
                         | (IData)(vlSelf->in_a)) | 
                        ((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                  << 1U)))));
    alu__DOT__ar__DOT__cout8__DOT__out[0xcU] = (1U 
                                                & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                   >> 0xbU));
    vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xefffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x1000U & ((((IData)(vlSelf->in_a) & 
                           ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                            << 1U)) | (IData)(vlSelf->in_a)) 
                         | ((IData)(vlSelf->in_a) & 
                            ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout8__DOT__out[0xdU] = (1U 
                                                & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                   >> 0xcU));
    vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xdfffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x2000U & ((((IData)(vlSelf->in_a) & 
                           ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                            << 1U)) | (IData)(vlSelf->in_a)) 
                         | ((IData)(vlSelf->in_a) & 
                            ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout8__DOT__out[0xeU] = (1U 
                                                & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                   >> 0xdU));
    vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0xbfffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x4000U & ((((IData)(vlSelf->in_a) & 
                           ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                            << 1U)) | (IData)(vlSelf->in_a)) 
                         | ((IData)(vlSelf->in_a) & 
                            ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout8__DOT__out[0xfU] = (1U 
                                                & ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                   >> 0xeU));
    vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector 
        = ((0x7fffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector)) 
           | (0x8000U & ((((IData)(vlSelf->in_a) & 
                           ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                            << 1U)) | (IData)(vlSelf->in_a)) 
                         | ((IData)(vlSelf->in_a) & 
                            ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                             << 1U)))));
}

VL_INLINE_OPT void Valu___024root___ico_comb__TOP__2(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__2\n"); );
    // Init
    VlUnpacked<CData/*0:0*/, 16> alu__DOT__ar__DOT__cout5__DOT__out;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        alu__DOT__ar__DOT__cout5__DOT__out[__Vi0] = 0;
    }
    // Body
    alu__DOT__ar__DOT__cout5__DOT__out[1U] = (1U & 
                                              ((((IData)(vlSelf->in_a) 
                                                 ^ (IData)(vlSelf->in_b)) 
                                                >> 1U) 
                                               ^ (IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector)));
    vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xfffdU & (IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (2U & (((IData)(vlSelf->in_a) & (((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                               << 1U) 
                                              | (IData)(vlSelf->in_b))) 
                    | ((IData)(vlSelf->in_b) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                << 1U)))));
    alu__DOT__ar__DOT__cout5__DOT__out[2U] = (1U & 
                                              ((((IData)(vlSelf->in_a) 
                                                 ^ (IData)(vlSelf->in_b)) 
                                                >> 2U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                  >> 1U)));
    vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xfffbU & (IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (4U & (((IData)(vlSelf->in_a) & (((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                               << 1U) 
                                              | (IData)(vlSelf->in_b))) 
                    | ((IData)(vlSelf->in_b) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                << 1U)))));
    alu__DOT__ar__DOT__cout5__DOT__out[3U] = (1U & 
                                              ((((IData)(vlSelf->in_a) 
                                                 ^ (IData)(vlSelf->in_b)) 
                                                >> 3U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                  >> 2U)));
    vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xfff7U & (IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (8U & (((IData)(vlSelf->in_a) & (((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                               << 1U) 
                                              | (IData)(vlSelf->in_b))) 
                    | ((IData)(vlSelf->in_b) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                << 1U)))));
    alu__DOT__ar__DOT__cout5__DOT__out[4U] = (1U & 
                                              ((((IData)(vlSelf->in_a) 
                                                 ^ (IData)(vlSelf->in_b)) 
                                                >> 4U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                  >> 3U)));
    vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xffefU & (IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x10U & (((IData)(vlSelf->in_a) & (((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->in_b))) 
                       | ((IData)(vlSelf->in_b) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                   << 1U)))));
    alu__DOT__ar__DOT__cout5__DOT__out[5U] = (1U & 
                                              ((((IData)(vlSelf->in_a) 
                                                 ^ (IData)(vlSelf->in_b)) 
                                                >> 5U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                  >> 4U)));
    vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xffdfU & (IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x20U & (((IData)(vlSelf->in_a) & (((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->in_b))) 
                       | ((IData)(vlSelf->in_b) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                   << 1U)))));
    alu__DOT__ar__DOT__cout5__DOT__out[6U] = (1U & 
                                              ((((IData)(vlSelf->in_a) 
                                                 ^ (IData)(vlSelf->in_b)) 
                                                >> 6U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                  >> 5U)));
    vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xffbfU & (IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x40U & (((IData)(vlSelf->in_a) & (((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->in_b))) 
                       | ((IData)(vlSelf->in_b) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                   << 1U)))));
    alu__DOT__ar__DOT__cout5__DOT__out[7U] = (1U & 
                                              ((((IData)(vlSelf->in_a) 
                                                 ^ (IData)(vlSelf->in_b)) 
                                                >> 7U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                  >> 6U)));
    vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xff7fU & (IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x80U & (((IData)(vlSelf->in_a) & (((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->in_b))) 
                       | ((IData)(vlSelf->in_b) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                   << 1U)))));
    alu__DOT__ar__DOT__cout5__DOT__out[8U] = (1U & 
                                              ((((IData)(vlSelf->in_a) 
                                                 ^ (IData)(vlSelf->in_b)) 
                                                >> 8U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                  >> 7U)));
    vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xfeffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x100U & (((IData)(vlSelf->in_a) & (((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->in_b))) 
                        | ((IData)(vlSelf->in_b) & 
                           ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                            << 1U)))));
    alu__DOT__ar__DOT__cout5__DOT__out[9U] = (1U & 
                                              ((((IData)(vlSelf->in_a) 
                                                 ^ (IData)(vlSelf->in_b)) 
                                                >> 9U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                  >> 8U)));
    vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xfdffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x200U & (((IData)(vlSelf->in_a) & (((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->in_b))) 
                        | ((IData)(vlSelf->in_b) & 
                           ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                            << 1U)))));
    alu__DOT__ar__DOT__cout5__DOT__out[0xaU] = (1U 
                                                & ((((IData)(vlSelf->in_a) 
                                                     ^ (IData)(vlSelf->in_b)) 
                                                    >> 0xaU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                    >> 9U)));
    vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xfbffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x400U & (((IData)(vlSelf->in_a) & (((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->in_b))) 
                        | ((IData)(vlSelf->in_b) & 
                           ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                            << 1U)))));
    alu__DOT__ar__DOT__cout5__DOT__out[0xbU] = (1U 
                                                & ((((IData)(vlSelf->in_a) 
                                                     ^ (IData)(vlSelf->in_b)) 
                                                    >> 0xbU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                    >> 0xaU)));
    vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xf7ffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x800U & (((IData)(vlSelf->in_a) & (((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->in_b))) 
                        | ((IData)(vlSelf->in_b) & 
                           ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                            << 1U)))));
    alu__DOT__ar__DOT__cout5__DOT__out[0xcU] = (1U 
                                                & ((((IData)(vlSelf->in_a) 
                                                     ^ (IData)(vlSelf->in_b)) 
                                                    >> 0xcU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                    >> 0xbU)));
    vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xefffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x1000U & (((IData)(vlSelf->in_a) & (
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->in_b))) 
                         | ((IData)(vlSelf->in_b) & 
                            ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout5__DOT__out[0xdU] = (1U 
                                                & ((((IData)(vlSelf->in_a) 
                                                     ^ (IData)(vlSelf->in_b)) 
                                                    >> 0xdU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                    >> 0xcU)));
    vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xdfffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x2000U & (((IData)(vlSelf->in_a) & (
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->in_b))) 
                         | ((IData)(vlSelf->in_b) & 
                            ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout5__DOT__out[0xeU] = (1U 
                                                & ((((IData)(vlSelf->in_a) 
                                                     ^ (IData)(vlSelf->in_b)) 
                                                    >> 0xeU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                    >> 0xdU)));
    vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0xbfffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x4000U & (((IData)(vlSelf->in_a) & (
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->in_b))) 
                         | ((IData)(vlSelf->in_b) & 
                            ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout5__DOT__out[0xfU] = (1U 
                                                & ((((IData)(vlSelf->in_a) 
                                                     ^ (IData)(vlSelf->in_b)) 
                                                    >> 0xfU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                    >> 0xeU)));
    vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector 
        = ((0x7fffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector)) 
           | (0x8000U & (((IData)(vlSelf->in_a) & (
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->in_b))) 
                         | ((IData)(vlSelf->in_b) & 
                            ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                             << 1U)))));
}

VL_INLINE_OPT void Valu___024root___ico_comb__TOP__3(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__3\n"); );
    // Init
    VlUnpacked<CData/*0:0*/, 16> alu__DOT__ar__DOT__cout2__DOT__out;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        alu__DOT__ar__DOT__cout2__DOT__out[__Vi0] = 0;
    }
    // Body
    alu__DOT__ar__DOT__cout2__DOT__out[1U] = (1U & 
                                              (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                >> 1U) 
                                               ^ (IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector)));
    vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xfffdU & (IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (2U & ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                    & ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                       << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[2U] = (1U & 
                                              (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                >> 2U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                  >> 1U)));
    vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xfffbU & (IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (4U & ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                    & ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                       << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[3U] = (1U & 
                                              (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                >> 3U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                  >> 2U)));
    vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xfff7U & (IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (8U & ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                    & ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                       << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[4U] = (1U & 
                                              (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                >> 4U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                  >> 3U)));
    vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xffefU & (IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (0x10U & ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                       & ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                          << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[5U] = (1U & 
                                              (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                >> 5U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                  >> 4U)));
    vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xffdfU & (IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (0x20U & ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                       & ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                          << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[6U] = (1U & 
                                              (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                >> 6U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                  >> 5U)));
    vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xffbfU & (IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (0x40U & ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                       & ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                          << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[7U] = (1U & 
                                              (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                >> 7U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                  >> 6U)));
    vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xff7fU & (IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (0x80U & ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                       & ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                          << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[8U] = (1U & 
                                              (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                >> 8U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                  >> 7U)));
    vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xfeffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (0x100U & ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                        & ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                           << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[9U] = (1U & 
                                              (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                >> 9U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                  >> 8U)));
    vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xfdffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (0x200U & ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                        & ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                           << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[0xaU] = (1U 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                    >> 0xaU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                    >> 9U)));
    vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xfbffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (0x400U & ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                        & ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                           << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[0xbU] = (1U 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                    >> 0xbU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                    >> 0xaU)));
    vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xf7ffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (0x800U & ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                        & ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                           << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[0xcU] = (1U 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                    >> 0xcU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                    >> 0xbU)));
    vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xefffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (0x1000U & ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                         & ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                            << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[0xdU] = (1U 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                    >> 0xdU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                    >> 0xcU)));
    vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xdfffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (0x2000U & ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                         & ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                            << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[0xeU] = (1U 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                    >> 0xeU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                    >> 0xdU)));
    vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0xbfffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | (0x4000U & ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                         & ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                            << 1U))));
    alu__DOT__ar__DOT__cout2__DOT__out[0xfU] = (1U 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                                                    >> 0xfU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                    >> 0xeU)));
    vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector 
        = ((0x7fffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector)) 
           | ((IData)((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3) 
                        >> 0xfU) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                    >> 0xeU))) << 0xfU));
}

VL_INLINE_OPT void Valu___024root___ico_comb__TOP__4(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__4\n"); );
    // Init
    VlUnpacked<CData/*0:0*/, 16> alu__DOT__ar__DOT__cout3__DOT__out;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        alu__DOT__ar__DOT__cout3__DOT__out[__Vi0] = 0;
    }
    // Body
    alu__DOT__ar__DOT__cout3__DOT__out[1U] = (1U & 
                                              ((0x7fffU 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 1U)) 
                                               ^ (IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector)));
    vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xfffdU & (IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (2U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                     - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                       << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[2U] = (1U & 
                                              ((0x3fffU 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 2U)) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                  >> 1U)));
    vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xfffbU & (IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (4U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                     - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                       << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[3U] = (1U & 
                                              ((0x1fffU 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 3U)) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                  >> 2U)));
    vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xfff7U & (IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (8U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                     - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                       << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[4U] = (1U & 
                                              ((0xfffU 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 4U)) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                  >> 3U)));
    vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xffefU & (IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x10U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                        - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                          << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[5U] = (1U & 
                                              ((0x7ffU 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 5U)) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                  >> 4U)));
    vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xffdfU & (IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x20U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                        - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                          << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[6U] = (1U & 
                                              ((0x3ffU 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 6U)) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                  >> 5U)));
    vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xffbfU & (IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x40U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                        - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                          << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[7U] = (1U & 
                                              ((0x1ffU 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 7U)) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                  >> 6U)));
    vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xff7fU & (IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x80U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                        - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                          << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[8U] = (1U & 
                                              ((0xffU 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 8U)) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                  >> 7U)));
    vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xfeffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x100U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                         - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                           << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[9U] = (1U & 
                                              ((0x7fU 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 9U)) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                  >> 8U)));
    vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xfdffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x200U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                         - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                           << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[0xaU] = (1U 
                                                & ((0x3fU 
                                                    & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                        - (IData)(1U)) 
                                                       >> 0xaU)) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                    >> 9U)));
    vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xfbffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x400U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                         - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                           << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[0xbU] = (1U 
                                                & ((0x1fU 
                                                    & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                        - (IData)(1U)) 
                                                       >> 0xbU)) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                    >> 0xaU)));
    vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xf7ffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x800U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                         - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                           << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[0xcU] = (1U 
                                                & ((0xfU 
                                                    & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                        - (IData)(1U)) 
                                                       >> 0xcU)) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                    >> 0xbU)));
    vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xefffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x1000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                          - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                            << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[0xdU] = (1U 
                                                & ((7U 
                                                    & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                        - (IData)(1U)) 
                                                       >> 0xdU)) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                    >> 0xcU)));
    vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xdfffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x2000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                          - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                            << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[0xeU] = (1U 
                                                & ((3U 
                                                    & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                        - (IData)(1U)) 
                                                       >> 0xeU)) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                    >> 0xdU)));
    vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0xbfffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x4000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                          - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                            << 1U))));
    alu__DOT__ar__DOT__cout3__DOT__out[0xfU] = (1U 
                                                & ((1U 
                                                    & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                                                        - (IData)(1U)) 
                                                       >> 0xfU)) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                    >> 0xeU)));
    vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector 
        = ((0x7fffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector)) 
           | (0x8000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                          - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                            << 1U))));
}

VL_INLINE_OPT void Valu___024root___ico_comb__TOP__5(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__5\n"); );
    // Init
    VlUnpacked<CData/*0:0*/, 16> alu__DOT__ar__DOT__cout9__DOT__out;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        alu__DOT__ar__DOT__cout9__DOT__out[__Vi0] = 0;
    }
    // Body
    alu__DOT__ar__DOT__cout9__DOT__out[1U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelf->in_a)) 
                                                >> 1U) 
                                               ^ (IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector)));
    vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xfffdU & (IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (2U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                     & (((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                         << 1U) | (IData)(vlSelf->in_a))) 
                    | ((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                << 1U)))));
    alu__DOT__ar__DOT__cout9__DOT__out[2U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelf->in_a)) 
                                                >> 2U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                  >> 1U)));
    vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xfffbU & (IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (4U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                     & (((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                         << 1U) | (IData)(vlSelf->in_a))) 
                    | ((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                << 1U)))));
    alu__DOT__ar__DOT__cout9__DOT__out[3U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelf->in_a)) 
                                                >> 3U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                  >> 2U)));
    vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xfff7U & (IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (8U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                     & (((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                         << 1U) | (IData)(vlSelf->in_a))) 
                    | ((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                << 1U)))));
    alu__DOT__ar__DOT__cout9__DOT__out[4U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelf->in_a)) 
                                                >> 4U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                  >> 3U)));
    vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xffefU & (IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x10U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                        & (((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                            << 1U) | (IData)(vlSelf->in_a))) 
                       | ((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                   << 1U)))));
    alu__DOT__ar__DOT__cout9__DOT__out[5U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelf->in_a)) 
                                                >> 5U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                  >> 4U)));
    vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xffdfU & (IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x20U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                        & (((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                            << 1U) | (IData)(vlSelf->in_a))) 
                       | ((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                   << 1U)))));
    alu__DOT__ar__DOT__cout9__DOT__out[6U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelf->in_a)) 
                                                >> 6U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                  >> 5U)));
    vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xffbfU & (IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x40U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                        & (((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                            << 1U) | (IData)(vlSelf->in_a))) 
                       | ((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                   << 1U)))));
    alu__DOT__ar__DOT__cout9__DOT__out[7U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelf->in_a)) 
                                                >> 7U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                  >> 6U)));
    vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xff7fU & (IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x80U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                        & (((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                            << 1U) | (IData)(vlSelf->in_a))) 
                       | ((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                   << 1U)))));
    alu__DOT__ar__DOT__cout9__DOT__out[8U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelf->in_a)) 
                                                >> 8U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                  >> 7U)));
    vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xfeffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x100U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                         & (((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                             << 1U) | (IData)(vlSelf->in_a))) 
                        | ((IData)(vlSelf->in_a) & 
                           ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                            << 1U)))));
    alu__DOT__ar__DOT__cout9__DOT__out[9U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelf->in_a)) 
                                                >> 9U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                  >> 8U)));
    vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xfdffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x200U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                         & (((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                             << 1U) | (IData)(vlSelf->in_a))) 
                        | ((IData)(vlSelf->in_a) & 
                           ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                            << 1U)))));
    alu__DOT__ar__DOT__cout9__DOT__out[0xaU] = (1U 
                                                & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                     ^ (IData)(vlSelf->in_a)) 
                                                    >> 0xaU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                    >> 9U)));
    vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xfbffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x400U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                         & (((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                             << 1U) | (IData)(vlSelf->in_a))) 
                        | ((IData)(vlSelf->in_a) & 
                           ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                            << 1U)))));
    alu__DOT__ar__DOT__cout9__DOT__out[0xbU] = (1U 
                                                & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                     ^ (IData)(vlSelf->in_a)) 
                                                    >> 0xbU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                    >> 0xaU)));
    vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xf7ffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x800U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                         & (((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                             << 1U) | (IData)(vlSelf->in_a))) 
                        | ((IData)(vlSelf->in_a) & 
                           ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                            << 1U)))));
    alu__DOT__ar__DOT__cout9__DOT__out[0xcU] = (1U 
                                                & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                     ^ (IData)(vlSelf->in_a)) 
                                                    >> 0xcU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                    >> 0xbU)));
    vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xefffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x1000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                          & (((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                              << 1U) | (IData)(vlSelf->in_a))) 
                         | ((IData)(vlSelf->in_a) & 
                            ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout9__DOT__out[0xdU] = (1U 
                                                & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                     ^ (IData)(vlSelf->in_a)) 
                                                    >> 0xdU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                    >> 0xcU)));
    vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xdfffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x2000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                          & (((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                              << 1U) | (IData)(vlSelf->in_a))) 
                         | ((IData)(vlSelf->in_a) & 
                            ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout9__DOT__out[0xeU] = (1U 
                                                & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                     ^ (IData)(vlSelf->in_a)) 
                                                    >> 0xeU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                    >> 0xdU)));
    vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0xbfffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x4000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                          & (((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                              << 1U) | (IData)(vlSelf->in_a))) 
                         | ((IData)(vlSelf->in_a) & 
                            ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout9__DOT__out[0xfU] = (1U 
                                                & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                     ^ (IData)(vlSelf->in_a)) 
                                                    >> 0xfU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                    >> 0xeU)));
    vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector 
        = ((0x7fffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector)) 
           | (0x8000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                          & (((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                              << 1U) | (IData)(vlSelf->in_a))) 
                         | ((IData)(vlSelf->in_a) & 
                            ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                             << 1U)))));
}

VL_INLINE_OPT void Valu___024root___ico_comb__TOP__6(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__6\n"); );
    // Init
    VlUnpacked<CData/*0:0*/, 16> alu__DOT__ar__DOT__cout1__DOT__out;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        alu__DOT__ar__DOT__cout1__DOT__out[__Vi0] = 0;
    }
    // Body
    alu__DOT__ar__DOT__cout1__DOT__out[1U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                >> 1U) 
                                               ^ (IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector)));
    vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xfffdU & (IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (2U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                     & (((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                         << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3))) 
                    | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                       & ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                          << 1U)))));
    alu__DOT__ar__DOT__cout1__DOT__out[2U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                >> 2U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                  >> 1U)));
    vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xfffbU & (IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (4U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                     & (((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                         << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3))) 
                    | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                       & ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                          << 1U)))));
    alu__DOT__ar__DOT__cout1__DOT__out[3U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                >> 3U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                  >> 2U)));
    vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xfff7U & (IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (8U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                     & (((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                         << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3))) 
                    | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                       & ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                          << 1U)))));
    alu__DOT__ar__DOT__cout1__DOT__out[4U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                >> 4U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                  >> 3U)));
    vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xffefU & (IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x10U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                        & (((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                            << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3))) 
                       | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                          & ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout1__DOT__out[5U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                >> 5U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                  >> 4U)));
    vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xffdfU & (IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x20U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                        & (((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                            << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3))) 
                       | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                          & ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout1__DOT__out[6U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                >> 6U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                  >> 5U)));
    vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xffbfU & (IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x40U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                        & (((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                            << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3))) 
                       | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                          & ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout1__DOT__out[7U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                >> 7U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                  >> 6U)));
    vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xff7fU & (IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x80U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                        & (((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                            << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3))) 
                       | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                          & ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout1__DOT__out[8U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                >> 8U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                  >> 7U)));
    vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xfeffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x100U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                         & (((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                             << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3))) 
                        | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                           & ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                              << 1U)))));
    alu__DOT__ar__DOT__cout1__DOT__out[9U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                >> 9U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                  >> 8U)));
    vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xfdffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x200U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                         & (((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                             << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3))) 
                        | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                           & ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                              << 1U)))));
    alu__DOT__ar__DOT__cout1__DOT__out[0xaU] = (1U 
                                                & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                     ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                    >> 0xaU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                    >> 9U)));
    vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xfbffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x400U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                         & (((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                             << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3))) 
                        | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                           & ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                              << 1U)))));
    alu__DOT__ar__DOT__cout1__DOT__out[0xbU] = (1U 
                                                & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                     ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                    >> 0xbU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                    >> 0xaU)));
    vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xf7ffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x800U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                         & (((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                             << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3))) 
                        | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                           & ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                              << 1U)))));
    alu__DOT__ar__DOT__cout1__DOT__out[0xcU] = (1U 
                                                & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                     ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                    >> 0xcU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                    >> 0xbU)));
    vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xefffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x1000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                          & (((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                              << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3))) 
                         | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                            & ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                               << 1U)))));
    alu__DOT__ar__DOT__cout1__DOT__out[0xdU] = (1U 
                                                & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                     ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                    >> 0xdU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                    >> 0xcU)));
    vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xdfffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x2000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                          & (((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                              << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3))) 
                         | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                            & ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                               << 1U)))));
    alu__DOT__ar__DOT__cout1__DOT__out[0xeU] = (1U 
                                                & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                     ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                    >> 0xeU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                    >> 0xdU)));
    vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0xbfffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x4000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                          & (((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                              << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3))) 
                         | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                            & ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                               << 1U)))));
    alu__DOT__ar__DOT__cout1__DOT__out[0xfU] = (1U 
                                                & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                                                     ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3)) 
                                                    >> 0xfU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                    >> 0xeU)));
    vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector 
        = ((0x7fffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector)) 
           | (0x8000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2) 
                          & (((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                              << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3))) 
                         | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3) 
                            & ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                               << 1U)))));
}

VL_INLINE_OPT void Valu___024root___ico_comb__TOP__7(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__7\n"); );
    // Init
    VlUnpacked<CData/*0:0*/, 16> alu__DOT__ar__DOT__cout10__DOT__out;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        alu__DOT__ar__DOT__cout10__DOT__out[__Vi0] = 0;
    }
    // Body
    alu__DOT__ar__DOT__cout10__DOT__out[1U] = (1U & 
                                               ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                  ^ (IData)(vlSelf->in_a)) 
                                                 >> 1U) 
                                                ^ (IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector)));
    vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xfffdU & (IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (2U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                     & (((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                         << 1U) | (IData)(vlSelf->in_a))) 
                    | ((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                << 1U)))));
    alu__DOT__ar__DOT__cout10__DOT__out[2U] = (1U & 
                                               ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                  ^ (IData)(vlSelf->in_a)) 
                                                 >> 2U) 
                                                ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   >> 1U)));
    vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xfffbU & (IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (4U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                     & (((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                         << 1U) | (IData)(vlSelf->in_a))) 
                    | ((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                << 1U)))));
    alu__DOT__ar__DOT__cout10__DOT__out[3U] = (1U & 
                                               ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                  ^ (IData)(vlSelf->in_a)) 
                                                 >> 3U) 
                                                ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   >> 2U)));
    vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xfff7U & (IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (8U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                     & (((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                         << 1U) | (IData)(vlSelf->in_a))) 
                    | ((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                << 1U)))));
    alu__DOT__ar__DOT__cout10__DOT__out[4U] = (1U & 
                                               ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                  ^ (IData)(vlSelf->in_a)) 
                                                 >> 4U) 
                                                ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   >> 3U)));
    vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xffefU & (IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x10U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                        & (((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                            << 1U) | (IData)(vlSelf->in_a))) 
                       | ((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   << 1U)))));
    alu__DOT__ar__DOT__cout10__DOT__out[5U] = (1U & 
                                               ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                  ^ (IData)(vlSelf->in_a)) 
                                                 >> 5U) 
                                                ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   >> 4U)));
    vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xffdfU & (IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x20U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                        & (((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                            << 1U) | (IData)(vlSelf->in_a))) 
                       | ((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   << 1U)))));
    alu__DOT__ar__DOT__cout10__DOT__out[6U] = (1U & 
                                               ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                  ^ (IData)(vlSelf->in_a)) 
                                                 >> 6U) 
                                                ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   >> 5U)));
    vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xffbfU & (IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x40U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                        & (((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                            << 1U) | (IData)(vlSelf->in_a))) 
                       | ((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   << 1U)))));
    alu__DOT__ar__DOT__cout10__DOT__out[7U] = (1U & 
                                               ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                  ^ (IData)(vlSelf->in_a)) 
                                                 >> 7U) 
                                                ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   >> 6U)));
    vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xff7fU & (IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x80U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                        & (((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                            << 1U) | (IData)(vlSelf->in_a))) 
                       | ((IData)(vlSelf->in_a) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   << 1U)))));
    alu__DOT__ar__DOT__cout10__DOT__out[8U] = (1U & 
                                               ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                  ^ (IData)(vlSelf->in_a)) 
                                                 >> 8U) 
                                                ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   >> 7U)));
    vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xfeffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x100U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                         & (((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                             << 1U) | (IData)(vlSelf->in_a))) 
                        | ((IData)(vlSelf->in_a) & 
                           ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                            << 1U)))));
    alu__DOT__ar__DOT__cout10__DOT__out[9U] = (1U & 
                                               ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                  ^ (IData)(vlSelf->in_a)) 
                                                 >> 9U) 
                                                ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                   >> 8U)));
    vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xfdffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x200U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                         & (((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                             << 1U) | (IData)(vlSelf->in_a))) 
                        | ((IData)(vlSelf->in_a) & 
                           ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                            << 1U)))));
    alu__DOT__ar__DOT__cout10__DOT__out[0xaU] = (1U 
                                                 & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                      ^ (IData)(vlSelf->in_a)) 
                                                     >> 0xaU) 
                                                    ^ 
                                                    ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                     >> 9U)));
    vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xfbffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x400U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                         & (((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                             << 1U) | (IData)(vlSelf->in_a))) 
                        | ((IData)(vlSelf->in_a) & 
                           ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                            << 1U)))));
    alu__DOT__ar__DOT__cout10__DOT__out[0xbU] = (1U 
                                                 & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                      ^ (IData)(vlSelf->in_a)) 
                                                     >> 0xbU) 
                                                    ^ 
                                                    ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                     >> 0xaU)));
    vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xf7ffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x800U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                         & (((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                             << 1U) | (IData)(vlSelf->in_a))) 
                        | ((IData)(vlSelf->in_a) & 
                           ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                            << 1U)))));
    alu__DOT__ar__DOT__cout10__DOT__out[0xcU] = (1U 
                                                 & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                      ^ (IData)(vlSelf->in_a)) 
                                                     >> 0xcU) 
                                                    ^ 
                                                    ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                     >> 0xbU)));
    vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xefffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x1000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                          & (((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                              << 1U) | (IData)(vlSelf->in_a))) 
                         | ((IData)(vlSelf->in_a) & 
                            ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout10__DOT__out[0xdU] = (1U 
                                                 & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                      ^ (IData)(vlSelf->in_a)) 
                                                     >> 0xdU) 
                                                    ^ 
                                                    ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                     >> 0xcU)));
    vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xdfffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x2000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                          & (((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                              << 1U) | (IData)(vlSelf->in_a))) 
                         | ((IData)(vlSelf->in_a) & 
                            ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout10__DOT__out[0xeU] = (1U 
                                                 & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                      ^ (IData)(vlSelf->in_a)) 
                                                     >> 0xeU) 
                                                    ^ 
                                                    ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                     >> 0xdU)));
    vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0xbfffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x4000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                          & (((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                              << 1U) | (IData)(vlSelf->in_a))) 
                         | ((IData)(vlSelf->in_a) & 
                            ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout10__DOT__out[0xfU] = (1U 
                                                 & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                      ^ (IData)(vlSelf->in_a)) 
                                                     >> 0xfU) 
                                                    ^ 
                                                    ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                     >> 0xeU)));
    vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector 
        = ((0x7fffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector)) 
           | (0x8000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                          & (((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                              << 1U) | (IData)(vlSelf->in_a))) 
                         | ((IData)(vlSelf->in_a) & 
                            ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                             << 1U)))));
}

VL_INLINE_OPT void Valu___024root___ico_comb__TOP__8(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__8\n"); );
    // Init
    VlUnpacked<CData/*0:0*/, 16> alu__DOT__ar__DOT__cout7__DOT__out;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        alu__DOT__ar__DOT__cout7__DOT__out[__Vi0] = 0;
    }
    // Body
    alu__DOT__ar__DOT__cout7__DOT__out[1U] = (1U & 
                                              ((0x7fffU 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 1U)) 
                                               ^ (IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector)));
    vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xfffdU & (IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (2U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                     - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                       << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[2U] = (1U & 
                                              ((0x3fffU 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 2U)) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                  >> 1U)));
    vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xfffbU & (IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (4U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                     - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                       << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[3U] = (1U & 
                                              ((0x1fffU 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 3U)) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                  >> 2U)));
    vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xfff7U & (IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (8U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                     - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                       << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[4U] = (1U & 
                                              ((0xfffU 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 4U)) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                  >> 3U)));
    vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xffefU & (IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x10U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                        - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                          << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[5U] = (1U & 
                                              ((0x7ffU 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 5U)) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                  >> 4U)));
    vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xffdfU & (IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x20U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                        - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                          << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[6U] = (1U & 
                                              ((0x3ffU 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 6U)) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                  >> 5U)));
    vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xffbfU & (IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x40U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                        - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                          << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[7U] = (1U & 
                                              ((0x1ffU 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 7U)) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                  >> 6U)));
    vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xff7fU & (IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x80U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                        - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                          << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[8U] = (1U & 
                                              ((0xffU 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 8U)) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                  >> 7U)));
    vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xfeffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x100U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                         - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                           << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[9U] = (1U & 
                                              ((0x7fU 
                                                & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                    - (IData)(1U)) 
                                                   >> 9U)) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                  >> 8U)));
    vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xfdffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x200U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                         - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                           << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[0xaU] = (1U 
                                                & ((0x3fU 
                                                    & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                        - (IData)(1U)) 
                                                       >> 0xaU)) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                    >> 9U)));
    vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xfbffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x400U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                         - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                           << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[0xbU] = (1U 
                                                & ((0x1fU 
                                                    & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                        - (IData)(1U)) 
                                                       >> 0xbU)) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                    >> 0xaU)));
    vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xf7ffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x800U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                         - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                           << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[0xcU] = (1U 
                                                & ((0xfU 
                                                    & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                        - (IData)(1U)) 
                                                       >> 0xcU)) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                    >> 0xbU)));
    vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xefffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x1000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                          - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                            << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[0xdU] = (1U 
                                                & ((7U 
                                                    & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                        - (IData)(1U)) 
                                                       >> 0xdU)) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                    >> 0xcU)));
    vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xdfffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x2000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                          - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                            << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[0xeU] = (1U 
                                                & ((3U 
                                                    & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                        - (IData)(1U)) 
                                                       >> 0xeU)) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                    >> 0xdU)));
    vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0xbfffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x4000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                          - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                            << 1U))));
    alu__DOT__ar__DOT__cout7__DOT__out[0xfU] = (1U 
                                                & ((1U 
                                                    & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                                                        - (IData)(1U)) 
                                                       >> 0xfU)) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                    >> 0xeU)));
    vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector 
        = ((0x7fffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector)) 
           | (0x8000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                          - (IData)(1U)) & ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                            << 1U))));
}

VL_INLINE_OPT void Valu___024root___ico_comb__TOP__9(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__9\n"); );
    // Init
    VlUnpacked<CData/*0:0*/, 16> alu__DOT__ar__DOT__cout6__DOT__out;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        alu__DOT__ar__DOT__cout6__DOT__out[__Vi0] = 0;
    }
    // Body
    alu__DOT__ar__DOT__cout6__DOT__out[1U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 1U) 
                                               ^ (IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector)));
    vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xfffdU & (IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (2U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                     & (((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                         << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                    | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                       & ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                          << 1U)))));
    alu__DOT__ar__DOT__cout6__DOT__out[2U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 2U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                  >> 1U)));
    vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xfffbU & (IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (4U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                     & (((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                         << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                    | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                       & ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                          << 1U)))));
    alu__DOT__ar__DOT__cout6__DOT__out[3U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 3U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                  >> 2U)));
    vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xfff7U & (IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (8U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                     & (((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                         << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                    | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                       & ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                          << 1U)))));
    alu__DOT__ar__DOT__cout6__DOT__out[4U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 4U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                  >> 3U)));
    vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xffefU & (IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x10U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                        & (((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                            << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                       | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                          & ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout6__DOT__out[5U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 5U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                  >> 4U)));
    vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xffdfU & (IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x20U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                        & (((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                            << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                       | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                          & ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout6__DOT__out[6U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 6U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                  >> 5U)));
    vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xffbfU & (IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x40U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                        & (((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                            << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                       | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                          & ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout6__DOT__out[7U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 7U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                  >> 6U)));
    vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xff7fU & (IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x80U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                        & (((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                            << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                       | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                          & ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout6__DOT__out[8U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 8U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                  >> 7U)));
    vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xfeffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x100U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                         & (((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                             << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                        | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                           & ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                              << 1U)))));
    alu__DOT__ar__DOT__cout6__DOT__out[9U] = (1U & 
                                              ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 9U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                  >> 8U)));
    vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xfdffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x200U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                         & (((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                             << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                        | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                           & ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                              << 1U)))));
    alu__DOT__ar__DOT__cout6__DOT__out[0xaU] = (1U 
                                                & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                     ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                    >> 0xaU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                    >> 9U)));
    vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xfbffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x400U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                         & (((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                             << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                        | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                           & ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                              << 1U)))));
    alu__DOT__ar__DOT__cout6__DOT__out[0xbU] = (1U 
                                                & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                     ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                    >> 0xbU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                    >> 0xaU)));
    vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xf7ffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x800U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                         & (((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                             << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                        | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                           & ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                              << 1U)))));
    alu__DOT__ar__DOT__cout6__DOT__out[0xcU] = (1U 
                                                & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                     ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                    >> 0xcU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                    >> 0xbU)));
    vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xefffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x1000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                          & (((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                              << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                         | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                            & ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                               << 1U)))));
    alu__DOT__ar__DOT__cout6__DOT__out[0xdU] = (1U 
                                                & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                     ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                    >> 0xdU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                    >> 0xcU)));
    vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xdfffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x2000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                          & (((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                              << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                         | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                            & ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                               << 1U)))));
    alu__DOT__ar__DOT__cout6__DOT__out[0xeU] = (1U 
                                                & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                     ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                    >> 0xeU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                    >> 0xdU)));
    vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0xbfffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x4000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                          & (((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                              << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                         | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                            & ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                               << 1U)))));
    alu__DOT__ar__DOT__cout6__DOT__out[0xfU] = (1U 
                                                & ((((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                                                     ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                    >> 0xfU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                    >> 0xeU)));
    vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector 
        = ((0x7fffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector)) 
           | (0x8000U & (((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2) 
                          & (((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                              << 1U) | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                         | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                            & ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                               << 1U)))));
}

VL_INLINE_OPT void Valu___024root___ico_comb__TOP__10(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__10\n"); );
    // Init
    VlUnpacked<CData/*0:0*/, 16> alu__DOT__ar__DOT__cout4__DOT__out;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        alu__DOT__ar__DOT__cout4__DOT__out[__Vi0] = 0;
    }
    // Body
    alu__DOT__ar__DOT__cout4__DOT__out[1U] = (1U & 
                                              ((((IData)(vlSelf->in_a) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 1U) 
                                               ^ (IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector)));
    vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xfffdU & (IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (2U & (((IData)(vlSelf->in_a) & (((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                               << 1U) 
                                              | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                    | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                       & ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                          << 1U)))));
    alu__DOT__ar__DOT__cout4__DOT__out[2U] = (1U & 
                                              ((((IData)(vlSelf->in_a) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 2U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                  >> 1U)));
    vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xfffbU & (IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (4U & (((IData)(vlSelf->in_a) & (((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                               << 1U) 
                                              | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                    | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                       & ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                          << 1U)))));
    alu__DOT__ar__DOT__cout4__DOT__out[3U] = (1U & 
                                              ((((IData)(vlSelf->in_a) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 3U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                  >> 2U)));
    vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xfff7U & (IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (8U & (((IData)(vlSelf->in_a) & (((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                               << 1U) 
                                              | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                    | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                       & ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                          << 1U)))));
    alu__DOT__ar__DOT__cout4__DOT__out[4U] = (1U & 
                                              ((((IData)(vlSelf->in_a) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 4U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                  >> 3U)));
    vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xffefU & (IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x10U & (((IData)(vlSelf->in_a) & (((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                       | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                          & ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout4__DOT__out[5U] = (1U & 
                                              ((((IData)(vlSelf->in_a) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 5U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                  >> 4U)));
    vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xffdfU & (IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x20U & (((IData)(vlSelf->in_a) & (((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                       | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                          & ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout4__DOT__out[6U] = (1U & 
                                              ((((IData)(vlSelf->in_a) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 6U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                  >> 5U)));
    vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xffbfU & (IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x40U & (((IData)(vlSelf->in_a) & (((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                       | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                          & ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout4__DOT__out[7U] = (1U & 
                                              ((((IData)(vlSelf->in_a) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 7U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                  >> 6U)));
    vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xff7fU & (IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x80U & (((IData)(vlSelf->in_a) & (((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                       | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                          & ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                             << 1U)))));
    alu__DOT__ar__DOT__cout4__DOT__out[8U] = (1U & 
                                              ((((IData)(vlSelf->in_a) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 8U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                  >> 7U)));
    vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xfeffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x100U & (((IData)(vlSelf->in_a) & (((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                        | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                           & ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                              << 1U)))));
    alu__DOT__ar__DOT__cout4__DOT__out[9U] = (1U & 
                                              ((((IData)(vlSelf->in_a) 
                                                 ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                >> 9U) 
                                               ^ ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                  >> 8U)));
    vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xfdffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x200U & (((IData)(vlSelf->in_a) & (((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                        | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                           & ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                              << 1U)))));
    alu__DOT__ar__DOT__cout4__DOT__out[0xaU] = (1U 
                                                & ((((IData)(vlSelf->in_a) 
                                                     ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                    >> 0xaU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                    >> 9U)));
    vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xfbffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x400U & (((IData)(vlSelf->in_a) & (((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                        | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                           & ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                              << 1U)))));
    alu__DOT__ar__DOT__cout4__DOT__out[0xbU] = (1U 
                                                & ((((IData)(vlSelf->in_a) 
                                                     ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                    >> 0xbU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                    >> 0xaU)));
    vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xf7ffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x800U & (((IData)(vlSelf->in_a) & (((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                        | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                           & ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                              << 1U)))));
    alu__DOT__ar__DOT__cout4__DOT__out[0xcU] = (1U 
                                                & ((((IData)(vlSelf->in_a) 
                                                     ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                    >> 0xcU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                    >> 0xbU)));
    vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xefffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x1000U & (((IData)(vlSelf->in_a) & (
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                         | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                            & ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                               << 1U)))));
    alu__DOT__ar__DOT__cout4__DOT__out[0xdU] = (1U 
                                                & ((((IData)(vlSelf->in_a) 
                                                     ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                    >> 0xdU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                    >> 0xcU)));
    vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xdfffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x2000U & (((IData)(vlSelf->in_a) & (
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                         | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                            & ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                               << 1U)))));
    alu__DOT__ar__DOT__cout4__DOT__out[0xeU] = (1U 
                                                & ((((IData)(vlSelf->in_a) 
                                                     ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                    >> 0xeU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                    >> 0xdU)));
    vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0xbfffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x4000U & (((IData)(vlSelf->in_a) & (
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                         | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                            & ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                               << 1U)))));
    alu__DOT__ar__DOT__cout4__DOT__out[0xfU] = (1U 
                                                & ((((IData)(vlSelf->in_a) 
                                                     ^ (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3)) 
                                                    >> 0xfU) 
                                                   ^ 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                    >> 0xeU)));
    vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector 
        = ((0x7fffU & (IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector)) 
           | (0x8000U & (((IData)(vlSelf->in_a) & (
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3))) 
                         | ((IData)(vlSelf->alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3) 
                            & ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                               << 1U)))));
}

VL_INLINE_OPT void Valu___024root___ico_comb__TOP__11(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_comb__TOP__11\n"); );
    // Body
    if ((8U & (IData)(vlSelf->sel))) {
        vlSelf->alu__DOT__ar__DOT__cout = (1U & ((4U 
                                                  & (IData)(vlSelf->sel))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->sel))
                                                    ? 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout11__DOT__carry_vector) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout10__DOT__carry_vector) 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->sel))
                                                    ? 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout9__DOT__carry_vector) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout8__DOT__carry_vector) 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->sel))
                                                    ? 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout7__DOT__carry_vector) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout6__DOT__carry_vector) 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->sel))
                                                    ? 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout5__DOT__carry_vector) 
                                                    >> 0xfU)
                                                    : 
                                                   ((IData)(vlSelf->alu__DOT__ar__DOT__cout4__DOT__carry_vector) 
                                                    >> 0xfU)))));
    } else if ((4U & (IData)(vlSelf->sel))) {
        if ((2U & (IData)(vlSelf->sel))) {
            vlSelf->alu__DOT__ar__DOT__cout = (1U & 
                                               ((1U 
                                                 & (IData)(vlSelf->sel))
                                                 ? 
                                                ((IData)(vlSelf->alu__DOT__ar__DOT__cout3__DOT__carry_vector) 
                                                 >> 0xfU)
                                                 : 
                                                ((IData)(vlSelf->alu__DOT__ar__DOT__cout2__DOT__carry_vector) 
                                                 >> 0xfU)));
        } else if ((1U & (IData)(vlSelf->sel))) {
            vlSelf->alu__DOT__ar__DOT__cout = (1U & 
                                               ((IData)(vlSelf->alu__DOT__ar__DOT__cout1__DOT__carry_vector) 
                                                >> 0xfU));
        }
    }
    vlSelf->carry_out = vlSelf->alu__DOT__ar__DOT__cout;
}

void Valu___024root___eval_ico(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Valu___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VicoTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x11ULL & vlSelf->__VicoTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((0x81ULL & vlSelf->__VicoTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((0x401ULL & vlSelf->__VicoTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((0x201ULL & vlSelf->__VicoTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((9ULL & vlSelf->__VicoTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((0x801ULL & vlSelf->__VicoTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((5ULL & vlSelf->__VicoTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__7(vlSelf);
    }
    if ((0x21ULL & vlSelf->__VicoTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__8(vlSelf);
    }
    if ((0x41ULL & vlSelf->__VicoTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__9(vlSelf);
    }
    if ((0x101ULL & vlSelf->__VicoTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__10(vlSelf);
    }
    if ((0xfffULL & vlSelf->__VicoTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__11(vlSelf);
    }
}

void Valu___024root___eval_triggers__ico(Valu___024root* vlSelf);

bool Valu___024root___eval_phase__ico(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Valu___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Valu___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Valu___024root___eval_act(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__7(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__8(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__9(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__10(vlSelf);
    }
    if ((0x7ffULL & vlSelf->__VactTriggered.word(0U))) {
        Valu___024root___ico_comb__TOP__11(vlSelf);
    }
}

void Valu___024root___eval_nba(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_nba\n"); );
}

void Valu___024root___eval_triggers__act(Valu___024root* vlSelf);

bool Valu___024root___eval_phase__act(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<11> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Valu___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Valu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Valu___024root___eval_phase__nba(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Valu___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__ico(Valu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__nba(Valu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__act(Valu___024root* vlSelf);
#endif  // VL_DEBUG

void Valu___024root___eval(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Valu___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/alu.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Valu___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Valu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/alu.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Valu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/alu.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Valu___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Valu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->carry_in & 0xfeU))) {
        Verilated::overWidthError("carry_in");}
    if (VL_UNLIKELY((vlSelf->sel & 0xf0U))) {
        Verilated::overWidthError("sel");}
    if (VL_UNLIKELY((vlSelf->mode & 0xfeU))) {
        Verilated::overWidthError("mode");}
}
#endif  // VL_DEBUG
