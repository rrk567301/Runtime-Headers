@interface NSCGSWindowCornerRadiusMask : NSCGSWindowCornerMask {
    double _cornerRadius;
    BOOL _clipsWindowContents;
    BOOL _definesShadowShape;
    struct CGImage { } *_cachedImage;
    double _cachedImageScale;
    unsigned int _maskedCorners;
}

- (double)cornerRadius;
- (void)dealloc;
- (struct CGPath { } *)path;
- (unsigned int)maskedCorners;
- (BOOL)clipsWindowContents;
- (BOOL)definesShadowShape;
- (struct CGImage { } *)imageForScale:(double)a0 size:(struct CGSize { double x0; double x1; })a1 center:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (id)initWithCornerRadius:(double)a0 clipsWindowContents:(BOOL)a1 definesShadowShape:(BOOL)a2 maskedCorners:(unsigned int)a3;

@end
