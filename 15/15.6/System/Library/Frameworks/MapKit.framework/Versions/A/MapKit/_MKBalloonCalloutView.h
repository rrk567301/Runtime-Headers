@class NSView, MKAnnotationView, _MKMarkerAnnotationBaseImageView, MKImageView, CALayer, _MKBezierPathView, NSColor, NSImage, _MKKVOProxy;

@interface _MKBalloonCalloutView : MKCalloutView <_MKKVOProxyDelegate> {
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
    char _centerAnnotationWhenOffscreen;
    char _dismissed;
    _MKKVOProxy *_kvoProxy;
    MKAnnotationView *_observedAnnotationView;
}

@property (readonly, nonatomic) long long style;
@property (copy, nonatomic) NSImage *image;
@property (retain, nonatomic) NSView *contentView;
@property (nonatomic) char originatesAsSmallBalloon;
@property (nonatomic) double smallBalloonScale;
@property (copy, nonatomic) NSColor *balloonTintColor;
@property (copy, nonatomic) NSColor *strokeColor;
@property (copy, nonatomic) NSColor *innerStrokeColor;
@property (copy, nonatomic) NSColor *imageTintColor;
@property (nonatomic) char showsArrow;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (void)_commonInit;
- (id)initWithStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (char)isFlipped;
- (void)updateLayer;
- (void)viewDidMoveToWindow;
- (char)wantsUpdateLayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_centerFrame;
- (void)_configureForArrowStateWithDuration:(double)a0;
- (void)_didFinishSwayAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_idealFrame;
- (double)_innerDiameter;
- (void)_mkObserveValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_prepareForDisplayAnimationWithSway;
- (char)_shouldSwayOnPresentation;
- (void)_showAnimated:(char)a0 completionBlock:(id /* block */)a1;
- (void)_startObservingAnnotationView;
- (void)_stopObservingAnnotationView;
- (void)_updateAnimationLayer;
- (void)_updateCroppedImage;
- (void)_updateStyle;
- (char)calloutContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)dismissAnimated:(char)a0 completionBlock:(id /* block */)a1;
- (void)hideCalloutAnimated:(char)a0 completionHandler:(id /* block */)a1;
- (id)initWithAnnotationView:(id)a0;
- (void)setShowsArrow:(char)a0 animated:(char)a1;
- (void)showAnimated:(char)a0 completionBlock:(id /* block */)a1;
- (void)showCalloutAnimated:(char)a0;
- (void)updateWithNewCalloutOffset;

@end
