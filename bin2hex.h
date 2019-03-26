
#include <stdio.h>
#include "flags.h"
#ifndef __BIN2HEX_H
#define __BIN2HEX_H
#undef printhex
#undef printbinary
#undef printoct
#undef print_hex
#undef print_binary
#undef print_oct

#define printhex(x) ((x == 15) ? 'F' : (x == 14) ? 'E' : (x == 13) ? 'D' : (x == 12) ? 'C' : (x == 11) ? 'B' : (x == 10) ? 'A' : (x == 9) ? '9' : (x == 8) ? '8' : (x == 7) ? '7' : (x == 6) ? '6' : (x == 5) ? '5' : (x == 4) ? '4' : (x == 3) ? '3' : (x == 2) ? '2' : (x == 1) ? '1' : ((x == 0) ? '0' : '-'))
#define printbinary(n) (n ? '1' : '0')
#define printoct(x) ((x == 7) ? '7' : (x == 6) ? '6' : (x == 5) ? '5' : (x == 4) ? '4' : (x == 3) ? '3' : (x == 2) ? '2' : (x == 1) ? '1' : ((x == 0) ? '0' : -1))

struct  x_struct {
    unsigned char a2:8;
} x_struct;

void print_oct(unsigned long long j, int print)
{
    char k;
    char arr[((sizeof(j) * 8)/3)+1] = {0x00};
    for (k = 0; k < sizeof(j) * 8; k += 3)
    {
        arr[k / 3] = printoct((j & (BIT2_64 | BIT1_64 | BIT0_64)));
        j >>= 3;
    }
    printf("0");
    for (k = ((sizeof(j) * 8)/3)+1; k >= 0; k--)
    {
        if(arr[k] > 0x30 && print == 0)
        {
            print = 1;
        }
        if(print  == 1)
        {
            printf("%c", arr[k]);
        }
    }
    if(print == 0){
        printf("0");
    }
    printf("\n");
    return;
}
/*************************
 * If print == 0 print after zeros;
 * if print != 0 print complete;
 */

void print_hex(unsigned long long j, int print)
{
    char k;
    char arr[((sizeof(j) * 8)/4)];
    for (k = 0; k < sizeof(j) * 8; k += 4)
    {
        arr[k / 4] = printhex((j & (BIT3_64 | BIT2_64 | BIT1_64 | BIT0_64)));
        j >>= 4;
    }
    printf("0x");
    for (k = (sizeof(j) * 8) / 4; k >= 0; k--)
    {
        if(arr[k] > 0x30 && print == 0)
        {
            print = 1;
        }
        if(print  == 1)
        {
            printf("%c", arr[k]);
        }
    }
    if(print == 0){
        printf("0");
    }
    printf("\n");
    return;
}
// a definition using static inline
int add(int a, int b){
    return a+b;
}
inline int max(int a, int b) {
    printf("can i do more lines here;\n");
    printf("can i call function from here;\n");
    add(a,b);
    printf("i called function and got %d from here;\n", add(a,b));
  return a > b ? a : b;
}
void print_binary(unsigned long long j, int print)
{
    char k;
    char arr[((sizeof(j) * 8))];
    for (k = 0; k < sizeof(j) * 8; k++)
    {
        arr[k] = printbinary(j & BIT0_64);
        j >>= 1;
    }
    printf("0b");
    for (k = (sizeof(j) * 8); k >= 0; k--)
    {
        if(arr[k] > 0x30 && print == 0)
        {
            print = 1;
        }
        if(print  == 1)
        {
            printf("%c", arr[k]);
        }
    }
    if(print == 0){
        printf("0");
    }
    printf("\n");
    return;
}
#endif