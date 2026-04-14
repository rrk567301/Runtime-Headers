@class VCEmulatedNetworkQueue;

@interface VCEmulatedNetworkSingleQueue : VCEmulatedNetwork {
    VCEmulatedNetworkQueue *_networkQueue;
}

- (void)dealloc;
- (id)initWithPolicies:(id)a0;
- (void)push:(id)a0;
- (void)runUntilTime:(double)a0;

@end
