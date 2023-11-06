// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VF1_Lights.h"
#include "VF1_Lights__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VF1_Lights::VF1_Lights(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VF1_Lights__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , trigger{vlSymsp->TOP.trigger}
    , n{vlSymsp->TOP.n}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VF1_Lights::VF1_Lights(const char* _vcname__)
    : VF1_Lights(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VF1_Lights::~VF1_Lights() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VF1_Lights___024root___eval_initial(VF1_Lights___024root* vlSelf);
void VF1_Lights___024root___eval_settle(VF1_Lights___024root* vlSelf);
void VF1_Lights___024root___eval(VF1_Lights___024root* vlSelf);
#ifdef VL_DEBUG
void VF1_Lights___024root___eval_debug_assertions(VF1_Lights___024root* vlSelf);
#endif  // VL_DEBUG
void VF1_Lights___024root___final(VF1_Lights___024root* vlSelf);

static void _eval_initial_loop(VF1_Lights__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VF1_Lights___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VF1_Lights___024root___eval_settle(&(vlSymsp->TOP));
        VF1_Lights___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VF1_Lights::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VF1_Lights::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VF1_Lights___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VF1_Lights___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VF1_Lights::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VF1_Lights::final() {
    VF1_Lights___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VF1_Lights::hierName() const { return vlSymsp->name(); }
const char* VF1_Lights::modelName() const { return "VF1_Lights"; }
unsigned VF1_Lights::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VF1_Lights::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VF1_Lights___024root__trace_init_top(VF1_Lights___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VF1_Lights___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VF1_Lights___024root*>(voidSelf);
    VF1_Lights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VF1_Lights___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VF1_Lights___024root__trace_register(VF1_Lights___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VF1_Lights::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VF1_Lights___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
