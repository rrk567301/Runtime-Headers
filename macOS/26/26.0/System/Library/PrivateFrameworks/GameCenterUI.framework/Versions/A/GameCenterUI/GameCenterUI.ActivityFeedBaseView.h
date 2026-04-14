@class _TtC12GameCenterUI8BaseView, _TtC12GameCenterUI22ActivityFeedSharedView;

@interface GameCenterUI.ActivityFeedBaseView : GameCenterUI.BaseView

@property (nonatomic, readonly) _TtC12GameCenterUI8BaseView *contentBackgroundView;
@property (nonatomic, readonly) _TtC12GameCenterUI22ActivityFeedSharedView *sharedView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
