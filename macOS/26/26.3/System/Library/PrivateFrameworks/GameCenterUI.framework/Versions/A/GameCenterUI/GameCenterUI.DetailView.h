@class NSString, NSImage, _TtC12GameCenterUI11ArtworkView, _TtC12GameCenterUI20DynamicTypeTextField, NSView;

@interface GameCenterUI.DetailView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ previousTitleTextColor;
    void /* unknown type, empty encoding */ previousSubtitleTextColor;
    void /* unknown type, empty encoding */ chevronView;
    void /* unknown type, empty encoding */ accessory;
    void /* function */ accessoryAction;
    void /* unknown type, empty encoding */ style;
}

@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *titleLabel;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *subtitleLabel;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) _TtC12GameCenterUI11ArtworkView *imageView;
@property (nonatomic, retain) NSImage *image;
@property (nonatomic, retain) NSView *accessoryView;
@property (nonatomic, copy) id /* block */ accessoryAction;
@property (nonatomic) BOOL disabled;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (void)didTapWithAccessoryView:(id)a0;

@end
