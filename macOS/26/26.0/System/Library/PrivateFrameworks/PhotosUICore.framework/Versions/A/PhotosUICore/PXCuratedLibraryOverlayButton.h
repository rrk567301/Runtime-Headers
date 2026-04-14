@class UXView, NSFont, NSString, UXLabel, NSColor, NSVisualEffectView, PXCuratedLibraryOverlayButtonConfiguration, UXImageView, NSCache;

@interface PXCuratedLibraryOverlayButton : UXControl <PXGReusableView, PXDynamicHitTestInsetsView>

@property (class, readonly, nonatomic) NSCache *titleSizeCache;
@property (class, readonly, nonatomic) NSCache *buttonSizeCache;
@property (class, readonly, nonatomic) NSFont *defaultTitleFont;
@property (class, readonly, nonatomic) NSColor *defaultTitleColor;

@property (nonatomic) BOOL isSizeCalculationButton;
@property (retain, nonatomic) NSVisualEffectView *effectView;
@property (retain, nonatomic) UXView *contentView;
@property (retain, nonatomic) UXView *customSolidBackgroundView;
@property (retain, nonatomic) UXImageView *customIconImageView;
@property (retain, nonatomic) UXLabel *customTitleLabel;
@property (retain, nonatomic) UXLabel *customCaptionLabel;
@property (retain, nonatomic) NSString *axLabel;
@property (copy, nonatomic) PXCuratedLibraryOverlayButtonConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly, nonatomic) BOOL canUnloadWhenInvisible;
@property (readonly, nonatomic) BOOL isFloating;
@property (nonatomic) unsigned long long extendedHitTestInsetsEdges;

+ (void)_getSize:(out struct CGSize { double x0; double x1; } *)a0 titleFrame:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 captionFrame:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 iconFrame:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 forConfiguration:(id)a4 title:(id)a5;
+ (struct CGSize { double x0; double x1; })_sizeOfTitle:(id)a0 withFont:(id)a1;
+ (id)roundedCornerMaskImage:(struct PXCornerRadius { double x0; double x1; double x2; double x3; })a0 size:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })sizeWithConfiguration:(id)a0;
+ (BOOL)usesButtonSystem;

- (void)setHighlighted:(BOOL)a0;
- (void)_updateBackgroundView;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateHitTestInsets;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)description;
- (void)layoutSubviews;
- (void)_accessibilitySettingsChanged:(id)a0;
- (id)accessibilityRole;
- (void)viewDidChangeEffectiveAppearance;
- (void)prepareForReuse;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)_performAction:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)_setupViews;
- (void)becomeReusable;
- (void)_updateButtonWithConfiguration:(id)a0;
- (void)_performMenuAction:(id)a0;
- (void)_platformSpecificViewSetup;
- (void)_updateButtonSystemWithConfiguration:(id)a0;
- (void)_updateEffectView;
- (void)_updateEffectViewBackgroundStyle;

@end
