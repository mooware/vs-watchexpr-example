#pragma once

#if defined(_WIN32) && defined(watchexpr_lib_1_2_3_EXPORTS)
#define LIB2_EXPORT extern "C" __declspec(dllexport)
#else
#define LIB2_EXPORT extern "C" __declspec(dllimport)
#endif

struct InternalStruct2;
LIB2_EXPORT InternalStruct2 * getInternalStruct2();