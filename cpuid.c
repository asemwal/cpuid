#include "flags.h"
#include "bin2hex.h"
#include "cpuid.h"
#include <stdio.h>
extern void (*basic[])(int *);
extern void (*extended[])(int *);
int main(void)
{
    int psn = 0;
    __UINT32_TYPE__ B_MAX, E_MAX;
    __UINT32_TYPE__ a[4];
#line 100
    unsigned int eax = 0x0;
    unsigned int ecx = 0x0;
    cpuvals(eax, ecx, a);
    basic[0](a);
    B_MAX = a[0];
    cpuvals(0x80000000, ecx, a);
    E_MAX = a[0];
    //extended[0](a);
    eax = 0x80000002;
    while (eax <= E_MAX && eax <= 0x80000004)
    {
        ecx = 0;
        cpuvals(eax, ecx, a);
        extended[0x0fffffff & eax](a);
        eax++;
    }
    eax = 1;
    while (eax <= B_MAX)
    {
        ecx = 0;
        cpuvals(eax, ecx, a);
        basic[eax](a);
        eax++;
    }
    eax = 0x80000001;
    cpuvals(eax, ecx, a);
    extended[0x0fffffff & eax](a);
    eax = 0x80000005;
    while (eax <= E_MAX)
    {
        ecx = 0;
        cpuvals(eax, ecx, a);
        extended[0x0fffffff & eax](a);
        eax++;
    }
    return 0;
}