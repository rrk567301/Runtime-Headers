@interface QCRegion : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    void *_region;
    void *_unused[4];
}

+ (void)initialize;
+ (id)regionWithCGSRegion:(struct CGSRegionObject { } *)a0;
+ (id)regionWithCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)regionWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)emptyRegion;
+ (id)infiniteRegion;
+ (id)regionWithCIFilterShape:(id)a0;

- (void)finalize;
- (void)dealloc;
- (id)description;
- (BOOL)isEmpty;
- (id)rotateByDegrees:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)subtractRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)subtractRegion:(id)a0;
- (BOOL)isInfinite;
- (BOOL)intersectsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isRectangular;
- (BOOL)containsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)containsRegion:(id)a0;
- (BOOL)intersectsRegion:(id)a0;
- (id)intersectWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)insetByX:(double)a0 Y:(double)a1;
- (id)unionWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSRegionObject { } *)CGSRegion;
- (id)initWithCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)scaleByX:(double)a0 Y:(double)a1;
- (id)initWithCIFilterShape:(id)a0;
- (id)offsetByX:(double)a0 Y:(double)a1;
- (id)transformWith:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0;
- (id)transformBy:(id)a0;
- (id)pixelBufferRepresentation;
- (id)initWithCGSRegion:(struct CGSRegionObject { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })CGRect;
- (void *)enumerateRects:(void *)a0 outRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (id)listRects;
- (id)unionWithRegion:(id)a0;
- (id)intersectWithRegion:(id)a0;
- (id)CIFilterShape;

@end
