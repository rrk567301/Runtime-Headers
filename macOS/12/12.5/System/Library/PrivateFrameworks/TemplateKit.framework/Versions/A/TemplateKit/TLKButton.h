@class TLKImageView, CAShapeLayer, NSView, TLKTapContainerButton, NSImage;

@interface TLKButton : NSView

@property (retain, nonatomic) TLKTapContainerButton *button;
@property (retain, nonatomic) CAShapeLayer *outerProgressLayer;
@property (retain, nonatomic) CAShapeLayer *innerProgressLayer;
@property (nonatomic) double progress;
@property (retain, nonatomic) TLKImageView *imageView;
@property (retain, nonatomic) NSView *backgroundView;
@property (nonatomic, getter=isToggled) BOOL toggled;
@property (weak, nonatomic) NSView *containerView;
@property (retain, nonatomic) NSImage *untoggledImage;
@property (retain, nonatomic) NSImage *toggledImage;
@property (retain, nonatomic) NSImage *overlayImage;
@property (nonatomic) struct CGSize { double width; double height; } fixedSize;
@property (readonly, nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (readonly) NSImage *imageOnImageView;
@property (readonly) NSView *hitView;

+ (id)blurColorForImage:(id)a0 forButtonSize:(struct CGSize { double x0; double x1; })a1 withOffsetRight:(float)a2 withOffsetBottom:(float)a3;
+ (struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })_calculateStatistics:(struct CGImage { } *)a0 withSize:(struct CGSize { double x0; double x1; })a1;
+ (id)blurColorForColor:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)iconColor;
- (void)setProgress:(float)a0 animated:(BOOL)a1;
- (void)tlk_updateForAppearance:(id)a0;
- (void)hideProgressAnimated:(BOOL)a0;
- (void)showPlayIndicator:(BOOL)a0;
- (void)setButtonSelectionState:(BOOL)a0;
- (void)_updateInnerProgressLayerStroke;
- (void)updateOuterProgressLayerStroke;
- (id)_outerProgressLayer;
- (id)_innerProgressLayer;
- (void)endIndeterminateAnimation;
- (void)_beginIndeterminateAnimation;
- (id)_newShapeViewWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineWidth:(double)a1;
- (void)beginIndeterminateAnimation;
- (void)addTarget:(id)a0 forAction:(SEL)a1;

@end
