// -*- C++ -*-



//===--------------------------- wchar.h ----------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#if defined(__need_wint_t) || defined(__need_mbstate_t)

// #if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
// #pragma GCC system_header
// #endif

// #include_next <wchar.h>

#elif !defined(_LIBCPP_WCHAR_H)
#define _LIBCPP_WCHAR_H


#include <__config>

// #if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
// #pragma GCC system_header
// #endif

#ifdef __cplusplus
#define __CORRECT_ISO_CPP_WCHAR_H_PROTO
#endif

// #include_next <wchar.h>

// Determine whether we have const-correct overloads for wcschr and friends.
#if defined(_WCHAR_H_CPLUSPLUS_98_CONFORMANCE_)
#  define _LIBCPP_WCHAR_H_HAS_CONST_OVERLOADS 1
#elif defined(__GLIBC_PREREQ)
#  if __GLIBC_PREREQ(2, 10)
#    define _LIBCPP_WCHAR_H_HAS_CONST_OVERLOADS 1
#  endif
#elif defined(_LIBCPP_MSVCRT)
#  if defined(_CRT_CONST_CORRECT_OVERLOADS)
#    define _LIBCPP_WCHAR_H_HAS_CONST_OVERLOADS 1
#  endif
#endif

#if defined(__cplusplus) && !defined(_LIBCPP_WCHAR_H_HAS_CONST_OVERLOADS) && defined(_LIBCPP_PREFERRED_OVERLOAD)
extern "C++" {
inline _LIBCPP_INLINE_VISIBILITY
wchar_t* __libcpp_wcschr(const wchar_t* __s, wchar_t __c) {return (wchar_t*)wcschr(__s, __c);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const wchar_t* wcschr(const wchar_t* __s, wchar_t __c) {return __libcpp_wcschr(__s, __c);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      wchar_t* wcschr(      wchar_t* __s, wchar_t __c) {return __libcpp_wcschr(__s, __c);}

inline _LIBCPP_INLINE_VISIBILITY
wchar_t* __libcpp_wcspbrk(const wchar_t* __s1, const wchar_t* __s2) {return (wchar_t*)wcspbrk(__s1, __s2);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const wchar_t* wcspbrk(const wchar_t* __s1, const wchar_t* __s2) {return __libcpp_wcspbrk(__s1, __s2);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      wchar_t* wcspbrk(      wchar_t* __s1, const wchar_t* __s2) {return __libcpp_wcspbrk(__s1, __s2);}

inline _LIBCPP_INLINE_VISIBILITY
wchar_t* __libcpp_wcsrchr(const wchar_t* __s, wchar_t __c) {return (wchar_t*)wcsrchr(__s, __c);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const wchar_t* wcsrchr(const wchar_t* __s, wchar_t __c) {return __libcpp_wcsrchr(__s, __c);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      wchar_t* wcsrchr(      wchar_t* __s, wchar_t __c) {return __libcpp_wcsrchr(__s, __c);}

inline _LIBCPP_INLINE_VISIBILITY
wchar_t* __libcpp_wcsstr(const wchar_t* __s1, const wchar_t* __s2) {return (wchar_t*)wcsstr(__s1, __s2);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const wchar_t* wcsstr(const wchar_t* __s1, const wchar_t* __s2) {return __libcpp_wcsstr(__s1, __s2);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      wchar_t* wcsstr(      wchar_t* __s1, const wchar_t* __s2) {return __libcpp_wcsstr(__s1, __s2);}

inline _LIBCPP_INLINE_VISIBILITY
wchar_t* __libcpp_wmemchr(const wchar_t* __s, wchar_t __c, size_t __n) {return (wchar_t*)wmemchr(__s, __c, __n);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const wchar_t* wmemchr(const wchar_t* __s, wchar_t __c, size_t __n) {return __libcpp_wmemchr(__s, __c, __n);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      wchar_t* wmemchr(      wchar_t* __s, wchar_t __c, size_t __n) {return __libcpp_wmemchr(__s, __c, __n);}
}
#endif

#if defined(__cplusplus) && defined(_LIBCPP_MSVCRT_LIKE)
extern "C" {
size_t mbsnrtowcs(wchar_t *__restrict dst, const char **__restrict src,
                  size_t nmc, size_t len, mbstate_t *__restrict ps);
size_t wcsnrtombs(char *__restrict dst, const wchar_t **__restrict src,
                  size_t nwc, size_t len, mbstate_t *__restrict ps);
}  // extern "C++"
#endif  // __cplusplus && _LIBCPP_MSVCRT

#endif  // _LIBCPP_WCHAR_H

