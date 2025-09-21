@class NSImageView, _TtC12GameCenterUI11ArtworkView, _TtC12GameCenterUI20DynamicTypeTextField, _TtC12GameCenterUI8BaseView;

@interface GameCenterUI.ActivityFeedLeaderboardRowView : GameCenterUI.BaseView

@property (nonatomic, readonly) _TtC12GameCenterUI8BaseView *contentBackgroundView;
@property (nonatomic, readonly) _TtC12GameCenterUI11ArtworkView *artworkView;
@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *nicknameLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *pointsLabel;
@property (nonatomic, readonly) NSImageView *accessoryView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measureToFit:(struct CGSize { double x0; double x1; })a0 with:(id)a1;

@end
