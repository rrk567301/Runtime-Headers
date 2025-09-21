@class NSString, GKGameRecord, NSIndexPath;

@interface GameCenterUI.DashboardPresenter : GameCenterUI.BaseSplitPresenter {
    void /* unknown type, empty encoding */ pageMetricsPresenter;
    void /* unknown type, empty encoding */ launchContext;
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ primarySections;
    void /* unknown type, empty encoding */ secondarySections;
    void /* unknown type, empty encoding */ game;
    void /* unknown type, empty encoding */ scrollToIndexPath;
    void /* unknown type, empty encoding */ scrollToActivityInfo;
    void /* unknown type, empty encoding */ onFriendRequestsCountChanged;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ requiredData;
    void /* unknown type, empty encoding */ requiredDataPresenter;
}

@property (nonatomic) BOOL shouldUseLargeTitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, retain) GKGameRecord *gameRecord;
@property (nonatomic) BOOL displayInSplitView;
@property (nonatomic, copy) NSIndexPath *scrollToIndexPath;
@property (nonatomic) BOOL didScrollToIndexPath;

+ (void)presentLeaderboardsFrom:(id)a0 request:(id)a1 gameRecord:(id)a2 leaderboard:(id)a3 leaderboardSet:(id)a4 animated:(BOOL)a5;
+ (void)processLeaderboardRequestFrom:(id)a0 request:(id)a1 gameRecord:(id)a2;

- (void).cxx_destruct;
- (void)updateSnapshot;
- (id)initWithPlayerId:(id)a0;
- (void)fetchDashboardRequiredDataWithForce:(BOOL)a0;
- (void)fetchGameRecordAfterAuthenticationFor:(id)a0;
- (void)handleViewDidLoad;
- (void)loadMoreActivityFeedWithContinuationToken:(id)a0;
- (void)presentAchievementsFrom:(id)a0 request:(id)a1 gameRecord:(id)a2;
- (void)presentChallengesFrom:(id)a0 gameRecord:(id)a1 shouldShowPlayForChallenge:(BOOL)a2;
- (void)presentLeaderboardsFrom:(id)a0 request:(id)a1 gameBundleID:(id)a2;
- (void)presentPlayerProfileFrom:(id)a0 request:(id)a1 animated:(BOOL)a2;

@end
