#ifndef HW0605_H_INCLUDE
#define HW0605_H_INCLUDE

#include<stdio.h>
#include<stdint.h>

void print_card( const uint8_t player[13] );
int32_t sort_card( uint8_t player[13], int32_t ( * compare)( int32_t a,int32_t b ) );
int32_t func01(int32_t,int32_t);
int32_t func02(int32_t,int32_t);
int32_t func03(int32_t,int32_t);

#endif