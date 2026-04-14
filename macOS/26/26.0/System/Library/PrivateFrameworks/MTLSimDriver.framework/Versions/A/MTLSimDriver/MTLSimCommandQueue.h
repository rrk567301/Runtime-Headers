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
@property (readonly) BOOL commitsWithQoS;
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

- (void)setCompletionQueue:(id)a0;
- (void)dealloc;
- (void)removeResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (void)removeInternalResidencySet:(id)a0;
- (id)commandBufferWithUnretainedReferences;
- (id)availableCounters;
- (unsigned long long)getGPUPriority;
- (void)removeResidencySet:(id)a0;
- (id)initWithDevice:(id)a0 maxCommandBufferCount:(unsigned long long)a1;
- (BOOL)setGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (void)addInternalResidencySets:(id *)a0 count:(unsigned long long)a1;
- (void)removeInternalResidencySets:(id *)a0 count:(unsigned long long)a1;
- (void)addResidencySet:(id)a0;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0;
- (void)addResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)setGPUPriority:(unsigned long long)a0;
- (unsigned long long)getBackgroundGPUPriority;
- (id)commandBufferWithDescriptor:(id)a0;
- (id)commandBuffer;
- (int)requestCounters:(id)a0;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (void)addInternalResidencySet:(id)a0;
- (void)submitCommandBuffers:(const id *)a0 count:(unsigned long long)a1;
- (id)getRequestedCounters;
- (struct BufferStorageEntry { id x0; unsigned long long x1; struct BufferStorageEntry *x2; } *)getBufferStorage;
- (struct StorageEntry { unsigned long long x0; void *x1; id x2; struct StorageEntry *x3; } *)getCommandBufferStorage;
- (id)initWithDevice:(id)a0 commandQueueRef:(unsigned int)a1 descriptor:(id)a2;
- (void)returnBufferStorage:(struct BufferStorageEntry { id x0; unsigned long long x1; struct BufferStorageEntry *x2; } *)a0;
- (void)returnCommandBufferStorage:(struct StorageEntry { unsigned long long x0; void *x1; id x2; struct StorageEntry *x3; } *)a0;

@end
