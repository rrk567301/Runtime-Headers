@interface GameCenterUI.GKMetricsBridge : NSObject

+ (void)recordChallengePageEventWithReferrerData:(BOOL)a0;
+ (void)recordLeaderboardPageEventWithPageId:(id)a0 withReferrerData:(BOOL)a1;

- (id)init;

@end
