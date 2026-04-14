@class _TtC12GameCenterUI10AvatarView;

@interface GameCenterUI.PageHeaderView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ headingLabel;
    void /* unknown type, empty encoding */ titleLabel;
}

@property (class, nonatomic, readonly) struct CGSize { double x0; double x1; } avatarSize;

@property (nonatomic, readonly) _TtC12GameCenterUI10AvatarView *avatarView;

- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
