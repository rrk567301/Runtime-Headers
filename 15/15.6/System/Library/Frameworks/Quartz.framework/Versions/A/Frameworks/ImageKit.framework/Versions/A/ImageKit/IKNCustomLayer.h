@interface IKNCustomLayer : CALayer

@property char ignoresMouseDown;
@property char centersX;
@property char centersY;

- (id)init;
- (char)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)resizeWithOldSuperlayerSize:(struct CGSize { double x0; double x1; })a0;

@end
