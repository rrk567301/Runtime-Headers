@interface NSCGSWindowCornerImageMask : NSCGSWindowCornerMask {
    struct CGImage { } *_image;
    double _imageScale;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _center;
    char _hasTrivialEdges;
    char _clipsWindowContents;
    char _definesShadowShape;
    double _cornerRadius;
    struct CGImage { } *_cachedImage;
    double _cachedImageScale;
}

- (void)dealloc;
- (struct CGPath { } *)path;
- (char)clipsWindowContents;
- (double)cornerRadius;
- (char)definesShadowShape;
- (struct CGImage { } *)imageForScale:(double)a0 size:(struct CGSize { double x0; double x1; })a1 center:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (id)initWithImage:(struct CGImage { } *)a0 scale:(double)a1 center:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 hasTrivialEdges:(char)a3 clipsWindowContents:(char)a4 definesShadowShape:(char)a5;

@end
