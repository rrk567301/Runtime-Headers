@interface _NSSizeIndicatorView : _NSConstraintIndicatorView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
    char isHorizontal;
}

- (id)constraintDescription;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 asBorder:(char)a1 withLineThickness:(double)a2 forceColor:(id)a3;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isHorizontal:(char)a1;

@end
