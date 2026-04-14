@class NSImageView, NSView, TLKProminenceView, TLKImage, NSFont;
@protocol TLKImageViewDelegate;

@interface TLKImageView : TLKView

@property (retain, nonatomic) NSView *shadowContainer;
@property (retain, nonatomic) NSImageView *imageView;
@property (retain, nonatomic) TLKProminenceView *placeholderView;
@property (retain, nonatomic) TLKImage *lastTlkImage;
@property (retain, nonatomic) TLKImage *tlkImage;
@property (nonatomic) unsigned long long prominence;
@property (nonatomic) BOOL useButtonColoring;
@property (nonatomic) BOOL alwaysShowPlaceholderView;
@property (retain, nonatomic) NSFont *symbolFont;
@property (nonatomic) long long symbolScale;
@property (nonatomic) double symbolWeight;
@property (weak, nonatomic) id<TLKImageViewDelegate> delegate;
@property (nonatomic) BOOL disableCornerRounding;
@property (nonatomic) unsigned long long alignment;
@property (nonatomic) BOOL shadowDisabled;

+ (BOOL)imageIsProbablyOpaque:(id)a0 tlkImage:(id)a1;
+ (unsigned long long)defaultCornerMask;
+ (BOOL)checkTransparencyForImageAtCorners:(struct CGImage { } *)a0 shouldCropToCircle:(BOOL)a1;
+ (BOOL)hasTransparencyAtPoint:(struct CGPoint { double x0; double x1; })a0 forCGImage:(struct CGImage { } *)a1;
+ (struct CGSize { double x0; double x1; })roundedSizeForSize:(struct CGSize { double x0; double x1; })a0;

- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)viewDidChangeBackingProperties;
- (void)_setBackgroundStyleForSubtree:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateShadow;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)observedPropertiesChanged;
- (void)updateSizeAndLayout;
- (void)invalidateIntrinsicContentSizeIfNecessary;
- (void)tlk_updateForAppearance:(id)a0;
- (void)updateWithUIImage:(id)a0 animate:(BOOL)a1;
- (void)updateSymbolConfiguration;
- (struct CGSize { double x0; double x1; })constrainedSizeForImageSize:(struct CGSize { double x0; double x1; })a0 fittingSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })aspectRatioPreservedFrameForSize:(struct CGSize { double x0; double x1; })a0;
- (void)applyCornerRoundingStyle:(unsigned long long)a0 toView:(id)a1;

@end
