@class NSObject;
@protocol OS_dispatch_queue, MTLLogState;

@interface MTLCommandQueueDescriptorInternal : MTLCommandQueueDescriptor {
    unsigned long long _maxCommandBufferCount;
    id<MTLLogState> _logState;
}

@property (nonatomic) unsigned long long qosLevel;
@property (nonatomic) NSObject<OS_dispatch_queue> *commitQueue;
@property (nonatomic) char commitSynchronously;
@property (nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic) char disableCrossQueueHazardTracking;
@property (nonatomic) char disableAsyncCompletionDispatch;
@property (nonatomic) unsigned long long devicePartition;
@property char isOpenGLQueue;
@property (nonatomic) char disableIOFencing;
@property (nonatomic) char enableLowLatencySignalSharedEvent;
@property (nonatomic) char enableLowLatencyWaitSharedEvent;
@property (nonatomic) char lockParameterBufferSizeToMax;
@property (nonatomic) char commitsWithQoS;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)maxCommandBufferCount;
- (void)setMaxCommandBufferCount:(unsigned long long)a0;
- (id)logState;
- (void)setLogState:(id)a0;

@end
