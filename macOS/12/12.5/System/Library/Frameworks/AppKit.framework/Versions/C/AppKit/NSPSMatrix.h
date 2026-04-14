@interface NSPSMatrix : NSObject <NSCoding> {
    double matrixElements[12];
    struct _mFlags { unsigned char identity : 1; unsigned char rotated : 1; unsigned char rotationOnly : 1; unsigned short _RESERVED : 13; } mFlags;
}

+ (void)initialize;
+ (id)matrixWithCGAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)identity;
- (id)makeIdentity;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })CGAffineTransform;
- (void)translateOriginToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)scaleUnitSquareToSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFrameRotation:(double)a0;
- (void)rotateByAngle:(double)a0;
- (id)transformRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (id)send;
- (id)scaleTo:(double)a0 :(double)a1;
- (id)_computeInv;
- (id)_doRotationOnly;
- (double)getRotationAngle;
- (id)translateTo:(double)a0 :(double)a1;
- (id)concat:(id)a0;
- (id)sendInv;
- (id)transform:(struct CGPoint { double x0; double x1; } *)a0;
- (id)invTransform:(struct CGPoint { double x0; double x1; } *)a0;
- (BOOL)rotated;
- (id)invTransformRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;

@end
