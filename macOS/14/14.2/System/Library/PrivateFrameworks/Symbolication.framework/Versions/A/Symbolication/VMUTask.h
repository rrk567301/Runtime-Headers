@class NSString, VMUProcessDescription, VMUTaskMemoryCache;

@interface VMUTask : NSObject {
    unsigned int _liveTask;
    NSString *_coreFilePath;
    BOOL _taskIsSelf;
    VMUTaskMemoryCache *_taskMemory;
    VMUProcessDescription *_processDescription;
    BOOL _processDescriptionInitialized;
}

@property (readonly, nonatomic) unsigned long long taskType;

- (void)dealloc;
- (void).cxx_destruct;
- (int)pid;
- (BOOL)isTranslated;
- (id)initWithTask:(unsigned int)a0;
- (id)memoryCache;
- (id)processDescription;
- (id)coreFilePath;
- (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })createSymbolicatorWithFlags:(unsigned int)a0 andNotification:(id /* block */)a1;
- (BOOL)hasStartedWithErrorString:(const char **)a0;
- (id)initWithCorePath:(id)a0;
- (id)ioSurfaceDescriptions;
- (BOOL)isCore;
- (BOOL)taskIsSelf;
- (unsigned int)taskPort;

@end
