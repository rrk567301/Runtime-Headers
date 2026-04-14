@interface _NSCapsuleCornerRadius : _NSCornerRadius {
    double _maximumRadius;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)_isDependentOnContainerCornerRadii;
- (BOOL)_isDependentOnOwnGeometry;
- (double)_resolvedRadiusForCorner:(unsigned long long)a0 subviewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 containerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 containerCornerRadius:(double)a3 isFlipped:(BOOL)a4;
- (id)initWithMaximumRadius:(double)a0;

@end
