@class NSObject;
@protocol OS_dispatch_queue;

@interface MTLCommandQueueDescriptorInternal : MTLCommandQueueDescriptor {
    unsigned long long _maxCommandBufferCount;
    unsigned long long _qosLevel;
    NSObject<OS_dispatch_queue> *_commitQueue;
    BOOL _commitSynchronously;
    NSObject<OS_dispatch_queue> *_completionQueue;
    BOOL _disableCrossQueueHazardTracking;
    unsigned long long _devicePartition;
}

@property BOOL isOpenGLQueue;

- (id)description;
- (id)init;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)maxCommandBufferCount;
- (void)setCompletionQueue:(id)a0;
- (unsigned long long)qosLevel;
- (id)commitQueue;
- (BOOL)commitSynchronously;
- (id)completionQueue;
- (BOOL)disableCrossQueueHazardTracking;
- (void)setMaxCommandBufferCount:(unsigned long long)a0;
- (unsigned long long)devicePartition;
- (void)setQosLevel:(unsigned long long)a0;
- (void)setCommitQueue:(id)a0;
- (void)setCommitSynchronously:(BOOL)a0;
- (void)setDisableCrossQueueHazardTracking:(BOOL)a0;
- (void)setDevicePartition:(unsigned long long)a0;

@end
