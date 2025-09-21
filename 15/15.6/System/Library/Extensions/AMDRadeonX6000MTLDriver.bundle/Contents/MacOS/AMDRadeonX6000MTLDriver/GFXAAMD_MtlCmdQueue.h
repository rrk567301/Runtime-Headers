@class NSString, NSMutableDictionary, NSArray, NSObject;
@protocol OS_dispatch_queue, MTLDevice;

@interface GFXAAMD_MtlCmdQueue : MTLIOAccelCommandQueue <MTLCommandQueueSPI> {
    struct AMD_CmdQueueMembersRec { struct GFXAAMD_MtlStatistics *statsMgr; NSArray *requestedCounters; void *apiLayerData; } m_members;
}

@property int backgroundTrackingPID;
@property (readonly) unsigned long long maxCommandBufferCount;
@property (readonly) unsigned long long qosLevel;
@property (readonly) NSObject<OS_dispatch_queue> *commitQueue;
@property (readonly) char commitSynchronously;
@property (readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly) char disableCrossQueueHazardTracking;
@property char skipRender;
@property char executionEnabled;
@property (readonly) char isOpenGLQueue;
@property (readonly) char commitsWithQoS;
@property (getter=isProfilingEnabled) char profilingEnabled;
@property (nonatomic, getter=isStatEnabled) char StatEnabled;
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
- (id)availableCounters;
- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (id)getRequestedCounters;
- (void)insertDebugCaptureBoundary;
- (int)requestCounters:(id)a0;
- (id)subdivideCounterList:(id)a0;
- (void)submitCommandBuffers:(const id *)a0 count:(unsigned long long)a1;

@end
