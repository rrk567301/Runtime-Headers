@class NSCountedSet, NSString, NSMutableDictionary, MTLToolsPerfCounterMailbox, NSObject;
@protocol OS_dispatch_queue, MTLDevice;

@interface MTLToolsCommandQueue : MTLToolsObject <MTLCommandQueueSPI> {
    MTLToolsPerfCounterMailbox *_perfSampleMailbox;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _perfHandlerLock;
    id /* block */ _perfSampleHandlerBlock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _residencySetsLock;
    NSCountedSet *_residencySets;
    NSCountedSet *_internalResidencySets;
}

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

- (int)requestCounters:(id)a0 withIndex:(unsigned long long)a1;
- (id)subdivideCounterList:(id)a0;
- (void)setCompletionQueue:(id)a0;
- (void)dealloc;
- (void)removeResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (void)removeInternalResidencySet:(id)a0;
- (id)commandBufferWithUnretainedReferences;
- (void)finish;
- (id)availableCounters;
- (void)insertDebugCaptureBoundary;
- (unsigned long long)getGPUPriority;
- (void)removeResidencySet:(id)a0;
- (void)dispatchAvailableCompletionNotifications;
- (BOOL)setGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (void)addInternalResidencySets:(id *)a0 count:(unsigned long long)a1;
- (void)addPerfSampleHandler:(id /* block */)a0;
- (void)removeInternalResidencySets:(id *)a0 count:(unsigned long long)a1;
- (void)setSubmissionQueue:(id)a0;
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
- (id)getRequestedCounters;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (id)internalResidencySetsArray;
- (id)residencySetsArray;
- (struct os_unfair_lock_s { unsigned int x0; } *)residencySetsLock;
- (id /* block */)snapshotPerfSampleHandlerAndStatEnabled:(BOOL *)a0 forCommandBuffer:(id)a1;

@end
