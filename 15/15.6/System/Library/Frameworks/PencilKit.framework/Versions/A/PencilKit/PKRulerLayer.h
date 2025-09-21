@class PKRulerController, NSTimer, CALayer, CATextLayer;

@interface PKRulerLayer : CALayer

@property (retain, nonatomic) NSTimer *imageTransformTimer;
@property (nonatomic) double initialDrawingBoundsYOrigin;
@property (nonatomic) char isInlineResizing;
@property (nonatomic) char isExpandedInline;
@property (retain, nonatomic) CALayer *rulerLayer;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } rulerTransform;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } previousRulerTransform;
@property (retain, nonatomic) CALayer *rulerAngleTick;
@property (retain, nonatomic) CATextLayer *rulerAngleText;
@property (retain, nonatomic) CALayer *rulerDistanceHUD;
@property (retain, nonatomic) CATextLayer *rulerDistanceText;
@property (nonatomic) char isRulerDrawingMovingToEndOfRuler;
@property (nonatomic) double currentTValueForSnappedDrawing;
@property (nonatomic) double minTValueForSnappedDrawing;
@property (nonatomic) double maxTValueForSnappedDrawing;
@property (nonatomic) double originTValueForSnappedDrawing;
@property (nonatomic) double rulerZoomStartCenterTValueOnScreen;
@property (nonatomic) double rulerZoomStartScale;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } rulerZoomStartTransform;
@property (nonatomic) char zooming;
@property (weak, nonatomic) PKRulerController *rulerController;
@property (nonatomic) double rulerAlpha;
@property (retain, nonatomic) CALayer *rulerAngleMarker;

- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(char)a1;
- (double)rulerAlignInset;
- (double)_distanceMarkerFontSize;
- (id)_rulerImage;
- (id)addOpacityAnimationOnLayer:(id)a0 delegate:(id)a1 toOpacity:(double)a2;
- (void)addScaleAndOpacityAnimationOnLayer:(id)a0 delegate:(id)a1 fromScale:(double)a2 toScale:(double)a3 fromAlpha:(double)a4 toAlpha:(double)a5;
- (id)addScaleAnimationOnLayer:(id)a0 delegate:(id)a1 fromScale:(double)a2 toScale:(double)a3;
- (char)compactRuler;
- (long long)currentAngle;
- (struct CGPoint { double x0; double x1; })getRulerCenterLineOriginAndTangent:(struct CGPoint { double x0; double x1; } *)a0;
- (void)hideRulerAngleMarker;
- (void)hideRulerAnimated:(char)a0;
- (id)initWithRulerController:(id)a0;
- (void)removeRulerMarkers;
- (id)rulerDialImage;
- (id)rulerDialLevelImage;
- (double)rulerTickMarkInset;
- (double)rulerWidth;
- (void)setImageTransformFrom:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 toTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 animated:(char)a2 duration:(double)a3;
- (char)shouldUseLargestRulerTextFontSize;
- (void)showRuler;
- (void)updateAngleWithAngleMarkerPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)updateDistanceMarkerWithSpacing:(double)a0;
- (void)updateImageTransform:(id)a0;
- (void)updateRulerAlpha:(double)a0;
- (void)updateRulerMarkerForLocation:(struct CGPoint { double x0; double x1; })a0 firstTouch:(char)a1;
- (void)updateRulerTickMarkImage;
- (long long)userAngle;
- (char)viewPointInRuler:(struct CGPoint { double x0; double x1; })a0;

@end
