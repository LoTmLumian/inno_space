#ifndef inno_space_udef_h
#define inno_space_udef_h

#include <assert.h>
#include <stdint.h>

#define byte unsigned char
#define ulint uint32_t
// #define ulint unsigned long

#define ut_ad assert
#define ut_a assert

#define UT_BITS_IN_BYTES(b) (((b) + 7) / 8)

#endif
