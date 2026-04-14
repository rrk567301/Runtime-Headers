@class NSView, IMDynamicGradientLayer, NSLayoutConstraint, CALayer, NSImage;

@interface SONativeTranscriptBalloonView : NSView {
    IMDynamicGradientLayer *_dynamicGradientLayer;
    NSLayoutConstraint *_leadingContentFieldConstraint;
    NSLayoutConstraint *_trailingContentFieldConstraint;
    CALayer *_maskLayer;
    NSImage *_maskImage;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentCenter;
}

@property (nonatomic) struct IMBalloonDescriptor_t { char shape; char tailShape; char style; unsigned long long orientation; unsigned long long corners; char color; char attributes; } balloonDescriptor;
@property (readonly, nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } edgeInsets;
@property (readonly, nonatomic) NSView *contentView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (void)_updateBackground;
- (id)_backgroundColor;
- (void)viewDidChangeBackingProperties;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_updateMask;
- (id)_maskLayer;
- (void)_updateConstraints;
- (void)setMaximumWidth:(double)a0;
- (void)addConstraintsToContentView:(id)a0 withLayoutPadding:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)contentsDidChange;
- (void)_setMaskPropertiesOnLayer:(id)a0;
- (void)setGradientWithGradientReferenceView:(id)a0;
- (void)setContentView:(id)a0 withLayoutPadding:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)sizeToFitWithMaximumWidth:(double)a0;
- (id)backgroundMaskLayer;
- (id)test_gradientLayer;

@end
