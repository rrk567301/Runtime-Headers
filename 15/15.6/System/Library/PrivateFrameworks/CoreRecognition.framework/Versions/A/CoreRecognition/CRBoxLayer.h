@class NSMutableArray, CATextLayer, CAShapeLayer;

@interface CRBoxLayer : CAReplicatorLayer

@property (retain) CAShapeLayer *reticleLayer;
@property (retain) CATextLayer *codeLayer;
@property (retain) NSMutableArray *completionBlocks;
@property double demoSpeed;
@property char customInit;
@property (nonatomic) double frameRatio;

+ (id)layer;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)layoutSublayers;
- (void)addCompletionBlock:(id /* block */)a0;
- (void)animateConceal;
- (void)animatePulseColor:(id)a0;
- (void)animateReveal;
- (void)animateToPosition:(struct CGPoint { double x0; double x1; })a0 transform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a1 opacity:(double)a2 type:(long long)a3;
- (id)initWithCodeFrameRatio:(double)a0;
- (void)positionForCodeBoxPoints:(id)a0;
- (void)setString:(id)a0 mirrored:(char)a1 inverted:(char)a2;

@end
