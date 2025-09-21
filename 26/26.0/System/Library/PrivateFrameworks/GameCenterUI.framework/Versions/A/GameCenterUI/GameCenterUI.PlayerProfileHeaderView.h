@class _TtC12GameCenterUI10AvatarView, _TtC12GameCenterUI20DynamicTypeTextField;

@interface GameCenterUI.PlayerProfileHeaderView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ useHorizontalLayout;
}

@property (class, nonatomic, readonly) struct CGSize { double x0; double x1; } avatarSize;

@property (nonatomic, readonly) _TtC12GameCenterUI10AvatarView *avatarView;
@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *friendsLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *titleLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
