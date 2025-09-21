@interface GameCenterUI.GKMetricsBridge : NSObject

+ (void)recordChallengePageEventWithReferrerData:(char)a0;
+ (void)recordInviteFriendClickEventWithType:(long long)a0 pageType:(id)a1 pageId:(id)a2;
+ (void)recordLeaderboardPageEventWithPageId:(id)a0 withReferrerData:(char)a1;

- (id)init;

@end
