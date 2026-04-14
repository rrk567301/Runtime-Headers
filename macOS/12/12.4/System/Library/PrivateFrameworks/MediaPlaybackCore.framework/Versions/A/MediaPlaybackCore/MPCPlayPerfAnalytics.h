@class NSString, MPCPlayToSetRateSignpost, MPCWaitForLikelyToKeepUp, MPCWaitForReadyToPlaySignpost, MPCSetRateToEffectiveRateSignpost;

@interface MPCPlayPerfAnalytics : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) MPCWaitForLikelyToKeepUp *waitForLikelyToKeepUpSignpost;
@property (retain, nonatomic) MPCWaitForReadyToPlaySignpost *waitForReadyToPlaySignpost;
@property (retain, nonatomic) MPCPlayToSetRateSignpost *playToSetRateSignpost;
@property (retain, nonatomic) MPCSetRateToEffectiveRateSignpost *setRateToEffectiveRateSignpost;

+ (id)playPerfAnalyticsWithIdentifier:(id)a0 willPlayImmediately:(BOOL)a1;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)didReceivePlayRequest;
- (void)itemDidBecomeCurrent:(id)a0;
- (void)itemDidFailToLoad:(id)a0 error:(id)a1;
- (void)itemIsReadyToPlay:(id)a0;
- (void)playbackDidStopForItem:(id)a0;
- (void)playbackRateDidChangeForItem:(id)a0 rate:(float)a1;
- (void)firstFrameWillRenderForItem:(id)a0 atDate:(id)a1;
- (void)playbackIsLikelyToKeepUp:(BOOL)a0 forItem:(id)a1;

@end
