@class CALayer, CAShapeLayer;

@interface SHListeningInnerCircleLayer : SHPaletteLayer

@property (retain) CAShapeLayer *circle;
@property (retain) CALayer *circleContainerLayer;

- (void)setup;
- (void)layoutSublayers;
- (void).cxx_destruct;
- (struct CGPath { } *)circlePathForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
