#pragma once

#if defined(_WIN32) && defined(watchexpr_lib_EXPORTS)
#define LIB_EXPORT extern "C" __declspec(dllexport)
#else
#define LIB_EXPORT extern "C" __declspec(dllimport)
#endif

struct InternalStruct;
LIB_EXPORT InternalStruct * getInternalStruct();