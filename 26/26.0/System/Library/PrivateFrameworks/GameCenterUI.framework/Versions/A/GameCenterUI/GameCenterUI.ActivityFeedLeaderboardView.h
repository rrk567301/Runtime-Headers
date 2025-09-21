@class _TtC12GameCenterUI37ActivityFeedLeaderboardAvatarsSubview, _TtC12GameCenterUI22ActivityFeedSharedView, _TtC12GameCenterUI34ActivityFeedLeaderboardListSubview, _TtC12GameCenterUI8BaseView;

@interface GameCenterUI.ActivityFeedLeaderboardView : GameCenterUI.BaseView

@property (nonatomic, readonly) _TtC12GameCenterUI8BaseView *contentBackgroundView;
@property (nonatomic, readonly) _TtC12GameCenterUI22ActivityFeedSharedView *sharedView;
@property (nonatomic, readonly) _TtC12GameCenterUI34ActivityFeedLeaderboardListSubview *leaderboardListSubview;
@property (nonatomic, readonly) _TtC12GameCenterUI37ActivityFeedLeaderboardAvatarsSubview *leaderboardAvatarsSubview;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
