@class NSString, NSMutableDictionary, MTLSimCommandStoragePool, MTLSimBufferStoragePool, NSObject;
@protocol OS_dispatch_queue, MTLDevice;

@interface MTLSimCommandQueue : _MTLCommandQueue <MTLCommandQueueSPI> {
    MTLSimCommandStoragePool *commandPool;
    MTLSimBufferStoragePool *bufferPool;
    unsigned int _commandQueueRef;
}

@property (readonly) unsigned long long bufferStorageByteCount;
@property int backgroundTrackingPID;
@property (readonly) unsigned long long maxCommandBufferCount;
@property (readonly) unsigned long long qosLevel;
@property (readonly) NSObject<OS_dispatch_queue> *commitQueue;
@property (readonly) BOOL commitSynchronously;
@property (readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly) BOOL disableCrossQueueHazardTracking;
@property BOOL skipRender;
@property BOOL executionEnabled;
@property (readonly) BOOL isOpenGLQueue;
@property (getter=isProfilingEnabled) BOOL profilingEnabled;
@property (nonatomic, getter=isStatEnabled) BOOL StatEnabled;
@property (nonatomic, getter=getStatOptions) unsigned long long StatOptions;
@property (nonatomic, getter=getStatLocations) unsigned long long StatLocations;
@property (nonatomic, getter=numRequestedCounters) unsigned long long numRequestedCounters;
@property (nonatomic, getter=numInternalSampleCounters) unsigned long long numInternalSampleCounters;
@property (retain, getter=counterInfo) NSMutableDictionary *counterInfo;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)setGPUPriority:(unsigned long long)a0;
- (id)availableCounters;
- (id)commandBuffer;
- (id)commandBufferWithDescriptor:(id)a0;
- (id)commandBufferWithUnretainedReferences;
- (unsigned long long)getBackgroundGPUPriority;
- (unsigned long long)getGPUPriority;
- (id)getRequestedCounters;
- (int)requestCounters:(id)a0;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (void)setCompletionQueue:(id)a0;
- (BOOL)setGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (id)initWithDevice:(id)a0 maxCommandBufferCount:(unsigned long long)a1;
- (void)submitCommandBuffers:(const id *)a0 count:(unsigned long long)a1;
- (struct BufferStorageEntry { id x0; unsigned long long x1; struct BufferStorageEntry *x2; } *)getBufferStorage;
- (struct StorageEntry { unsigned long long x0; void *x1; id x2; struct StorageEntry *x3; } *)getCommandBufferStorage;
- (id)initWithDevice:(id)a0 commandQueueRef:(unsigned int)a1 descriptor:(id)a2;
- (void)returnBufferStorage:(struct BufferStorageEntry { id x0; unsigned long long x1; struct BufferStorageEntry *x2; } *)a0;
- (void)returnCommandBufferStorage:(struct StorageEntry { unsigned long long x0; void *x1; id x2; struct StorageEntry *x3; } *)a0;

@end
