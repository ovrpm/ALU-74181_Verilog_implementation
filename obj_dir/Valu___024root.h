// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"


class Valu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Valu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(carry_in,0,0);
        VL_IN8(sel,3,0);
        VL_IN8(mode,0,0);
        VL_OUT8(carry_out,0,0);
        VL_OUT8(compare,0,0);
        CData/*0:0*/ alu__DOT__ar__DOT__cout;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        VL_IN16(in_a,15,0);
        VL_IN16(in_b,15,0);
        VL_OUT16(alu_out,15,0);
        SData/*15:0*/ alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber3;
        SData/*15:0*/ alu__DOT__ar__DOT____Vcellinp__cout1____pinNumber2;
        SData/*15:0*/ alu__DOT__ar__DOT____Vcellinp__cout2____pinNumber3;
        SData/*15:0*/ alu__DOT__ar__DOT____Vcellinp__cout4____pinNumber3;
        SData/*15:0*/ alu__DOT__ar__DOT____Vcellinp__cout10____pinNumber2;
        SData/*15:0*/ alu__DOT__ar__DOT__cout1__DOT__carry_vector;
        SData/*15:0*/ alu__DOT__ar__DOT__cout2__DOT__carry_vector;
        SData/*15:0*/ alu__DOT__ar__DOT__cout3__DOT__carry_vector;
        SData/*15:0*/ alu__DOT__ar__DOT__cout4__DOT__carry_vector;
        SData/*15:0*/ alu__DOT__ar__DOT__cout5__DOT__carry_vector;
        SData/*15:0*/ alu__DOT__ar__DOT__cout6__DOT__carry_vector;
        SData/*15:0*/ alu__DOT__ar__DOT__cout7__DOT__carry_vector;
        SData/*15:0*/ alu__DOT__ar__DOT__cout8__DOT__carry_vector;
        SData/*15:0*/ alu__DOT__ar__DOT__cout9__DOT__carry_vector;
        SData/*15:0*/ alu__DOT__ar__DOT__cout10__DOT__carry_vector;
        SData/*15:0*/ alu__DOT__ar__DOT__cout11__DOT__carry_vector;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout11__DOT__carry_vector__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout10__DOT__carry_vector__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout9__DOT__carry_vector__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout8__DOT__carry_vector__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout7__DOT__carry_vector__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout6__DOT__carry_vector__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout5__DOT__carry_vector__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout4__DOT__carry_vector__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout3__DOT__carry_vector__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout2__DOT__carry_vector__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout1__DOT__carry_vector__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout11__DOT__carry_vector__1;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout10__DOT__carry_vector__1;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout9__DOT__carry_vector__1;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout8__DOT__carry_vector__1;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout7__DOT__carry_vector__1;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout6__DOT__carry_vector__1;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout5__DOT__carry_vector__1;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout4__DOT__carry_vector__1;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout3__DOT__carry_vector__1;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout2__DOT__carry_vector__1;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout1__DOT__carry_vector__1;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout11__DOT__carry_vector__2;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout10__DOT__carry_vector__2;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout9__DOT__carry_vector__2;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout8__DOT__carry_vector__2;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout7__DOT__carry_vector__2;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout6__DOT__carry_vector__2;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout5__DOT__carry_vector__2;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout4__DOT__carry_vector__2;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout3__DOT__carry_vector__2;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout2__DOT__carry_vector__2;
        SData/*15:0*/ __Vtrigprevexpr___TOP__alu__DOT__ar__DOT__cout1__DOT__carry_vector__2;
    };
    struct {
        IData/*31:0*/ __VactIterCount;
    };
    VlTriggerVec<12> __VstlTriggered;
    VlTriggerVec<12> __VicoTriggered;
    VlTriggerVec<11> __VactTriggered;
    VlTriggerVec<11> __VnbaTriggered;

    // INTERNAL VARIABLES
    Valu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu___024root(Valu__Syms* symsp, const char* v__name);
    ~Valu___024root();
    VL_UNCOPYABLE(Valu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
