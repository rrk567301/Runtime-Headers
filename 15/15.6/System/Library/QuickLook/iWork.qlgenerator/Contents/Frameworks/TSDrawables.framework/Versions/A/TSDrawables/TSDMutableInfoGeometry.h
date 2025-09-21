@interface TSDMutableInfoGeometry : TSDInfoGeometry

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)setAngle:(double)a0;
- (void)setHeightValid:(char)a0;
- (void)setHorizontalFlip:(char)a0;
- (void)setTransformedBoundsOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)setVerticalFlip:(char)a0;
- (void)setWidthValid:(char)a0;

@end
