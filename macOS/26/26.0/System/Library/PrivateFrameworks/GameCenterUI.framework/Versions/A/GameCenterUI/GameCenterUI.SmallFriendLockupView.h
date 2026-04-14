@class _TtC12GameCenterUI10AvatarView, _TtC12GameCenterUI20DynamicTypeTextField;

@interface GameCenterUI.SmallFriendLockupView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ avatarLoadingTask;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ chevronView;
    void /* unknown type, empty encoding */ trailingViewConfiguration;
    void /* unknown type, empty encoding */ accessoryButton;
    void /* unknown type, empty encoding */ accessoryButtonWidthConstraint;
}

@property (class, nonatomic, readonly) double horizontalComponentSpacing;
@property (class, nonatomic, readonly) double trailingViewHorizontalSpacing;
@property (class, nonatomic, readonly) struct CGSize { double x0; double x1; } avatarSize;
@property (class, nonatomic, readonly) struct CGSize { double x0; double x1; } compactAvatarSize;

@property (nonatomic, readonly) _TtC12GameCenterUI10AvatarView *avatarView;
@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *titleLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *subtitleLabel;
@property (nonatomic) BOOL hasChevron;

+ (struct CGSize { double x0; double x1; })sizeWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (void)didTapAccessoryButton;

@end
