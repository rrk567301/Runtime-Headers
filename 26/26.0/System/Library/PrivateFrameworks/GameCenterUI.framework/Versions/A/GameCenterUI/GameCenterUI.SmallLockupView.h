@class _TtC12GameCenterUI20DynamicTypeTextField, _TtC12GameCenterUI11ArtworkView;

@interface GameCenterUI.SmallLockupView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ headingLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ chevronView;
    void /* unknown type, empty encoding */ hasChevron;
}

@property (class, nonatomic, readonly) double horizontalComponentSpacing;
@property (class, nonatomic, readonly) struct CGSize { double x0; double x1; } artworkSize;

@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *titleLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI11ArtworkView *artworkView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
