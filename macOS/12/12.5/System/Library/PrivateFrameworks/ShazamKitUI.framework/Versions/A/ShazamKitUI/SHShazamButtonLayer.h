@class CALayer, NSString, CAShapeLayer;
@protocol SHShazamButtonViewDelegate;

@interface SHShazamButtonLayer : CALayer <CAAnimationDelegate>

@property (retain) CALayer *backgroundLayer;
@property (retain) CALayer *shapeLayer;
@property (retain) CAShapeLayer *topTransparentLayer;
@property (retain) CAShapeLayer *bottomTransparentLayer;
@property (retain) CAShapeLayer *topSolidLayer;
@property (retain) CAShapeLayer *bottomSolidLayer;
@property (retain) CAShapeLayer *topBorder;
@property BOOL initialAnimationPerformed;
@property (weak) id<SHShazamButtonViewDelegate> buttonDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)buildView;
- (void)drawTransparentShape;
- (void)performSDrawingAnimationWithDuration:(double)a0 delay:(double)a1;
- (void)removeTransparentShapeWithDuration:(double)a0 delay:(double)a1 completion:(id /* block */)a2;
- (void)drawSolidShapeWithDuration:(double)a0 delay:(double)a1 completion:(id /* block */)a2;
- (void)drawSolidShape;
- (void)removeTransparentShape;
- (struct CGPath { } *)topStrokePath;
- (id)strokeLayerWithPath:(struct CGPath { } *)a0 color:(struct CGColor { } *)a1;
- (struct CGPath { } *)bottomStrokePath;
- (struct CGPath { } *)topStrokeLongPath;
- (struct CGPath { } *)bottomStrokeLongPath;
- (void)performSDrawingIntroAnimation;
- (void)skipIntroAnimation;
- (void)performFadeInIntroAnimation:(double)a0 delay:(double)a1;

@end
