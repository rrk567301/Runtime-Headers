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

- (void)setCompletionQueue:(id)a0;
- (void)finish;
- (void)removeResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (id)commandBufferWithDescriptor:(id)a0;
- (id)subdivideCounterList:(id)a0;
- (void)removeResidencySet:(id)a0;
- (void)addInternalResidencySet:(id)a0;
- (id)availableCounters;
- (void)removeInternalResidencySets:(id *)a0 count:(unsigned long long)a1;
- (int)requestCounters:(id)a0;
- (id)commandBufferWithUnretainedReferences;
- (id)commandBuffer;
- (void)addResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (unsigned long long)getGPUPriority;
- (void)dispatchAvailableCompletionNotifications;
- (unsigned long long)getBackgroundGPUPriority;
- (void)addResidencySet:(id)a0;
- (void)dealloc;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (void)setSubmissionQueue:(id)a0;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0;
- (void)insertDebugCaptureBoundary;
- (void)removeInternalResidencySet:(id)a0;
- (BOOL)setGPUPriority:(unsigned long long)a0;
- (BOOL)setGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (void)addPerfSampleHandler:(id /* block */)a0;
- (int)requestCounters:(id)a0 withIndex:(unsigned long long)a1;
- (void)addInternalResidencySets:(id *)a0 count:(unsigned long long)a1;
- (id)getRequestedCounters;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (id)internalResidencySetsArray;
- (id)residencySetsArray;
- (struct os_unfair_lock_s { unsigned int x0; } *)residencySetsLock;
- (id /* block */)snapshotPerfSampleHandlerAndStatEnabled:(BOOL *)a0 forCommandBuffer:(id)a1;

@end
