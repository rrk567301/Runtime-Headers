@interface NSRegion : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    void *_cgRegion;
}

- (id)copy;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)mutableCopy;
- (BOOL)isEmpty;
- (void)scaleBy:(double)a0;
- (void)scaleXBy:(double)a0 yBy:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)addClip;
- (void)stroke;
- (void)fill;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)subtractRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCGSRegionObj:(struct CGSRegionObject { } *)a0;
- (id)initWithRects:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 count:(unsigned long long)a1;
- (void)intersectRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)subtractRegion:(id)a0;
- (void *)cgsRegionObj;
- (void)setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)enumerateRects:(id /* block */)a0;
- (BOOL)intersectsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isRectangular;
- (void)setRegion:(id)a0;
- (void)setEmpty;
- (void)xorRegion:(id)a0;
- (void)getRects:(struct CGRect **)a0 count:(unsigned long long *)a1;
- (void)addRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithBitmapImageRep:(id)a0 atX:(long long)a1 y:(long long)a2 flip:(BOOL)a3;
- (BOOL)containsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)containsRegion:(id)a0;
- (BOOL)intersectsRegion:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })largestRect;
- (void)addRegion:(id)a0;
- (void)intersectRegion:(id)a0;
- (void)xorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)translateBy:(struct CGPoint { double x0; double x1; })a0;

@end
