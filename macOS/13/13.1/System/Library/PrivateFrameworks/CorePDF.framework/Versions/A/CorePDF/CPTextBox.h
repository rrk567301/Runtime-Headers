@interface CPTextBox : CPRegion {
    double rotationAngle;
}

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (double)rotationAngle;
- (void)setRotationAngle:(double)a0;
- (void)accept:(id)a0;
- (BOOL)isBoxRegion;
- (BOOL)isRotated;

@end
