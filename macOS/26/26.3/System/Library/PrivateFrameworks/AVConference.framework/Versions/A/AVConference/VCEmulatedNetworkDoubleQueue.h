@class VCEmulatedNetworkQueue;

@interface VCEmulatedNetworkDoubleQueue : VCEmulatedNetwork {
    VCEmulatedNetworkQueue *_networkQueueA;
    VCEmulatedNetworkQueue *_networkQueueB;
}

- (void)dealloc;
- (id)initWithPolicies:(id)a0;
- (void)push:(id)a0;
- (void)runUntilTime:(double)a0;

@end
