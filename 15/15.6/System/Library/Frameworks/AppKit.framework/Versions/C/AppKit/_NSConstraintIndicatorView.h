@class NSLayoutConstraint;

@interface _NSConstraintIndicatorView : NSView

@property (retain, nonatomic) NSLayoutConstraint *representedConstraint;

- (void)dealloc;
- (id)constraintDescription;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 asBorder:(char)a1 withLineThickness:(double)a2 forceColor:(id)a3;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (char)isFlipped;
- (void)mouseDown:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roundRectInBase:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
