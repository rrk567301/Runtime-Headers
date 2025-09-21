@class NSString;

@interface VMUTaskMemoryCache : NSObject {
    unsigned long long _taskType;
    unsigned int _taskPort;
    BOOL _taskIs64Bit;
    BOOL _taskIsTranslated;
    BOOL _taskIsSelf;
    struct _CSArchitecture { int cpu_type; int cpu_subtype; } _taskArchitecture;
    NSString *_corePath;
    int _pid;
    struct __CFArray { } *_cfOriginalSymbolOwners;
    struct _CSTypeRef { unsigned long long x0; unsigned long long x1; } *_originalSymbolOwners;
    struct _CSTypeRef { unsigned long long _opaque_1; unsigned long long _opaque_2; } _minimalSymbolicator;
    unsigned int _dyldPlatform;
    BOOL _dyldPlatformIsValid;
    BOOL _haveAttemptedDyldPlatformFetch;
    unsigned long long _exclaveType;
}

@property (readonly, nonatomic) struct mapped_memory_t { } *memoryRegions;
@property (copy, nonatomic) id /* block */ regionInfoBlock;

+ (BOOL)taskIs64Bit:(unsigned int)a0;
+ (id)taskMemoryCacheForTask:(unsigned int)a0;

- (id)initWithTask:(unsigned int)a0;
- (int)peekAtAddress:(unsigned long long)a0 size:(unsigned long long)a1 returnsBuf:(void **)a2;
- (int)_kernelCorePageRangeQueryWithAddress:(unsigned long long)a0 size:(unsigned long long)a1 dispositions:(unsigned long long)a2 dispositionsCount:(unsigned long long *)a3;
- (int)machVMRegionRecurseSubmapInfo64onAddress:(unsigned long long *)a0 size:(unsigned long long *)a1 nestingDepth:(unsigned int *)a2 info:(struct vm_region_submap_info_64_with_extra_flag { int x0; int x1; unsigned int x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned short x10; unsigned char x11; unsigned char x12; int x13; int x14; unsigned int x15; unsigned short x16; unsigned short x17; unsigned int x18; unsigned long long x19; } *)a3;
- (void)dealloc;
- (void)printMemoryCache;
- (int)readPointerAt:(unsigned long long)a0 value:(unsigned long long *)a1;
- (int)unmapAddress:(unsigned long long)a0 size:(unsigned long long)a1 returnedAddress:(unsigned long long *)a2 returnedSize:(unsigned long long *)a3;
- (int)getPlatform:(unsigned int *)a0;
- (int)machVMPurgableControlWithAddress:(unsigned long long)a0 control:(int)a1 state:(int *)a2;
- (int)procRegionFileNameForAddress:(unsigned long long)a0 buffer:(void *)a1 bufferSize:(unsigned int)a2;
- (int)taskThreadsWithList:(unsigned int **)a0 listCnt:(unsigned int *)a1;
- (void)flushMemoryCache;
- (int)getCoreFileCPUType:(int *)a0;
- (int)startPeeking;
- (unsigned long long)pageSize;
- (void)enumerateMemoryCache:(id /* block */)a0;
- (int)mapAddress:(unsigned long long)a0 size:(unsigned long long)a1 returnedAddress:(unsigned long long *)a2 returnedSize:(unsigned long long *)a3;
- (int)mapAddress:(unsigned long long)a0 size:(unsigned long long)a1;
- (BOOL)isKernel;
- (const char *)peekStringAtAddress:(unsigned long long)a0;
- (int)machVMPageRangeQueryWithAddress:(unsigned long long)a0 size:(unsigned long long)a1 dispositions:(unsigned long long)a2 dispositionsCount:(unsigned long long *)a3;
- (int)stopPeeking;
- (BOOL)isDriverKit;
- (unsigned int)taskPort;
- (BOOL)isSimulator;
- (BOOL)copyRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0 to:(void *)a1;
- (id)initWithCorePath:(id)a0 originalBinaryPaths:(id)a1 error:(id *)a2;
- (int)threadGetState:(unsigned int)a0 withFlavor:(int)a1 oldState:(unsigned int *)a2 oldStateCnt:(unsigned int *)a3;
- (BOOL)taskIsTranslated;
- (unsigned long long)tryPeekAtAddress:(unsigned long long)a0 outPtr:(void **)a1;
- (const struct mapped_region_node_t { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } *)findMappedAddress:(unsigned long long)a0 size:(unsigned long long)a1;
- (void).cxx_destruct;
- (int)machVMRegionRecurseSubmapShortInfo64onAddress:(unsigned long long *)a0 size:(unsigned long long *)a1 nestingDepth:(unsigned int *)a2 info:(struct vm_region_submap_short_info_64 { int x0; int x1; unsigned int x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned short x6; unsigned char x7; unsigned char x8; int x9; int x10; unsigned int x11; unsigned short x12; unsigned short x13; } *)a3;
- (void)_createOriginalSymbolOwnersWithPaths:(id)a0;

@end
