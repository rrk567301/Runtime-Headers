@class _TtC12GameCenterUI35ActivityFeedAddFriendSuggestionView, _TtC12GameCenterUI8BaseView, _TtC12GameCenterUI14EmptyStateView;

@interface GameCenterUI.ActivityFeedAddFriendsView : GameCenterUI.BaseView

@property (nonatomic, readonly) _TtC12GameCenterUI8BaseView *contentBackgroundView;
@property (nonatomic, readonly) _TtC12GameCenterUI14EmptyStateView *emptyStateView;
@property (nonatomic, readonly) _TtC12GameCenterUI35ActivityFeedAddFriendSuggestionView *friendSuggestionView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
