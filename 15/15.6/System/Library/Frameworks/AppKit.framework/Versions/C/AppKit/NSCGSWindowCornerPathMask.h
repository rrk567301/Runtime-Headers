@interface NSCGSWindowCornerPathMask : NSCGSWindowCornerMask {
    struct CGPath { } *_cornerPath;
    char _clipsWindowContents;
    char _definesShadowShape;
    struct CGImage { } *_cachedImage;
    double _cachedImageScale;
}

- (void)dealloc;
- (struct CGPath { } *)path;
- (char)clipsWindowContents;
- (double)cornerRadius;
- (char)definesShadowShape;
- (struct CGImage { } *)imageForScale:(double)a0 size:(struct CGSize { double x0; double x1; })a1 center:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (id)initWithCornerPath:(struct CGPath { } *)a0 clipsWindowContents:(char)a1 definesShadowShape:(char)a2;

@end
