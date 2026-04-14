@class NSImageView, _TtC12GameCenterUI17GKPlayerGroupView, _TtC12GameCenterUI20DynamicTypeTextField, _TtC12GameCenterUI15ImageButtonView, _TtC12GameCenterUI10ButtonView;

@interface GameCenterUI.SmallPlayerCardView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ contentViewBackground;
    void /* function */ closeButtonActionBlock;
    void /* function */ buttonActionBlock;
}

@property (class, nonatomic, readonly) double cardWidth;
@property (class, nonatomic, readonly) struct CGSize { double x0; double x1; } avatarSize;

@property (nonatomic, readonly) _TtC12GameCenterUI15ImageButtonView *closeButton;
@property (nonatomic, retain) _TtC12GameCenterUI17GKPlayerGroupView *avatarView;
@property (nonatomic, readonly) NSImageView *messagesBadge;
@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *titleLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *subtitleLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI10ButtonView *button;
@property (nonatomic, copy) id /* block */ closeButtonActionBlock;
@property (nonatomic, copy) id /* block */ buttonActionBlock;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)didTapButton;
- (void)didTapCloseButton;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measureToFit:(struct CGSize { double x0; double x1; })a0 with:(id)a1;

@end
