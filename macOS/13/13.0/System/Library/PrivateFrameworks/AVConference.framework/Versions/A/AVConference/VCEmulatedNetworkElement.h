@class NSDictionary;

@interface VCEmulatedNetworkElement : NSObject {
    NSDictionary *_policies;
    struct opaqueCMSimpleQueue { } *_networkElementQueue;
}

@property (copy, nonatomic) id /* block */ processCompleteHandler;

- (void)dealloc;
- (int)write:(id)a0;
- (id)initWithPolicies:(id)a0;
- (void)runUntilTime:(double)a0;
- (void)drainAndReleasePackets;
- (void)connectTo:(id)a0;
- (void)connectFrom:(id)a0;

@end
