@class CALayer, NSImage, NSView, MKImageView, _MKBezierPathView, NSColor;

@interface _MKBalloonCalloutView : MKCalloutView {
    NSView *_shadowView;
    NSView *_containerView;
    MKImageView *_balloonBodyImageView;
    MKImageView *_tailView;
    NSView *_innerBackgroundView;
    MKImageView *_imageView;
    struct CGSize { double width; double height; } _intrinsicSize;
    struct CGSize { double width; double height; } _shadowSize;
    double _croppedImageScale;
    MKImageView *_contentViewMaskView;
    NSView *_backgroundView;
    _MKBezierPathView *_backgroundShapeView;
    CALayer *_animationLayer;
    BOOL _centerAnnotationWhenOffscreen;
    BOOL _dismissed;
}

@property (readonly, nonatomic) long long style;
@property (copy, nonatomic) NSImage *image;
@property (retain, nonatomic) NSView *contentView;
@property (nonatomic) BOOL originatesAsSmallBalloon;
@property (nonatomic) double smallBalloonScale;
@property (copy, nonatomic) NSColor *balloonTintColor;
@property (copy, nonatomic) NSColor *strokeColor;
@property (copy, nonatomic) NSColor *innerStrokeColor;
@property (copy, nonatomic) NSColor *imageTintColor;
@property (nonatomic) BOOL showsArrow;

- (void).cxx_destruct;
- (void)layout;
- (BOOL)isFlipped;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithStyle:(long long)a0;
- (void)viewDidMoveToWindow;
- (void)_commonInit;
- (BOOL)calloutContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setShowsArrow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateWithNewCalloutOffset;
- (id)initWithAnnotationView:(id)a0;
- (double)_innerDiameter;
- (void)_updateStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_centerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_idealFrame;
- (void)_configureForArrowStateWithDuration:(double)a0;
- (void)_updateCroppedImage;
- (void)showAnimated:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)dismissAnimated:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)_showAnimated:(BOOL)a0 completionBlock:(id /* block */)a1;
- (BOOL)_shouldSwayOnPresentation;
- (void)_prepareForDisplayAnimationWithSway;
- (void)_didFinishSwayAnimation;
- (void)_updateAnimationLayer;
- (void)showCalloutAnimated:(BOOL)a0;
- (void)hideCalloutAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
