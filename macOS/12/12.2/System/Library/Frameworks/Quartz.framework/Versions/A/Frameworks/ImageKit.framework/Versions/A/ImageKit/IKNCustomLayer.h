@interface IKNCustomLayer : CALayer

@property BOOL ignoresMouseDown;
@property BOOL centersX;
@property BOOL centersY;

- (id)init;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)resizeWithOldSuperlayerSize:(struct CGSize { double x0; double x1; })a0;

@end
