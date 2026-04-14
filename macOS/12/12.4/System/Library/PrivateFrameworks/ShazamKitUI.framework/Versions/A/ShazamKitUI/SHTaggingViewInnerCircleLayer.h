@class CALayer, CAShapeLayer;

@interface SHTaggingViewInnerCircleLayer : CALayer

@property (retain) CAShapeLayer *circle;
@property (retain) CALayer *circleContainerLayer;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)setup;
- (struct CGPath { } *)circlePathForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
