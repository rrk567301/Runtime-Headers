@class NSColor, NSString;

@interface GameCenterUI.ArtworkView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ imageLayer;
    void /* unknown type, empty encoding */ highlightLayer;
    void /* unknown type, empty encoding */ isCornerRadiusInvalid;
    void /* unknown type, empty encoding */ isStyleInvalid;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ accessibilityDescription;
}

@property (class, nonatomic, readonly) NSColor *iconBorderColor;
@property (class, nonatomic, readonly) double highlightDefaultCornerRadius;

@property (nonatomic, retain) void /* unknown type, empty encoding */ artworkTintColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) void /* unknown type, empty encoding */ imageSize;
@property (nonatomic, copy) NSString *magnificationFilter;
@property (nonatomic, copy) NSString *minificationFilter;
@property (nonatomic, retain) void /* unknown type, empty encoding */ image;
@property (nonatomic) void /* unknown type, empty encoding */ isHighlighted;
@property (nonatomic, copy) NSString *accessibilityDescription;

- (void).cxx_destruct;
- (void)layout;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)viewDidChangeBackingProperties;
- (void)showWithImage:(id)a0 isAnimationPermitted:(BOOL)a1;

@end
