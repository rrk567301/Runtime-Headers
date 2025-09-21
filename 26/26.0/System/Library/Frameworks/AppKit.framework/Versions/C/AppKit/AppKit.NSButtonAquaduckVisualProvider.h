@class NSColor;

@interface AppKit.NSButtonAquaduckVisualProvider : NSObject <NSButtonVisualProvider> {
    void /* unknown type, empty encoding */ button;
    void /* unknown type, empty encoding */ _hostingViewIfExists;
    void /* unknown type, empty encoding */ bezelConfiguration;
}

@property (nonatomic, weak) void /* function */ buttonCell;
@property (nonatomic, readonly) BOOL hasSubviews;
@property (nonatomic, readonly) int blendModeForImageContent;
@property (nonatomic, readonly) NSColor *preferredTemplateImageFillColor;
@property (nonatomic, readonly) BOOL hasBezelTint;
@property (nonatomic, readonly) BOOL hasInactiveAppearance;
@property (nonatomic, readonly) BOOL hasRolloverAppearance;
@property (nonatomic, readonly) long long interiorBackgroundStyle;

+ (BOOL)supportsGladeBehaviorForConfiguration:(id)a0 appearance:(id)a1;
+ (id)visualProviderForButtonCell:(id)a0;

- (void)detach;
- (void)updateLayer;
- (struct { double x0; double x1; })baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (void)layout;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void)attachToButton:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsetsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1 compressionOptions:(id)a2;
- (void)displayedAlternateTitleDidChange;
- (void)displayedTitleDidChange;
- (void)drawBezelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawFocusRingMaskWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawImage:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawTitle:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flipped:(BOOL)a1;
- (BOOL)getIntrinsicArtworkSize:(struct CGSize { double x0; double x1; } *)a0 alignmentRectInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a1 idealContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a2 maxContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a3;
- (void)getPreferredSymbolSize:(double *)a0 weight:(double *)a1 scale:(long long *)a2;
- (BOOL)hasTallContent;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;
- (void)layoutWithAnimation;
- (int)overallBlendModeInAppearance:(id)a0;
- (id)preferredAppearanceForBezelConfiguration:(id)a0;
- (void)removeSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;
- (unsigned long long)updateBezelConfiguration:(id)a0;
- (void)updateBezelTintColorWithAnimation;
- (void)updateImageViewWithAnimationMutationBlock:(id /* block */)a0;
- (void)updateSubviewsIncludeTitleTextField:(BOOL)a0;
- (void)updateSubviewsWithAnimation;
- (void)updateTextFieldWithAnimationMutationBlock:(id /* block */)a0;
- (int)vibrancyBlendForContextDrawingInAppearanace:(id)a0 outHasVibrancyIncompatability:(BOOL *)a1;
- (unsigned long long)vibrantBlendingStyleForSubtree;

@end
