@class CALayer;

@interface VKCImageSubjectGlowLayer : CALayer

@property (retain, nonatomic) CALayer *glowLayer;
@property (nonatomic) BOOL active;

- (id)init;
- (void).cxx_destruct;
- (id)animationGroupWithDuration:(double)a0 beginTime:(double)a1 animations:(id)a2;
- (id)animationWithKeyPath:(id)a0 beginTime:(double)a1 duration:(double)a2;
- (void)beginAnimationWithViewScale:(double)a0 screenScale:(double)a1 path:(id)a2;
- (void)configureAnimationWithViewScale:(double)a0 screenScale:(double)a1 path:(id)a2;
- (void)hideGlow:(BOOL)a0;
- (void)renderGlowParameters:(id)a0 path:(struct CGPath { } *)a1 pathLength:(double)a2 duration:(double)a3 maxStrokeLengthFraction:(id)a4;
- (id)shapeLayerLineWidth:(double)a0 opacity:(double)a1 path:(struct CGPath { } *)a2;
- (void)stopAnimationAnimated:(BOOL)a0;
- (id)thickGlowParametersWithViewScale:(double)a0;
- (id)thinGlowParametersWithScreenScale:(double)a0 viewScale:(double)a1;

@end
