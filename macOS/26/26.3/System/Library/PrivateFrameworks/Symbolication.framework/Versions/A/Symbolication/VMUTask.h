@class NSString, VMUProcessDescription, VMUTaskMemoryCache;

@interface VMUTask : NSObject {
    unsigned int _liveTask;
    BOOL _taskIsSelf;
    struct _VMURange { unsigned long long location; unsigned long long length; } _taskDyldSharedCacheRange;
    VMUTaskMemoryCache *_taskMemory;
    VMUProcessDescription *_processDescription;
    BOOL _processDescriptionInitialized;
    unsigned long long _exclaveType;
    unsigned long long _addrableBitsPointerStrippingMask;
    BOOL _targetUsesExtraBits;
    BOOL _targetUsesExtraBitsInitialized;
}

@property (readonly, nonatomic) unsigned long long taskType;
@property (readonly, copy) NSString *coreFilePath;

- (id)processDescription;
- (BOOL)isTranslated;
- (id)initWithTask:(unsigned int)a0;
- (unsigned int)taskPort;
- (id)initWithCorePath:(id)a0 originalBinaryPaths:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (int)pid;
- (BOOL)isKernel;
- (id)memoryCache;
- (BOOL)isExclave;
- (BOOL)addressIsInSharedCache:(unsigned long long)a0;
- (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })createSymbolicatorWithFlags:(unsigned int)a0 andNotification:(id /* block */)a1;
- (unsigned long long)exclaveType;
- (BOOL)hasStartedWithErrorString:(id *)a0;
- (id)ioSurfaceDescriptions;
- (BOOL)isCore;
- (BOOL)isExclaveCore;
- (BOOL)isExclaveKit;
- (BOOL)rangeIsInSharedCache:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })taskDyldSharedCacheRange;
- (BOOL)taskIsSelf;

@end
