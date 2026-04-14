@class CALayer, CAShapeLayer;

@interface SHTaggingViewAutoShadowLayer : CALayer

@property (retain) CALayer *autoShadowBackgroundLayer;
@property (retain) CAShapeLayer *autoShadowOuterLayer;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)setupSublayers;

@end
