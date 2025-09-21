@class NSObject;
@protocol OS_dispatch_queue, MTLLogState;

@interface MTLCommandQueueDescriptorInternal : MTLCommandQueueDescriptor {
    unsigned long long _maxCommandBufferCount;
    id<MTLLogState> _logState;
}

@property (nonatomic) unsigned long long qosLevel;
@property (nonatomic) NSObject<OS_dispatch_queue> *commitQueue;
@property (nonatomic) BOOL commitSynchronously;
@property (nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic) BOOL disableCrossQueueHazardTracking;
@property (nonatomic) BOOL disableAsyncCompletionDispatch;
@property (nonatomic) unsigned long long devicePartition;
@property BOOL isOpenGLQueue;
@property (nonatomic) BOOL disableIOFencing;
@property (nonatomic) BOOL enableLowLatencySignalSharedEvent;
@property (nonatomic) BOOL enableLowLatencyWaitSharedEvent;
@property (nonatomic) BOOL lockParameterBufferSizeToMax;
@property (nonatomic) BOOL commitsWithQoS;

- (unsigned long long)maxCommandBufferCount;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)logState;
- (id)init;
- (id)description;
- (void)setLogState:(id)a0;
- (void)setMaxCommandBufferCount:(unsigned long long)a0;

@end
