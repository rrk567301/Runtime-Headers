@class _NSFixedCornerRadius;

@interface NSFixedCornerStyle : NSCornerStyle

@property (copy) _NSFixedCornerRadius *_cornerRadius;
@property double radius;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithRadius:(double)a0;
- (BOOL)_isDependentOnContainerCornerRadii;
- (BOOL)_isDependentOnOwnGeometry;
- (double)_resolvedRadiusForCorner:(unsigned long long)a0 subviewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 containerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 containerCornerRadius:(double)a3 isFlipped:(BOOL)a4;

@end
