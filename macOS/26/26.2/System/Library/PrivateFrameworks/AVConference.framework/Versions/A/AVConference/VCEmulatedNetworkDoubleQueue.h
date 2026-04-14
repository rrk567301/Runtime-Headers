@class VCEmulatedNetworkQueue;

@interface VCEmulatedNetworkDoubleQueue : VCEmulatedNetwork {
    VCEmulatedNetworkQueue *_networkQueueA;
    VCEmulatedNetworkQueue *_networkQueueB;
}

- (void)push:(id)a0;
- (id)initWithPolicies:(id)a0;
- (void)dealloc;
- (void)runUntilTime:(double)a0;

@end
