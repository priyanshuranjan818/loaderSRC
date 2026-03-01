#include <iostream>
#include <fstream>
#include <thread>
#include <vector>
#include <cstring>
#include <unistd.h>
#include <dlfcn.h>
#include <libgen.h>
#include <unwind.h>
#include <pthread.h>
#include <sstream>
#include <locale>
#include <fcntl.h>
#include <sys/mman.h>
#include <stdio.h>
#include <stdlib.h>
#include "patch/Logger.h"
#include "patch/obfuscate.h"
#include "patch/Utils.h"
#include "patch/MemoryPatch.h"
#include "Helper/Dobby/dobby.h"
#include "patch/Macros.h"
#include "patch/_HOOK.h"
#define targetLibName OBFUSCATE("libUE4.so")
#define targetLibName OBFUSCATE("libanogs.so")
#define targetLibName OBFUSCATE("libanort.so")
#define targetLibName OBFUSCATE("libhdmpve.so")
#define targetLibName ("libTBlueData.so")
#define targetLibName ("libRoosterNN.so")
#define targetLibName ("libhdmpve.so")
#define targetLibName ("libCrashKit.so")
#define targetLibName ("libITOP.so")
#define targetLibName ("libAntsVoice.so")
#define _BYTE  uint8_t
#define _WORD  uint16_t
#define _DWORD uint32_t
#define _QWORD uint64_t
#define j_j__free
#define __OFSUB__
#define AnoSDKIoctlOld_0
#define HIWORD
#define JUMPOUT
#define byte_4
#define _ReadStatusReg
#define BYTE5
#define BYTE4
#define HIBYTE
#define BYTE6
#define BYTE1
#define BYTE3
#define BYTE2
#define ARM64_SYSREG
#define _WriteStatusReg
#define pkgName "com.pubg.imobile"
#pragma pack(1)
struct patch_t
{
    _BYTE nPatchType;
    DWORD dwAddress;
};
 
DWORD roosterBase = 0;
DWORD libUE4Base = 0;
DWORD libanogsBase = 0;
DWORD chut = 0;
DWORD libanortBase = 0;
DWORD libanogsAlloc = 0;
DWORD libUE4Alloc = 0;



void * hack_thread(void *) {
    LOGI(OBFUSCATE("PRIMOS LIBRARY READY...."));
    do {
        sleep(1);
    } while (!isLibraryLoaded(targetLibName));
    #if defined(__aarch64__)
//AddBypass
PATCH_LIB("libanogs.so", "0x4AE164", "C0 03 5F D6");
PATCH_LIB("libanogs.so", "0x4AE1BC", "C0 03 5F D6");
PATCH_LIB("libanogs.so", "0x4AE1C1", "C0 03 5F D6");
PATCH_LIB("libanogs.so", "0x4AE1C3", "C0 03 5F D6");
PATCH_LIB("libanogs.so", "0x4AE1C4", "C0 03 5F D6");
PATCH_LIB("libanogs.so", "0x4AE1C9", "C0 03 5F D6");
PATCH_LIB("libanogs.so", "0x4AE1CC", "C0 03 5F D6");
PATCH_LIB("libanogs.so", "0x4AE1D4", "C0 03 5F D6");
PATCH_LIB("libanogs.so", "0x4AE1DC", "C0 03 5F D6");
PATCH_LIB("libanogs.so", "0x4AE1E4", "C0 03 5F D6");
PATCH_LIB("libanogs.so", "0x4AE1EC", "C0 03 5F D6");
PATCH_LIB("libanogs.so", "0x4AE1F4", "C0 03 5F D6");

    #endif
    return NULL;
}

__attribute__((constructor)) void mainload() {
    pthread_t ptid;
    pthread_create(&ptid, NULL, hack_thread, NULL);
 
    }





