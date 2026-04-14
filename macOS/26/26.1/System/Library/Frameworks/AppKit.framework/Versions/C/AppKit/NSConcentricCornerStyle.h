@class NSCornerStyle, _NSConcentricCornerRadius;

@interface NSConcentricCornerStyle : NSCornerStyle

@property (copy) _NSConcentricCornerRadius *_cornerRadius;
@property (copy) NSCornerStyle *minimumRadiiStyle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isDependentOnContainerCornerRadii;
- (BOOL)_isDependentOnOwnGeometry;
- (double)_resolvedRadiusForCorner:(unsigned long long)a0 subviewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 containerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 containerCornerRadius:(double)a3 isFlipped:(BOOL)a4;
- (id)initWithMinimumRadiiStyle:(id)a0;

@end
