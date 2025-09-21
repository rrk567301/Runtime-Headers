@class _TtC11AppStoreKit11ArtworkView, NSString, NSImageSymbolConfiguration, NSImage, NSColor;

@interface AppStoreKit.ArtworkView : AppStoreKit.BaseView {
    void /* unknown type, empty encoding */ imageLayer;
    void /* unknown type, empty encoding */ highlightLayer;
    void /* unknown type, empty encoding */ isStyleInvalid;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ isCornerRadiusInvalid;
    void /* function */ accessibilityDescription;
}

@property (class, nonatomic, readonly) double highlightDefaultCornerRadius;
@property (class, nonatomic, readonly) _TtC11AppStoreKit11ArtworkView *iconArtworkView;
@property (class, nonatomic, readonly) _TtC11AppStoreKit11ArtworkView *iapIconArtworkView;
@property (class, nonatomic, readonly) _TtC11AppStoreKit11ArtworkView *cardArtworkView;

@property (nonatomic, retain) NSColor *artworkTintColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (nonatomic) BOOL frameUpdatesImageSize;
@property (nonatomic, retain) NSImageSymbolConfiguration *preferredSymbolConfiguration;
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

@end
