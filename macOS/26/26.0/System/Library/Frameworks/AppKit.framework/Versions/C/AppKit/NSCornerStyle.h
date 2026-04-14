@interface NSCornerStyle : NSObject

+ (id)capsule;
+ (id)containerConcentric;
+ (id)containerConcentricWithMinimumRadiiStyle:(id)a0;
+ (id)fixedWithRadius:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isDependentOnContainerCornerRadii;
- (double)_resolvedRadiusForCorner:(unsigned long long)a0 subviewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 containerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 containerCornerRadius:(double)a3 isFlipped:(BOOL)a4;
- (double)_resolvedRadiusForView:(id)a0 corner:(unsigned long long)a1;

@end
