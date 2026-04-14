@class NSCornerStyle;

@interface NSViewCornerConfiguration : NSObject {
    BOOL _isSymmetric;
}

@property (class, readonly, copy) NSViewCornerConfiguration *squareCorners;
@property (class, readonly, copy) NSViewCornerConfiguration *capsuleCorners;

@property (copy) NSCornerStyle *topLeft;
@property (copy) NSCornerStyle *topRight;
@property (copy) NSCornerStyle *bottomLeft;
@property (copy) NSCornerStyle *bottomRight;

+ (id)containerConcentric;
+ (id)containerConcentricWithMinimumRadiiStyle:(id)a0;
+ (id)containerConcentricWithMinimumRadiiStyle:(id)a0 symmetric:(BOOL)a1;
+ (id)fixedCornersWithRadius:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_isDependentOnContainerCornerRadii;
- (id)_resolvedCornerRadiiForSubviewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 containerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 containerCornerRadii:(id)a2 isFlipped:(BOOL)a3;
- (id)initWithCornerStyle:(id)a0;
- (id)initWithTopLeft:(id)a0 topRight:(id)a1 bottomLeft:(id)a2 bottomRight:(id)a3;
- (id)initWithTopLeft:(id)a0 topRight:(id)a1 bottomLeft:(id)a2 bottomRight:(id)a3 symmetric:(BOOL)a4;

@end
