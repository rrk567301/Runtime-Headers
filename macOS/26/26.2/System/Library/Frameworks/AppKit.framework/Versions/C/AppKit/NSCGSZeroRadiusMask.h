@interface NSCGSZeroRadiusMask : NSCGSWindowCornerMask {
    BOOL _definesShadowShape;
}

- (unsigned int)maskedCorners;
- (double)cornerRadius;
- (struct CGPath { } *)path;
- (BOOL)clipsWindowContents;
- (BOOL)definesShadowShape;
- (struct CGImage { } *)imageForScale:(double)a0 size:(struct CGSize { double x0; double x1; })a1 center:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (id)initWithDefinesShadowShape:(BOOL)a0;

@end
