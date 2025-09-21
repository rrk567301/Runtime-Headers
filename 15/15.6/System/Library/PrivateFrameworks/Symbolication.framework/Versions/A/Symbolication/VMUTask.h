@class NSString, VMUProcessDescription, VMUTaskMemoryCache;

@interface VMUTask : NSObject {
    unsigned int _liveTask;
    char _taskIsSelf;
    struct _VMURange { unsigned long long location; unsigned long long length; } _taskDyldSharedCacheRange;
    VMUTaskMemoryCache *_taskMemory;
    VMUProcessDescription *_processDescription;
    char _processDescriptionInitialized;
    unsigned long long _exclaveType;
    unsigned long long _addrableBitsPointerStrippingMask;
}

@property (readonly, nonatomic) unsigned long long taskType;
@property (readonly, copy) NSString *coreFilePath;

- (void)dealloc;
- (void).cxx_destruct;
- (int)pid;
- (char)isTranslated;
- (id)initWithTask:(unsigned int)a0;
- (id)memoryCache;
- (id)processDescription;
- (id)initWithCorePath:(id)a0 originalBinaryPaths:(id)a1 error:(id *)a2;
- (char)isExclave;
- (char)isKernel;
- (char)addressIsInSharedCache:(unsigned long long)a0;
- (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })createSymbolicatorWithFlags:(unsigned int)a0 andNotification:(id /* block */)a1;
- (unsigned long long)exclaveType;
- (char)hasStartedWithErrorString:(const char **)a0;
- (id)ioSurfaceDescriptions;
- (char)isCore;
- (char)isExclaveCore;
- (char)isExclaveKit;
- (char)rangeIsInSharedCache:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })taskDyldSharedCacheRange;
- (char)taskIsSelf;
- (unsigned int)taskPort;

@end
