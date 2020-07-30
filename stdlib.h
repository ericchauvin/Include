// -*- C++ -*-



//===--------------------------- stdlib.h ---------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#if defined(__need_malloc_and_calloc)

// #if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
// #pragma GCC system_header
// #endif


// #include_next <stdlib.h>

#elif !defined(_LIBCPP_STDLIB_H)
#define _LIBCPP_STDLIB_H



#include <__config>

// #if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
// #pragma GCC system_header
// #endif

// #include_next <stdlib.h>

#ifdef __cplusplus

extern "C++" {

#undef abs
#undef div
#undef labs
#undef ldiv
#ifndef _LIBCPP_HAS_NO_LONG_LONG
#undef llabs
#undef lldiv
#endif

// MSVCRT already has the correct prototype in <stdlib.h> if __cplusplus is defined
#if !defined(_LIBCPP_MSVCRT) && !defined(__sun__) && !defined(_AIX)
inline _LIBCPP_INLINE_VISIBILITY long      abs(     long __x) _NOEXCEPT {return  labs(__x);}
#ifndef _LIBCPP_HAS_NO_LONG_LONG
inline _LIBCPP_INLINE_VISIBILITY long long abs(long long __x) _NOEXCEPT {return llabs(__x);}
#endif // _LIBCPP_HAS_NO_LONG_LONG

inline _LIBCPP_INLINE_VISIBILITY  ldiv_t div(     long __x,      long __y) _NOEXCEPT {return  ldiv(__x, __y);}
#ifndef _LIBCPP_HAS_NO_LONG_LONG
inline _LIBCPP_INLINE_VISIBILITY lldiv_t div(long long __x, long long __y) _NOEXCEPT {return lldiv(__x, __y);}
#endif // _LIBCPP_HAS_NO_LONG_LONG
#endif // _LIBCPP_MSVCRT / __sun__ / _AIX

}  // extern "C++"

#endif  // __cplusplus

#endif  // _LIBCPP_STDLIB_H
