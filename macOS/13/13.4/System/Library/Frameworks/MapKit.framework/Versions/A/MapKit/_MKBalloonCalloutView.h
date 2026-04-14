@class _MKMarkerAnnotationBaseImageView, CALayer, NSImage, NSView, MKImageView, _MKBezierPathView, NSColor;

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
    _MKMarkerAnnotationBaseImageView *_backgroundShapeGradientView;
    _MKMarkerAnnotationBaseImageView *_rectangularImageView;
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
- (void)_commonInit;
- (id)initWithStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isFlipped;
- (void)updateLayer;
- (void)viewDidMoveToWindow;
- (BOOL)wantsUpdateLayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_centerFrame;
- (void)_configureForArrowStateWithDuration:(double)a0;
- (void)_didFinishSwayAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_idealFrame;
- (double)_innerDiameter;
- (void)_prepareForDisplayAnimationWithSway;
- (BOOL)_shouldSwayOnPresentation;
- (void)_showAnimated:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)_updateAnimationLayer;
- (void)_updateCroppedImage;
- (void)_updateStyle;
- (BOOL)calloutContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)dismissAnimated:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)hideCalloutAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)initWithAnnotationView:(id)a0;
- (void)setShowsArrow:(BOOL)a0 animated:(BOOL)a1;
- (void)showAnimated:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)showCalloutAnimated:(BOOL)a0;
- (void)updateWithNewCalloutOffset;

@end
