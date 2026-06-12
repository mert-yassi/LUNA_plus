#ifndef __PARAMS_SELECTOR__
#define __PARAMS_SELECTOR__

// Change only this value to select the parameter set:
// 1 = accepted-paper LUNA+ parameters, 2 = faster LUNA+ parameters.
#define HGSW_PARAMS_VERSION 1

#if HGSW_PARAMS_VERSION == 1
#include "params_v1.hpp"
#elif HGSW_PARAMS_VERSION == 2
#include "params_v2.hpp"
#else
#error "Unsupported HGSW_PARAMS_VERSION. Use 1 for the accepted-paper parameters or 2 for the faster parameters."
#endif

#endif
