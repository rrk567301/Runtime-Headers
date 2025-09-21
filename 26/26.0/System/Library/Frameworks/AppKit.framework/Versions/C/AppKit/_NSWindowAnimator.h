@interface _NSWindowAnimator : _NSObjectAnimator

- (void)setAlphaValue:(double)a0;
- (id)contentView;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (id)_borderView;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1 animate:(BOOL)a2;
- (void)setFrameTopLeftPoint:(struct CGPoint { double x0; double x1; })a0;

@end
