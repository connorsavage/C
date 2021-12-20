#include <stdio.h>
#include <inttypes.h>
#include "makeNBOC.h"
 
int isLittleEndian () {
  unsigned int x = 0x76543210;
  char *c = (char*) &x;
 
  //printf ("*c is: 0x%x\n", *c);
  if (*c == 0x10)
  {
    return 1; //little endian
  }
  else
  {
    return 0; //big endian
  }
 
  return 0;
}
 
uint32_t makeNBOC (uint32_t n) {
    if(isLittleEndian()) {
        uint32_t reversed = 0;
        uint32_t a = (n >> 0) & 0xFF;
        uint32_t b = (n >> 8) & 0xFF;
        uint32_t c = (n >> 16) & 0xFF;
        uint32_t d = (n >> 24) & 0xFF;
        reversed = (a << 24) | (b << 16) | (c << 8) | d;
        n = reversed;
        printf("Little: %u", n);
        return n;
    } else {
        printf("Big: %u", n);
        return n;
    }
}