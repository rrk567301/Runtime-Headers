@class NSString, CSMemoryMappingCache;

@interface VMUTaskMemoryCache : NSObject {
    unsigned long long _taskType;
    unsigned int _taskPort;
    BOOL _taskIs64Bit;
    BOOL _taskIsTranslated;
    BOOL _taskIsSelf;
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

@property (readonly, nonatomic) CSMemoryMappingCache *memoryRegions;
@property (copy, nonatomic) id /* block */ regionInfoBlock;
@property (readonly, nonatomic) unsigned long long pageSize;

+ (id)taskMemoryCacheForTask:(unsigned int)a0;
+ (BOOL)taskIs64Bit:(unsigned int)a0;

- (id)initWithTask:(unsigned int)a0;
- (BOOL)readPointerAt:(unsigned long long)a0 value:(unsigned long long *)a1;
- (id)mappingForAddress:(unsigned long long)a0 size:(unsigned long long)a1 error:(id *)a2;
- (BOOL)getCoreFileCPUType:(int *)a0;
- (BOOL)machVMPurgableControlWithAddress:(unsigned long long)a0 control:(int)a1 state:(int *)a2;
- (void)printMemoryCache;
- (id)nsStringForUTF8StringAtAddress:(unsigned long long)a0;
- (BOOL)copyRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0 to:(void *)a1;
- (BOOL)taskThreadsWithList:(unsigned int **)a0 listCnt:(unsigned int *)a1 error:(id *)a2;
- (void)withBytesFromAddress:(unsigned long long)a0 size:(unsigned long long)a1 block:(id /* block */)a2;
- (void)enumerateMemoryCache:(id /* block */)a0;
- (BOOL)machVMPageRangeQueryWithAddress:(unsigned long long)a0 size:(unsigned long long)a1 dispositions:(unsigned long long)a2 dispositionsCount:(unsigned long long *)a3 error:(id *)a4;
- (void).cxx_destruct;
- (id)initWithCorePath:(id)a0 originalBinaryPaths:(id)a1 error:(id *)a2;
- (BOOL)machVMRegionRecurseSubmapInfo64onAddress:(unsigned long long *)a0 size:(unsigned long long *)a1 nestingDepth:(unsigned int *)a2 info:(struct vm_region_submap_info_64 { int x0; int x1; unsigned int x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned short x10; unsigned char x11; unsigned char x12; int x13; int x14; unsigned int x15; unsigned short x16; unsigned short x17; unsigned int x18; unsigned long long x19; } *)a3 error:(id *)a4;
- (id)mappingSliceForAddress:(unsigned long long)a0 size:(unsigned long long)a1 error:(id *)a2;
- (BOOL)taskIsTranslated;
- (void)_createOriginalSymbolOwnersWithPaths:(id)a0;
- (BOOL)getPlatform:(unsigned int *)a0;
- (id)tryMappingAddress:(unsigned long long)a0;
- (id)existingMappingForAddress:(unsigned long long)a0 size:(unsigned long long)a1;
- (BOOL)copyBytesFromAddress:(unsigned long long)a0 size:(unsigned long long)a1 to:(void *)a2 error:(id *)a3;
- (BOOL)startPeekingWithError:(id *)a0;
- (BOOL)stopPeekingWithError:(id *)a0;
- (void)flushMemoryCache;
- (BOOL)isKernel;
- (BOOL)threadGetState:(unsigned int)a0 withFlavor:(int)a1 oldState:(unsigned int *)a2 oldStateCnt:(unsigned int *)a3 error:(id *)a4;
- (id)mappingSliceForStringAtAddress:(unsigned long long)a0;
- (int)_kernelCorePageRangeQueryWithAddress:(unsigned long long)a0 size:(unsigned long long)a1 dispositions:(unsigned long long)a2 dispositionsCount:(unsigned long long *)a3;
- (id)procRegionFileNameForAddress:(unsigned long long)a0;
- (BOOL)machVMRegionRecurseSubmapShortInfo64onAddress:(unsigned long long *)a0 size:(unsigned long long *)a1 nestingDepth:(unsigned int *)a2 info:(struct vm_region_submap_short_info_64 { int x0; int x1; unsigned int x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned short x6; unsigned char x7; unsigned char x8; int x9; int x10; unsigned int x11; unsigned short x12; unsigned short x13; } *)a3;
- (unsigned int)taskPort;
- (BOOL)isSimulator;
- (void)dealloc;
- (unsigned long long)tryPeekAtAddress:(unsigned long long)a0 outPtr:(void **)a1;
- (BOOL)isDriverKit;

@end
