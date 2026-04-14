@class NSString, VMUProcessDescription, VMUTaskMemoryCache;

@interface VMUTask : NSObject {
    unsigned int _liveTask;
    NSString *_coreFilePath;
    BOOL _taskIsSelf;
    struct _VMURange { unsigned long long location; unsigned long long length; } _taskDyldSharedCacheRange;
    VMUTaskMemoryCache *_taskMemory;
    VMUProcessDescription *_processDescription;
    BOOL _processDescriptionInitialized;
    BOOL _isExclave;
    BOOL _isExclaveCore;
    BOOL _isExclaveKit;
}

@property (readonly, nonatomic) unsigned long long taskType;

- (void)dealloc;
- (void).cxx_destruct;
- (int)pid;
- (BOOL)isTranslated;
- (id)initWithTask:(unsigned int)a0;
- (id)memoryCache;
- (BOOL)isExclave;
- (id)processDescription;
- (BOOL)addressIsInSharedCache:(unsigned long long)a0;
- (id)coreFilePath;
- (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })createSymbolicatorWithFlags:(unsigned int)a0 andNotification:(id /* block */)a1;
- (BOOL)hasStartedWithErrorString:(const char **)a0;
- (id)initWithCorePath:(id)a0;
- (id)ioSurfaceDescriptions;
- (BOOL)isCore;
- (BOOL)isExclaveCore;
- (BOOL)isExclaveKit;
- (BOOL)rangeIsInSharedCache:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })taskDyldSharedCacheRange;
- (BOOL)taskIsSelf;
- (unsigned int)taskPort;

@end
