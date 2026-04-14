@interface NSRegion : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    void *_cgRegion;
}

- (void)dealloc;
- (id)copy;
- (id)description;
- (id)init;
- (id)mutableCopy;
- (BOOL)isEmpty;
- (void)scaleBy:(double)a0;
- (void)scaleXBy:(double)a0 yBy:(double)a1;
- (void)addClip;
- (BOOL)containsRegion:(id)a0;
- (void)enumerateRects:(id /* block */)a0;
- (void)getRects:(struct CGRect **)a0 count:(unsigned long long *)a1;
- (BOOL)intersectsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)subtractRegion:(id)a0;
- (void)addRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addRegion:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void *)cgsRegionObj;
- (BOOL)containsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)fill;
- (id)initWithBitmapImageRep:(id)a0 atX:(long long)a1 y:(long long)a2 flip:(BOOL)a3;
- (id)initWithCGSRegionObj:(struct CGSRegionObject { } *)a0;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithRects:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 count:(unsigned long long)a1;
- (void)intersectRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)intersectRegion:(id)a0;
- (BOOL)intersectsRegion:(id)a0;
- (BOOL)isRectangular;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })largestRect;
- (void)setEmpty;
- (void)setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setRegion:(id)a0;
- (void)stroke;
- (void)subtractRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)translateBy:(struct CGPoint { double x0; double x1; })a0;
- (void)xorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)xorRegion:(id)a0;

@end
