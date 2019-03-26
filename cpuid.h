#ifndef __CPUID_H_

#define PRINT_HEADER() (printf("\n############################################\n"))
void MEMORYFEATURES(int x)
{
    switch (x)
    {
    case 0x0:
        //printf("General Null descriptor, this byte contains no information\n");
        break;
    case 0x1:
        printf("TLB Instruction TLB: 4 KByte pages, 4-way set associative, 32 entries\n");
        break;
    case 0x2:
        printf("TLB Instruction TLB: 4 MByte pages, fully associative, 2 entries\n");
        break;
    case 0x3:
        printf("TLB Data TLB: 4 KByte pages, 4-way set associative, 64 entries\n");
        break;
    case 0x4:
        printf("TLB Data TLB: 4 MByte pages, 4-way set associative, 8 entries\n");
        break;
    case 0x5:
        printf("TLB Data TLB1: 4 MByte pages, 4-way set associative, 32 entries\n");
        break;
    case 0x6:
        printf("Cache 1st-level instruction cache: 8 KBytes, 4-way set associative, 32 byte line size\n");
        break;
    case 0x8:
        printf("Cache 1st-level instruction cache: 16 KBytes, 4-way set associative, 32 byte line size\n");
        break;
    case 0x9:
        printf("Cache 1st-level instruction cache: 32KBytes, 4-way set associative, 64 byte line size\n");
        break;
    case 0x0A:
        printf("Cache 1st-level data cache: 8 KBytes, 2-way set associative, 32 byte line size\n");
        break;
    case 0x0B:
        printf("TLB Instruction TLB: 4 MByte pages, 4-way set associative, 4 entries\n");
        break;
    case 0x0C:
        printf("Cache 1st-level data cache: 16 KBytes, 4-way set associative, 32 byte line size\n");
        break;
    case 0x0D:
        printf("Cache 1st-level data cache: 16 KBytes, 4-way set associative, 64 byte line size\n");
        break;
    case 0x0E:
        printf("Cache 1st-level data cache: 24 KBytes, 6-way set associative, 64 byte line size\n");
        break;
    case 0x1D:
        printf("Cache 2nd-level cache: 128 KBytes, 2-way set associative, 64 byte line size\n");
        break;
    case 0x21:
        printf("Cache 2nd-level cache: 256 KBytes, 8-way set associative, 64 byte line size\n");
        break;
    case 0x22:
        printf("Cache 3rd-level cache: 512 KBytes, 4-way set associative, 64 byte line size, 2 lines per sector\n");
        break;
    case 0x23:
        printf("Cache 3rd-level cache: 1 MBytes, 8-way set associative, 64 byte line size, 2 lines per sector\n");
        break;
    case 0x24:
        printf("Cache 2nd-level cache: 1 MBytes, 16-way set associative, 64 byte line size\n");
        break;
    case 0x25:
        printf("Cache 3rd-level cache: 2 MBytes, 8-way set associative, 64 byte line size, 2 lines per sector\n");
        break;
    case 0x29:
        printf("Cache 3rd-level cache: 4 MBytes, 8-way set associative, 64 byte line size, 2 lines per sector\n");
        break;
    case 0x2C:
        printf("Cache 1st-level data cache: 32 KBytes, 8-way set associative, 64 byte line size\n");
        break;
    case 0x30:
        printf("Cache 1st-level instruction cache: 32 KBytes, 8-way set associative, 64 byte line size\n");
        break;
    case 0x40:
        printf("Cache No 2nd-level cache or, if processor contains a valid 2nd-level cache, no 3rd-level cache\n");
        break;
    case 0x41:
        printf("Cache 2nd-level cache: 128 KBytes, 4-way set associative, 32 byte line size\n");
        break;
    case 0x42:
        printf("Cache 2nd-level cache: 256 KBytes, 4-way set associative, 32 byte line size\n");
        break;
    case 0x43:
        printf("Cache 2nd-level cache: 512 KBytes, 4-way set associative, 32 byte line size\n");
        break;
    case 0x44:
        printf("Cache 2nd-level cache: 1 MByte, 4-way set associative, 32 byte line size\n");
        break;
    case 0x45:
        printf("Cache 2nd-level cache: 2 MByte, 4-way set associative, 32 byte line size\n");
        break;
    case 0x46:
        printf("Cache 3rd-level cache: 4 MByte, 4-way set associative, 64 byte line size\n");
        break;
    case 0x47:
        printf("Cache 3rd-level cache: 8 MByte, 8-way set associative, 64 byte line size\n");
        break;
    case 0x48:
        printf("Cache 2nd-level cache: 3MByte, 12-way set associative, 64 byte line size\n");
        break;
    case 0x49:
        printf("Cache 3rd-level cache: 4MB, 16-way set associative, 64-byte line size (Intel Xeon processor MP, Family 0FH, Model 06H); 2nd-level cache: 4 MByte, 16-way set associative, 64 byte line size\n");
        break;
    case 0x4A:
        printf("Cache 3rd-level cache: 6MByte, 12-way set associative, 64 byte line size\n");
        break;
    case 0x4B:
        printf("Cache 3rd-level cache: 8MByte, 16-way set associative, 64 byte line size\n");
        break;
    case 0x4C:
        printf("Cache 3rd-level cache: 12MByte, 12-way set associative, 64 byte line size\n");
        break;
    case 0x4D:
        printf("Cache 3rd-level cache: 16MByte, 16-way set associative, 64 byte line size\n");
        break;
    case 0x4E:
        printf("Cache 2nd-level cache: 6MByte, 24-way set associative, 64 byte line size\n");
        break;
    case 0x4F:
        printf("TLB Instruction TLB: 4 KByte pages, 32 entries\n");
        break;
    case 0x50:
        printf("TLB Instruction TLB: 4 KByte and 2-MByte or 4-MByte pages, 64 entries\n");
        break;
    case 0x51:
        printf("TLB Instruction TLB: 4 KByte and 2-MByte or 4-MByte pages, 128 entries\n");
        break;
    case 0x52:
        printf("TLB Instruction TLB: 4 KByte and 2-MByte or 4-MByte pages, 256 entries\n");
        break;
    case 0x55:
        printf("TLB Instruction TLB: 2-MByte or 4-MByte pages, fully associative, 7 entries\n");
        break;
    case 0x56:
        printf("TLB Data TLB0: 4 MByte pages, 4-way set associative, 16 entries\n");
        break;
    case 0x57:
        printf("TLB Data TLB0: 4 KByte pages, 4-way associative, 16 entries\n");
        break;
    case 0x59:
        printf("TLB Data TLB0: 4 KByte pages, fully associative, 16 entries\n");
        break;
    case 0x5A:
        printf("TLB Data TLB0: 2 MByte or 4 MByte pages, 4-way set associative, 32 entries\n");
        break;
    case 0x5B:
        printf("TLB Data TLB: 4 KByte and 4 MByte pages, 64 entries\n");
        break;
    case 0x5C:
        printf("TLB Data TLB: 4 KByte and 4 MByte pages,128 entries\n");
        break;
    case 0x5D:
        printf("TLB Data TLB: 4 KByte and 4 MByte pages,256 entries\n");
        break;
    case 0x60:
        printf("Cache 1st-level data cache: 16 KByte, 8-way set associative, 64 byte line size\n");
        break;
    case 0x61:
        printf("TLB Instruction TLB: 4 KByte pages, fully associative, 48 entries\n");
        break;
    case 0x63:
        printf("TLB Data TLB: 2 MByte or 4 MByte pages, 4-way set associative, 32 entries and a separate array with 1 GByte pages, 4-way set associative, 4 entries\n");
        break;
    case 0x64:
        printf("TLB Data TLB: 4 KByte pages, 4-way set associative, 512 entries\n");
        break;
    case 0x66:
        printf("Cache 1st-level data cache: 8 KByte, 4-way set associative, 64 byte line size\n");
        break;
    case 0x67:
        printf("Cache 1st-level data cache: 16 KByte, 4-way set associative, 64 byte line size\n");
        break;
    case 0x68:
        printf("Cache 1st-level data cache: 32 KByte, 4-way set associative, 64 byte line size\n");
        break;
    case 0x6A:
        printf("Cache uTLB: 4 KByte pages, 8-way set associative, 64 entries\n");
        break;
    case 0x6B:
        printf("Cache DTLB: 4 KByte pages, 8-way set associative, 256 entries\n");
        break;
    case 0x6C:
        printf("Cache DTLB: 2M/4M pages, 8-way set associative, 128 entries\n");
        break;
    case 0x6D:
        printf("Cache DTLB: 1 GByte pages, fully associative, 16 entries\n");
        break;
    case 0x70:
        printf("Cache Trace cache: 12 K-μop, 8-way set associative\n");
        break;
    case 0x71:
        printf("Cache Trace cache: 16 K-μop, 8-way set associative\n");
        break;
    case 0x72:
        printf("Cache Trace cache: 32 K-μop, 8-way set associative\n");
        break;
    case 0x76:
        printf("TLB Instruction TLB: 2M/4M pages, fully associative, 8 entries\n");
        break;
    case 0x78:
        printf("Cache 2nd-level cache: 1 MByte, 4-way set associative, 64byte line size\n");
        break;
    case 0x79:
        printf("Cache 2nd-level cache: 128 KByte, 8-way set associative, 64 byte line size, 2 lines per sector\n");
        break;
    case 0x7A:
        printf("Cache 2nd-level cache: 256 KByte, 8-way set associative, 64 byte line size, 2 lines per sector\n");
        break;
    case 0x7B:
        printf("Cache 2nd-level cache: 512 KByte, 8-way set associative, 64 byte line size, 2 lines per sector\n");
        break;
    case 0x7C:
        printf("Cache 2nd-level cache: 1 MByte, 8-way set associative, 64 byte line size, 2 lines per sector\n");
        break;
    case 0x7D:
        printf("Cache 2nd-level cache: 2 MByte, 8-way set associative, 64byte line size\n");
        break;
    case 0x7F:
        printf("Cache 2nd-level cache: 512 KByte, 2-way set associative, 64-byte line size\n");
        break;
    case 0x80:
        printf("Cache 2nd-level cache: 512 KByte, 8-way set associative, 64-byte line size\n");
        break;
    case 0x82:
        printf("Cache 2nd-level cache: 256 KByte, 8-way set associative, 32 byte line size\n");
        break;
    case 0x83:
        printf("Cache 2nd-level cache: 512 KByte, 8-way set associative, 32 byte line size\n");
        break;
    case 0x84:
        printf("Cache 2nd-level cache: 1 MByte, 8-way set associative, 32 byte line size\n");
        break;
    case 0x85:
        printf("Cache 2nd-level cache: 2 MByte, 8-way set associative, 32 byte line size\n");
        break;
    case 0x86:
        printf("Cache 2nd-level cache: 512 KByte, 4-way set associative, 64 byte line size\n");
        break;
    case 0x87:
        printf("Cache 2nd-level cache: 1 MByte, 8-way set associative, 64 byte line size\n");
        break;
    case 0xA0:
        printf("DTLB DTLB: 4k pages, fully associative, 32 entries\n");
        break;
    case 0xB0:
        printf("TLB Instruction TLB: 4 KByte pages, 4-way set associative, 128 entries\n");
        break;
    case 0xB1:
        printf("TLB Instruction TLB: 2M pages, 4-way, 8 entries or 4M pages, 4-way, 4 entries\n");
        break;
    case 0xB2:
        printf("TLB Instruction TLB: 4KByte pages, 4-way set associative, 64 entries\n");
        break;
    case 0xB3:
        printf("TLB Data TLB: 4 KByte pages, 4-way set associative, 128 entries\n");
        break;
    case 0xB4:
        printf("TLB Data TLB1: 4 KByte pages, 4-way associative, 256 entries\n");
        break;
    case 0xB5:
        printf("TLB Instruction TLB: 4KByte pages, 8-way set associative, 64 entries\n");
        break;
    case 0xB6:
        printf("TLB Instruction TLB: 4KByte pages, 8-way set associative, 128 entries\n");
        break;
    case 0xBA:
        printf("TLB Data TLB1: 4 KByte pages, 4-way associative, 64 entries\n");
        break;
    case 0xC0:
        printf("TLB Data TLB: 4 KByte and 4 MByte pages, 4-way associative, 8 entries\n");
        break;
    case 0xC1:
        printf("STLB Shared 2nd-Level TLB: 4 KByte/2MByte pages, 8-way associative, 1024 entries\n");
        break;
    case 0xC2:
        printf("DTLB DTLB: 4 KByte/2 MByte pages, 4-way associative, 16 entries\n");
        break;
    case 0xC3:
        printf("STLB Shared 2nd-Level TLB: 4 KByte /2 MByte pages, 6-way associative, 1536 entries. Also 1GBbyte pages, 4-way, 16 entries.\n");
        break;
    case 0xC4:
        printf("DTLB DTLB: 2M/4M Byte pages, 4-way associative, 32 entries\n");
        break;
    case 0xCA:
        printf("STLB Shared 2nd-Level TLB: 4 KByte pages, 4-way associative, 512 entries\n");
        break;
    case 0xD0:
        printf("Cache 3rd-level cache: 512 KByte, 4-way set associative, 64 byte line size\n");
        break;
    case 0xD1:
        printf("Cache 3rd-level cache: 1 MByte, 4-way set associative, 64 byte line size\n");
        break;
    case 0xD2:
        printf("Cache 3rd-level cache: 2 MByte, 4-way set associative, 64 byte line size\n");
        break;
    case 0xD6:
        printf("Cache 3rd-level cache: 1 MByte, 8-way set associative, 64 byte line size\n");
        break;
    case 0xD7:
        printf("Cache 3rd-level cache: 2 MByte, 8-way set associative, 64 byte line size\n");
        break;
    case 0xD8:
        printf("Cache 3rd-level cache: 4 MByte, 8-way set associative, 64 byte line size\n");
        break;
    case 0xDC:
        printf("Cache 3rd-level cache: 1.5 MByte, 12-way set associative, 64 byte line size\n");
        break;
    case 0xDD:
        printf("Cache 3rd-level cache: 3 MByte, 12-way set associative, 64 byte line size\n");
        break;
    case 0xDE:
        printf("Cache 3rd-level cache: 6 MByte, 12-way set associative, 64 byte line size\n");
        break;
    case 0xE2:
        printf("Cache 3rd-level cache: 2 MByte, 16-way set associative, 64 byte line size\n");
        break;
    case 0xE3:
        printf("Cache 3rd-level cache: 4 MByte, 16-way set associative, 64 byte line size\n");
        break;
    case 0xE4:
        printf("Cache 3rd-level cache: 8 MByte, 16-way set associative, 64 byte line size\n");
        break;
    case 0xEA:
        printf("Cache 3rd-level cache: 12MByte, 24-way set associative, 64 byte line size\n");
        break;
    case 0xEB:
        printf("Cache 3rd-level cache: 18MByte, 24-way set associative, 64 byte line size\n");
        break;
    case 0xEC:
        printf("Cache 3rd-level cache: 24MByte, 24-way set associative, 64 byte line size\n");
        break;
    case 0xF0:
        printf("Prefetch 64-Byte prefetching\n");
        break;
    case 0xF1:
        printf("Prefetch 128-Byte prefetching\n");
        break;
    case 0xFE:
        printf("General CPUID leaf 2 does not report TLB descriptor information; use CPUID leaf 18H to query TLB and other address translation parameters.\n");
        break;
    case 0xFF:
        printf("General CPUID leaf 2 does not report cache descriptor information, use CPUID leaf 4 to query cache parameters\n");
        break;

    default:
        printf("Null\n");
        break;
    }
}
#define FEATURE(a, x) ({printf("%s is",a); x ? printf(" ") : printf(" not "); printf("supported\n"); })
#define FEATURES(a, x) ({printf("%s are",a); x ? printf(" ") : printf(" not "); printf("supported\n"); })

void static inline cpuvals(unsigned int eax, unsigned int ecx, unsigned int retvals[])
{
#ifdef DEBUG
    printf("eax = ");
    print_hex(eax, 0);
    printf("ecx = ");
    print_hex(ecx, 0);
#endif
    asm("movl  %[in1], %%eax \n\t"
        "movl  %[in2], %%ecx \n\t"
        "cpuid \n\t"
        : [out1] "=a"(retvals[0]), [out2] "=b"(retvals[1]), [out3] "=c"(retvals[2]), [out4] "=d"(retvals[3])
        : [in1] "g"(eax), [in2] "g"(ecx)
        : //"eax", "ebx" , "ecx", "edx"
    );
}

//page 789 on intel pdf
void basic_level0(int a[])
{
#ifdef DEBUG
    printf("basic_level0\n");
#endif
    printf("%c", (0xff & a[1]));
    a[1] >>= 8;
    printf("%c", (0xff & a[1]));
    a[1] >>= 8;
    printf("%c", (0xff & a[1]));
    a[1] >>= 8;
    printf("%c", (0xff & a[1]));
    printf("%c", (0xff & a[3]));
    a[3] >>= 8;
    printf("%c", (0xff & a[3]));
    a[3] >>= 8;
    printf("%c", (0xff & a[3]));
    a[3] >>= 8;
    printf("%c", (0xff & a[3]));
    printf("%c", (0xff & a[2]));
    a[2] >>= 8;
    printf("%c", (0xff & a[2]));
    a[2] >>= 8;
    printf("%c", (0xff & a[2]));
    a[2] >>= 8;
    printf("%c\t", (0xff & a[2]));
}
unsigned char psn = 0;
void basic_level1(int a[])
{
#ifdef DEBUG
    printf("basic_level1\n");
#endif
    FEATURE("FPU", a[3] & BIT0_32);
    FEATURE("VME", a[3] & BIT1_32);
    FEATURE("DE", a[3] & BIT2_32);
    FEATURE("PSE", a[3] & BIT3_32);
    FEATURE("TSC", a[3] & BIT4_32);
    FEATURE("MSR", a[3] & BIT5_32);
    FEATURE("PAE", a[3] & BIT6_32);
    FEATURE("MCE", a[3] & BIT7_32);
    FEATURE("CX8", a[3] & BIT8_32);
    FEATURE("APIC", a[3] & BIT9_32);
    (a[3] & BIT11_32) ? ((a[0] & 0x0FFF3FFF) >= 0x00000633) ? FEATURE("SEP", a[3] & BIT11_32) : FEATURE("SEP", 0x0) : FEATURE("SEP", 0x0);
    FEATURE("MTRR", a[3] & BIT12_32);
    FEATURE("PGE", a[3] & BIT13_32);
    FEATURE("MCA", a[3] & BIT14_32);
    FEATURE("CMOV", a[3] & BIT15_32);
    FEATURE("PAT", a[3] & BIT16_32);
    FEATURE("PSE36", a[3] & BIT17_32);
    FEATURE("PSN", a[3] & BIT18_32);
    psn = (unsigned char)((a[3] & BIT18_32) >> 18);
    FEATURE("CLFSH", a[3] & BIT19_32);
    FEATURE("DS", a[3] & BIT21_32);
    FEATURE("ACPI", a[3] & BIT22_32);
    FEATURE("MMX", a[3] & BIT23_32);
    FEATURE("FXSR", a[3] & BIT24_32);
    FEATURE("SSE", a[3] & BIT25_32);
    FEATURE("SSE2", a[3] & BIT26_32);
    FEATURE("SS", a[3] & BIT27_32);
    (a[3] & BIT28_32) ? ((a[1] >> 16) & 0xff) > 1 ? FEATURE("HTT", 1) : FEATURE("HTT", 0x0) : FEATURE("HTT", 0x0);
    FEATURE("TM", a[3] & BIT29_32);
    FEATURE("SSE3", a[2] & BIT0_32);
    FEATURE("PCLMULQDQ", a[2] & BIT1_32);
    FEATURE("DTES64", a[2] & BIT2_32);
    FEATURE("MONITOR", a[2] & BIT3_32);
    FEATURE("DSCPL", a[2] & BIT4_32);
    FEATURE("VMX", a[2] & BIT5_32);
    FEATURE("SMX", a[2] & BIT6_32);
    FEATURE("EIST", a[2] & BIT7_32);
    FEATURE("TM2", a[2] & BIT8_32);
    FEATURE("SSSE3", a[2] & BIT9_32);
    FEATURE("CNXTID", a[2] & BIT10_32);
    FEATURE("SDBG", a[2] & BIT11_32);
    FEATURE("FMA", a[2] & BIT12_32);
    FEATURE("CMPXCHG16B", a[2] & BIT13_32);
    FEATURE("XTPRUPDCTRL", a[2] & BIT14_32);
    FEATURE("PDCM", a[2] & BIT15_32);
    FEATURE("PCID", a[2] & BIT17_32);
    FEATURE("DCA", a[2] & BIT18_32);
    FEATURE("SSE4.1", a[2] & BIT19_32);
    FEATURE("SSE4.2", a[2] & BIT20_32);
    FEATURE("X2APIC", a[2] & BIT21_32);
    FEATURE("MOVBE", a[2] & BIT22_32);
    FEATURE("POPCNT", a[2] & BIT23_32);
    FEATURE("TSCDDLN", a[2] & BIT24_32);
    FEATURE("AESNI", a[2] & BIT25_32);
    FEATURE("XSAVE", a[2] & BIT26_32);
    FEATURE("OSXSAVE", a[2] & BIT27_32);
    FEATURE("AVX", a[2] & BIT28_32);
    FEATURE("F16C", a[2] & BIT29_32);
    FEATURE("RDRAND", a[2] & BIT30_32);
}

void basic_level2(int a[])
{
#ifdef DEBUG
    printf("basic_level2\n");
#endif
    if (!(a[0] & BIT31_32) && !(a[1] & BIT31_32) && !(a[2] & BIT31_32) && !(a[3] & BIT31_32))
    {
        unsigned char *b = (unsigned char *)(&a);
        for (int i = 0; i < 16; i++)
        {
            MEMORYFEATURES(0xff & b[i]);
        }
    }
    else
    {
        printf("Memory Information Not Available");
    }
}
void basic_level3(int a[])
{
#ifdef DEBUG
    printf("basic_level3\n");
#endif
    if (psn)
    {
        unsigned char *b = (unsigned char *)(&a);
        for (int i = 8; i < 16; i++)
        {
            printf("%d\t", b[i]); /*PSN EDX|ECX*/
        }
        printf("\n");
    }
    else
    {
        printf("serial number not supported\n");
    }
}
void basic_level4(int a[])
{
#ifdef DEBUG
    printf("basic_level4\n");
#endif
    unsigned int i = 0;
    while (a[0] & 0xf)
    {
        printf("%d\tecx is\n", a[0]);
        printf("Cache %d\t\nType:\t", i);
        i++;
        if ((a[0] & 0xf) == 0x1)
        {
            printf("Data Cache");
        }
        else if ((a[0] & 0xf) == 0x2)
        {
            printf("Instruction Cache");
        }
        else if ((a[0] & 0xf) == 0x3)
        {
            printf("Unified Cache");
        }

        printf("\nCache Level: \t%d\n", (a[0] & (BIT7_32 | BIT6_32 | BIT5_32)) >> 5);
        FEATURE("Self Initializing cache", a[0] & BIT8_32);
        FEATURE("Fully Associative cache", a[0] & BIT9_32);
        printf("L = System Coherency Line Size\t%d\n", ((a[1] & 0b111111111111)));
        printf("P = Physical Line partitions\t%d\n", ((a[1] & 0b1111111111000000000000) >> 12));
        printf("W = Ways of associativity\t%d\n", ((a[1] & 0b11111111110000000000000000000000) >> 22));
        printf(" S = Number of Sets\t%d\n", a[2]);
        if ((a[3] & BIT0_32) == 0)
        {
            printf(" WBINVD/INVD from threads sharing this cache acts upon lower level caches for threads sharing this cache\n");
        }
        else if ((a[3] & BIT0_32) == 0x1)
        {
            printf(" WBINVD/INVD is not guaranteed to act upon lower level caches of non-originating threads sharing this cache.\n");
        }
        if ((a[3] & BIT1_32) == 0)
        {
            printf("Cache is not inclusive of lower cache levels\n");
        }
        else if ((a[3] & BIT1_32) == 0b10)
        {
            printf("Cache is inclusive of lower cache levels\n");
        }
        if ((a[3] & BIT2_32) == 0)
        {
            printf("Direct mapped cache\n");
        }
        else if ((a[3] & BIT2_32) == 0b100)
        {
            printf("A complex function is used to index the cache, potentially using all address bits\n");
        }

        cpuvals(0x04, i, a);
    }
}
void basic_level5(int a[])
{
#ifdef DEBUG
    printf("basic_level5\n");
#endif
    PRINT_HEADER();
    printf("MONITOR/MWAIT Leaf\n");
    PRINT_HEADER();
    printf("Smallest monitor-line size is %d bytes\n", (0xff & a[0]));
    printf("Largest monitor-line size is %d bytes\n", (0xff & a[1]));
    FEATURE("Enumeration of Monitor-Mwait extensions (beyond EAX and EBX registers)", a[2] & BIT0_32);
    FEATURE("Treating interrupts as break-event for MWAIT, even when interrupts disabled", a[2] & BIT1_32);
    printf("Number of C0* sub C-states supported using MWAIT:\t%d\n", a[3] & 0b1111);
    printf("Number of C1* sub C-states supported using MWAIT:\t%d\n", (a[3] >> 4) & 0b1111);
    printf("Number of C2* sub C-states supported using MWAIT:\t%d\n", (a[3] >> 8) & 0b1111);
    printf("Number of C3* sub C-states supported using MWAIT:\t%d\n", (a[3] >> 12) & 0b1111);
    printf("Number of C4* sub C-states supported using MWAIT:\t%d\n", (a[3] >> 16) & 0b1111);
    printf("Number of C5* sub C-states supported using MWAIT:\t%d\n", (a[3] >> 20) & 0b1111);
    printf("Number of C6* sub C-states supported using MWAIT:\t%d\n", (a[3] >> 24) & 0b1111);
    printf("Number of C7* sub C-states supported using MWAIT:\t%d\n", (a[3] >> 28) & 0b1111);
}
void basic_level6(int a[])
{
#ifdef DEBUG
    printf("basic_level6\n");
#endif
    PRINT_HEADER();
    printf("Thermal and Power Management Leaf\n");
    PRINT_HEADER();
    FEATURE("Digital temperature sensor", a[0] & BIT0_32);
    FEATURE("Intel Turbo Boost Technology/", a[0] & BIT1_32);
    FEATURE("ARAT. APIC-Timer-always-running feature", a[0] & BIT2_32);
    //FEATURE("RESERVED",a[0]&BIT3_32);
    FEATURE("PLN. Power limit notification controls", a[0] & BIT4_32);
    FEATURE("ECMD. Clock modulation duty cycle extension", a[0] & BIT5_32);
    FEATURE("PTM. Package thermal management", a[0] & BIT6_32);
    FEATURES("HWP. HWP base registers (IA32_PM_ENABLE[bit 0], IA32_HWP_CAPABILITIES, IA32_HWP_REQUEST, IA32_HWP_STATUS)", a[0] & BIT7_32);
    FEATURE("HWP_Notification. IA32_HWP_INTERRUPT MSR", a[0] & BIT8_32);
    FEATURE("HWP_Activity_Window. IA32_HWP_REQUEST[bits 41:32] ", a[0] & BIT9_32);
    FEATURE("HWP_Energy_Performance_Preference. IA32_HWP_REQUEST[bits 31:24] ", a[0] & BIT10_32);
    FEATURE("HWP_Package_Level_Request. IA32_HWP_REQUEST_PKG MSR", a[0] & BIT11_32);
    //FEATURE("RESERVED",a[0]&BIT12_32);
    FEATURES("HDC. HDC base registers IA32_PKG_HDC_CTL, IA32_PM_CTL1, IA32_THREAD_STALL MSRs", a[0] & BIT13_32);
    FEATURE("Intel Turbo Boost Max Technology 3.0", a[0] & BIT14_32);
    FEATURE("HWP Capabilities. Highest Performance change", a[0] & BIT15_32);
    FEATURE("HWP PECI override", a[0] & BIT16_32);
    FEATURE("Flexible HWP", a[0] & BIT17_32);
    FEATURE("Fast access mode for the IA32_HWP_REQUEST MSR", a[0] & BIT18_32);
    FEATURE("Ignoring Idle Logical Processor HWP request", a[0] & BIT19_32);

    FEATURE("IA32_MPERF and IA32_APERF", a[2] & BIT0_32);
    FEATURE("performance-energy bias and  the presence of a new architectural MSR called IA32_ENERGY_PERF_BIAS", a[2] & BIT3_32);
    printf("Number of Interrupt Thresholds in Digital Thermal Sensor:\t%d\n", (a[1]) & 0b1111);
}
void basic_level7(int a[])
{
#ifdef DEBUG
    printf("basic_level7\n");
#endif
    PRINT_HEADER();
    printf("Structured Extended Feature Flags Enumeration Leaf");
    PRINT_HEADER();
    unsigned int i = 0;
    unsigned int max = a[0];
    do
    {
        FEATURE("FSGSBASE. Supports RDFSBASE/RDGSBASE/WRFSBASE/WRGSBASE", a[1] & BIT0_32);
        FEATURE("IA32_TSC_ADJUST MSR", a[1] & BIT1_32);
        FEATURE("SGX. Supports Intel Software Guard Extensions (Intel® SGX Extensions)", a[1] & BIT2_32);
        FEATURE("BMI1", a[1] & BIT3_32);
        FEATURE("HLE", a[1] & BIT4_32);
        FEATURE("AVX2", a[1] & BIT5_32);
        FEATURE("FDP_EXCPTN_ONLY. x87 FPU Data Pointer updated only on x87 exceptions", a[1] & BIT6_32);
        FEATURE("SMEP. Supervisor-Mode Execution Prevention", a[1] & BIT7_32);
        FEATURE("BMI2", a[1] & BIT8_32);
        FEATURE("Enhanced REP MOVSB/STOSB", a[1] & BIT9_32);
        i++;
        cpuvals(0x7, i, a);
    } while (i < max);
}
void basic_level8(int a[])
{
#ifdef DEBUG
    printf("basic_level8\n");
#endif
}
void basic_level9(int a[])
{
#ifdef DEBUG
    printf("basic_level9\n");
#endif
    PRINT_HEADER();
    printf("Direct Cache Access Information Leaf");
    PRINT_HEADER();
    printf("IA32_PLATFORM_DCA_CAP MSR:\t");
    print_hex(a[0], 0);
}
void basic_levelA(int a[])
{
#ifdef DEBUG
    printf("basic_levelA\n");
#endif
    PRINT_HEADER();
    printf("Architectural Performance Monitoring Leaf");
    PRINT_HEADER();
    printf("Version ID:\t%d\n", a[0] & 0xff);
    printf("Number of general-purpose performance monitoring counter per logical processor:\t%d\n", (a[0] >> 8) & 0xff);
    printf("Bit width of general-purpose, performance monitoring counter:\t%d\n", (a[0] >> 16) & 0xff);
    printf("Length of EBX bit vector to enumerate architectural performance monitoring events:\t%d\n", (a[0] >> 24) & 0xff);
    FEATURE("Core cycle event", !(a[1] & BIT0_32));
    FEATURE("Instruction retired event", !(a[1] & BIT1_32));
    FEATURE("Reference cycles event", !(a[1] & BIT2_32));
    FEATURE("Last-level cache reference event", !(a[1] & BIT3_32));
    FEATURE("Last-level cache misses event", !(a[1] & BIT4_32));
    FEATURE("Branch instruction retired event", !(a[1] & BIT5_32));
    FEATURE("Branch mispredict retired event", !(a[1] & BIT6_32));
    if ((a[0] & 0xff) > 1)
    {
        printf("Number of fixed-function performance counters:\t%d\n", (0x1f & a[3]));
        printf("Bit width of fixed-function performance counters:\t%d\n", (0x1fe0 & a[3]));
    }
    FEATURE("AnyThread deprecation", a[3] & BIT15_32);
}
void basic_levelB(int a[])
{
#ifdef DEBUG
    printf("basic_levelB\n");
#endif
    PRINT_HEADER();
    printf("Extended Topology Enumeration Leaf");
    PRINT_HEADER();
}
void basic_levelC(int a[])
{
#ifdef DEBUG
    printf("basic_levelC\n");
#endif
}
void basic_levelD(int a[])
{
#ifdef DEBUG
    printf("basic_levelD\n");
#endif
}
void basic_levelE(int a[])
{
#ifdef DEBUG
    printf("basic_levelE\n");
#endif
}
void basic_levelF(int a[])
{
#ifdef DEBUG
    printf("basic_levelF\n");
#endif
}
void basic_level10(int a[])
{
#ifdef DEBUG
    printf("basic_level10\n");
#endif
}
void basic_level11(int a[])
{
#ifdef DEBUG
    printf("basic_level11\n");
#endif
}
void basic_level12(int a[])
{
#ifdef DEBUG
    printf("basic_level12\n");
#endif
}
void basic_level13(int a[])
{
#ifdef DEBUG
    printf("basic_level13\n");
#endif
}
void basic_level14(int a[])
{
#ifdef DEBUG
    printf("basic_level14\n");
#endif
}
void basic_level15(int a[])
{
#ifdef DEBUG
    printf("basic_level15\n");
#endif
}
void basic_level16(int a[])
{
#ifdef DEBUG
    printf("basic_level16\n");
#endif
}
void basic_level17(int a[])
{
#ifdef DEBUG
    printf("basic_level17\n");
#endif
}
void basic_level18(int a[])
{
#ifdef DEBUG
    printf("basic_level18\n");
#endif
}
void basic_level19(int a[])
{
#ifdef DEBUG
    printf("basic_level19\n");
#endif
}
void basic_level1A(int a[])
{
#ifdef DEBUG
    printf("basic_level1A\n");
#endif
}
void basic_level1B(int a[])
{
#ifdef DEBUG
    printf("basic_level1B\n");
#endif
}
void basic_level1C(int a[])
{
#ifdef DEBUG
    printf("basic_level1C\n");
#endif
}
void basic_level1D(int a[])
{
#ifdef DEBUG
    printf("basic_level1D\n");
#endif
}
void basic_level1E(int a[])
{
#ifdef DEBUG
    printf("basic_level1E\n");
#endif
}
void basic_level1F(int a[])
{
#ifdef DEBUG
    printf("basic_level1F\n");
#endif
}

void extended_level0(int a[])
{
#ifdef DEBUG
    printf("extended_level0\n");
#endif
    return;
}
void extended_level1(int a[])
{
#ifdef DEBUG
    printf("extended_level1\n");
#endif
    FEATURE("LAHF/SAHF in 64-bit mode", a[2] & BIT0_32);
    FEATURE("LZCNT", a[2] & BIT5_32);
    FEATURE("PREFETCHW", a[2] & BIT8_32);
    FEATURE("SYSCALL/SYSRET", a[3] & BIT11_32);
    FEATURE("Execute Disable Bit", a[3] & BIT20_32);
    FEATURES("1-GByte pages", a[3] & BIT26_32);
    FEATURE("Intel 64 Architecture", a[3] & BIT29_32);
}
void extended_level2(int a[])
{
#ifdef DEBUG
    printf("extended_level2\n");
#endif
    for (int i = 0; i < 4; i++)
    {
        printf("%c", (0xff & a[i]));
        a[i] >>= 8;
        printf("%c", (0xff & a[i]));
        a[i] >>= 8;
        printf("%c", (0xff & a[i]));
        a[i] >>= 8;
        printf("%c", (0xff & a[i]));
    }
}
void extended_level3(int a[])
{
#ifdef DEBUG
    printf("extended_level3\n");
#endif
    for (int i = 0; i < 4; i++)
    {
        printf("%c", (0xff & a[i]));
        a[i] >>= 8;
        printf("%c", (0xff & a[i]));
        a[i] >>= 8;
        printf("%c", (0xff & a[i]));
        a[i] >>= 8;
        printf("%c", (0xff & a[i]));
    }
}
void extended_level4(int a[])
{
#ifdef DEBUG
    printf("extended_level4\n");
#endif
    for (int i = 0; i < 4; i++)
    {
        printf("%c", (0xff & a[i]));
        a[i] >>= 8;
        printf("%c", (0xff & a[i]));
        a[i] >>= 8;
        printf("%c", (0xff & a[i]));
        a[i] >>= 8;
        printf("%c", (0xff & a[i]));
    }
    printf("\n");
}
void extended_level5(int a[])
{
#ifdef DEBUG
    printf("extended_level5\n");
#endif
}
void extended_level6(int a[])
{
#ifdef DEBUG
    printf("extended_level6\n");
#endif
    printf("Cache Line size in bytes:\t%d\n", (a[2] & 0xff));
    //printf("L2 Associativity field:\t%d\n", ((a[2] >> 12) & 0xf));
    switch (a[2] >> 12 & 0xf)
    {
    case 0x00:
        printf("Disabled\n");
        break;
    case 0x01:
        printf("1 way (direct mapped)\n");
        break;
    case 0x02:
        printf("2 ways\n");
        break;
    case 0x03:
        printf("Reserved\n");
        break;
    case 0x04:
        printf("4 ways\n");
        break;
    case 0x05:
        printf("Reserved\n");
        break;
    case 0x06:
        printf("8 ways\n");
        break;
    case 0x07:
        printf("Deterministic refer EAX=0x4\n");
        break;
    case 0x08:
        printf("16 ways\n");
        break;
    case 0x09:
        printf("Reserved\n");
        break;
    case 0x0A:
        printf("32 ways\n");
        break;
    case 0x0B:
        printf("48 ways\n");
        break;
    case 0x0C:
        printf("64 ways\n");
        break;
    case 0x0D:
        printf("96 ways\n");
        break;
    case 0x0E:
        printf("128 ways\n");
        break;
    case 0x0F:
        printf("Fully associative\n");
        break;

    default:
        break;
    }
    printf("Cache size in 1K units:\t%d\n", ((a[2] >> 16) & 0xffff));
}
void extended_level7(int a[])
{
#ifdef DEBUG
    printf("extended_level7\n");
#endif
FEATURE("Invariant TSC", a[3]&BIT8_32);
}
void extended_level8(int a[])
{
#ifdef DEBUG
    printf("extended_level8\n");
#endif
printf("#Maximum Physical Address:\t%d\n", a[0]&0xff);
printf("#Linear Address:\t%d\n", (a[0]>>8)&0xff);
}
void extended_level9(int a[])
{
#ifdef DEBUG
    printf("extended_level9\n");
#endif
}
void extended_levelA(int a[])
{
#ifdef DEBUG
    printf("extended_levelA\n");
#endif
}
void extended_levelB(int a[])
{
#ifdef DEBUG
    printf("extended_levelB\n");
#endif
}
void extended_levelC(int a[])
{
#ifdef DEBUG
    printf("extended_levelC\n");
#endif
}
void extended_levelD(int a[])
{
#ifdef DEBUG
    printf("extended_levelD\n");
#endif
}
void extended_levelE(int a[])
{
#ifdef DEBUG
    printf("extended_levelE\n");
#endif
}
void extended_levelF(int a[])
{
#ifdef DEBUG
    printf("extended_levelF\n");
#endif
}
void extended_level10(int a[])
{
#ifdef DEBUG
    printf("extended_level10\n");
#endif
}
void extended_level11(int a[])
{
#ifdef DEBUG
    printf("extended_level11\n");
#endif
}
void extended_level12(int a[])
{
#ifdef DEBUG
    printf("extended_level12\n");
#endif
}
void extended_level13(int a[])
{
#ifdef DEBUG
    printf("extended_level13\n");
#endif
}
void extended_level14(int a[])
{
#ifdef DEBUG
    printf("extended_level14\n");
#endif
}
void extended_level15(int a[])
{
#ifdef DEBUG
    printf("extended_level15\n");
#endif
}
void extended_level16(int a[])
{
#ifdef DEBUG
    printf("extended_level16\n");
#endif
}
void extended_level17(int a[])
{
#ifdef DEBUG
    printf("extended_level17\n");
#endif
}
void extended_level18(int a[])
{
#ifdef DEBUG
    printf("extended_level18\n");
#endif
}
void extended_level19(int a[])
{
#ifdef DEBUG
    printf("extended_level19\n");
#endif
}
void extended_level1A(int a[])
{
#ifdef DEBUG
    printf("extended_level1A\n");
#endif
}
void extended_level1B(int a[])
{
#ifdef DEBUG
    printf("extended_level1B\n");
#endif
}
void extended_level1C(int a[])
{
#ifdef DEBUG
    printf("extended_level1C\n");
#endif
}
void extended_level1D(int a[])
{
#ifdef DEBUG
    printf("extended_level1D\n");
#endif
}
void extended_level1E(int a[])
{
#ifdef DEBUG
    printf("extended_level1E\n");
#endif
}
void extended_level1F(int a[])
{
#ifdef DEBUG
    printf("extended_level1F\n");
#endif
}

void (*basic[])(int a[]) = {&basic_level0, &basic_level1, &basic_level2, &basic_level3, &basic_level4, &basic_level5, &basic_level6, &basic_level7, &basic_level8, &basic_level9, &basic_levelA, &basic_levelB, &basic_levelC, &basic_levelD, &basic_levelE, &basic_levelF, &basic_level10, &basic_level11, &basic_level12, &basic_level13, &basic_level14, &basic_level15, &basic_level16, &basic_level17, &basic_level18, &basic_level19, &basic_level1A, &basic_level1B, &basic_level1C, &basic_level1D, &basic_level1E, &basic_level1F};

void (*extended[])(int a[]) = {&extended_level0, &extended_level1, &extended_level2, &extended_level3, &extended_level4, &extended_level5, &extended_level6, &extended_level7, &extended_level8, &extended_level9, &extended_levelA, &extended_levelB, &extended_levelC, &extended_levelD, &extended_levelE, &extended_levelF, &extended_level10, &extended_level11, &extended_level12, &extended_level13, &extended_level14, &extended_level15, &extended_level16, &extended_level17, &extended_level18, &extended_level19, &extended_level1A, &extended_level1B, &extended_level1C, &extended_level1D, &extended_level1E, &extended_level1F};

#endif