@class NSString, NSImage, _TtC12GameCenterUI11ArtworkView, NSColor;

@interface GameCenterUI.ArtworkView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ imageLayer;
    void /* unknown type, empty encoding */ highlightLayer;
    void /* unknown type, empty encoding */ isCornerRadiusInvalid;
    void /* unknown type, empty encoding */ isStyleInvalid;
    void /* unknown type, empty encoding */ style;
    void /* function */ accessibilityDescription;
}

@property (class, nonatomic, readonly) NSColor *iconBorderColor;
@property (class, nonatomic, readonly) double highlightDefaultCornerRadius;
@property (class, nonatomic, readonly) _TtC12GameCenterUI11ArtworkView *iconArtworkView;

@property (nonatomic, retain) NSColor *artworkTintColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (nonatomic, copy) NSString *magnificationFilter;
@property (nonatomic, copy) NSString *minificationFilter;
@property (nonatomic, retain) NSImage *image;
@property (nonatomic) BOOL isHighlighted;
@property (nonatomic, copy) NSString *accessibilityDescription;

- (id)accessibilityLabel;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)showWithImage:(id)a0 isAnimationPermitted:(BOOL)a1;
- (id)accessibilityRole;
- (void)viewDidChangeBackingProperties;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measureToFit:(struct CGSize { double x0; double x1; })a0 with:(id)a1;

@end
