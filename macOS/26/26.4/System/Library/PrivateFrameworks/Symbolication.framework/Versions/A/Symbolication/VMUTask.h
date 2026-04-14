@class NSString, VMUProcessDescription, VMUTaskMemoryCache;

@interface VMUTask : NSObject {
    unsigned int _liveTask;
    BOOL _taskIsSelf;
    BOOL _isGeneratedCorpse;
    BOOL _isCorpse;
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
@property (readonly, nonatomic) BOOL isGeneratedCorpse;
@property (readonly, nonatomic) BOOL isCorpse;
@property (readonly, nonatomic) BOOL isDebuggable;
@property (readonly, nonatomic) BOOL isRestricted;

- (id)memoryCache;
- (id)initWithTask:(unsigned int)a0;
- (id)processDescription;
- (void).cxx_destruct;
- (id)initWithCorePath:(id)a0 originalBinaryPaths:(id)a1 error:(id *)a2;
- (BOOL)isTranslated;
- (BOOL)isKernel;
- (unsigned int)taskPort;
- (void)dealloc;
- (int)pid;
- (BOOL)isExclave;
- (id)initWithTask:(unsigned int)a0 isGeneratedCorpse:(BOOL)a1;
- (BOOL)addressIsInSharedCache:(unsigned long long)a0;
- (id)createAnalysisTaskWithOptions:(unsigned int)a0 timeLimitInSeconds:(unsigned long long)a1 outTargetIsAncestor:(BOOL *)a2 forkCorpseRetryTime:(unsigned long long)a3 error:(id *)a4;
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
