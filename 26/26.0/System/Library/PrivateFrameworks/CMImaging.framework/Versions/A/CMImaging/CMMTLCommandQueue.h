@class CMMTLDevice, NSString, NSMutableDictionary, NSObject, InterceptConfig;
@protocol OS_dispatch_queue, MTLDevice, MTLCommandQueue;

@interface CMMTLCommandQueue : NSObject <MTLCommandQueueSPI> {
    CMMTLDevice *_cmDevice;
    id<MTLCommandQueue> _commandQueue;
    InterceptConfig *_interceptConfig;
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

- (id)initWithCMMTLDevice:(id)a0 descriptor:(id)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)commandBufferWithUnretainedReferences;
- (void)forwardInvocation:(id)a0;
- (id)initWithCMMTLDevice:(id)a0;
- (id)initWithCMMTLDevice:(id)a0 maxCommandBufferCount:(unsigned long long)a1;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)commandBuffer;
- (void).cxx_destruct;

@end
