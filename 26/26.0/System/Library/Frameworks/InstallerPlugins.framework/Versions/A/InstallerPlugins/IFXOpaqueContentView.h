@interface IFXOpaqueContentView : NSVisualEffectView {
    double _backgroundOpacity;
    BOOL _drawsBorder;
}

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)awakeFromNib;
- (void)setDrawsBorder:(BOOL)a0;
- (void)setBackgroundOpacity:(double)a0;

@end
