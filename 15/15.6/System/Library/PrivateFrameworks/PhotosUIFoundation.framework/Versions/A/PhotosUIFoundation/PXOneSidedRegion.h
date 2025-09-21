@interface PXOneSidedRegion : PXRegion

@property (class, readonly) PXOneSidedRegion *identityRegion;

@property (readonly, nonatomic) double a;
@property (readonly, nonatomic) double b;
@property (readonly, nonatomic) double c;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)initWithSideAngle:(double)a0 point:(struct CGPoint { double x0; double x1; })a1 width:(double)a2 offset:(double)a3;
- (id)transformedWithAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (char)_getIntersectionWithLineFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1 intersectionFromPoint:(struct CGPoint { double x0; double x1; } *)a2 toPoint:(struct CGPoint { double x0; double x1; } *)a3;
- (struct CGPath { } *)createPathInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithA:(double)a0 b:(double)a1 c:(double)a2;
- (double)valueAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
