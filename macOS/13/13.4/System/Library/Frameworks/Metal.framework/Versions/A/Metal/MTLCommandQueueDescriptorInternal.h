@class NSObject;
@protocol OS_dispatch_queue;

@interface MTLCommandQueueDescriptorInternal : MTLCommandQueueDescriptor {
    unsigned long long _maxCommandBufferCount;
    unsigned long long _qosLevel;
    NSObject<OS_dispatch_queue> *_commitQueue;
    BOOL _commitSynchronously;
    NSObject<OS_dispatch_queue> *_completionQueue;
    BOOL _disableCrossQueueHazardTracking;
    BOOL _disableAsyncCompletionDispatch;
    unsigned long long _devicePartition;
}

@property BOOL isOpenGLQueue;
@property (nonatomic) BOOL disableIOFencing;
@property (nonatomic) BOOL enableLowLatencySignalSharedEvent;
@property (nonatomic) BOOL enableLowLatencyWaitSharedEvent;

- (id)description;
- (id)init;
- (id)completionQueue;
- (BOOL)disableCrossQueueHazardTracking;
- (id)commitQueue;
- (BOOL)commitSynchronously;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)maxCommandBufferCount;
- (unsigned long long)qosLevel;
- (void)setCompletionQueue:(id)a0;
- (void)setMaxCommandBufferCount:(unsigned long long)a0;
- (unsigned long long)devicePartition;
- (void)setCommitQueue:(id)a0;
- (BOOL)disableAsyncCompletionDispatch;
- (void)setCommitSynchronously:(BOOL)a0;
- (void)setDevicePartition:(unsigned long long)a0;
- (void)setDisableAsyncCompletionDispatch:(BOOL)a0;
- (void)setDisableCrossQueueHazardTracking:(BOOL)a0;
- (void)setQosLevel:(unsigned long long)a0;

@end
