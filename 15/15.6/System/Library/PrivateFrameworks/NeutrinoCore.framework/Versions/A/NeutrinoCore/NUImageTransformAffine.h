@interface NUImageTransformAffine : NUImageTransform {
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _transformInv;
}

@property (readonly) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (struct CGPoint { double x0; double x1; })transformPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)inverseTransform;
- (char)isEqualToGeometryTransformAffine:(id)a0;
- (char)isIdentityImageTransform;
- (void)nu_updateDigest:(id)a0;
- (id)transformByRotateZ:(double)a0;
- (id)transformByScaleX:(double)a0 scaleY:(double)a1;
- (id)transformByTranslateX:(double)a0 translateY:(double)a1;
- (struct { void /* unknown type, empty encoding */ x0[4]; })transformMatrix:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;

@end
