@class MPCPlaybackEngine;
@protocol MFQueueItemTranslator;

@interface MPCItemBookmarker : NSObject

@property (retain, nonatomic) id<MFQueueItemTranslator> translator;
@property (weak, nonatomic) MPCPlaybackEngine *engine;

- (void).cxx_destruct;
- (void)currentItemWillChangeFromItem:(id)a0 toItem:(id)a1 time:(double)a2 timestamp:(double)a3;
- (id)initWithPlaybackEngine:(id)a0 translator:(id)a1;
- (void)itemDidBecomeCurrent:(id)a0 time:(double)a1 rate:(float)a2 timestamp:(double)a3;
- (void)itemDidPlayToEnd:(id)a0 time:(double)a1 timestamp:(double)a2;
- (void)itemSmartTransitionDidEnd:(id)a0 time:(double)a1 timestamp:(double)a2;
- (void)itemSmartTransitionWillBeginFrom:(id)a0 outgoingItemAveragePrePivotTransitionRate:(double)a1 time:(double)a2 timestamp:(double)a3;
- (void)itemTransitionDidReachPivotPoint:(id)a0 to:(id)a1 incomingItemAveragePostPivotTransitionRate:(double)a2 time:(double)a3 timestamp:(double)a4;
- (void)itemTransitionWillBeginFrom:(id)a0 to:(id)a1 type:(long long)a2 timestamp:(double)a3;
- (void)playbackDidStartForItem:(id)a0 time:(double)a1 rate:(float)a2 timestamp:(double)a3;
- (void)playbackDidStopForItem:(id)a0 time:(double)a1 timestamp:(double)a2;
- (void)playbackRateDidChangeToRate:(float)a0 forItem:(id)a1 time:(double)a2 timestamp:(double)a3;
- (void)playbackStateDidChangeFromState:(long long)a0 toState:(long long)a1 forItem:(id)a2 time:(double)a3 rate:(float)a4 timestamp:(double)a5;
- (void)updateDurationSnapshotWithTime:(double)a0 forItem:(id)a1 rate:(float)a2 timestamp:(double)a3;

@end
