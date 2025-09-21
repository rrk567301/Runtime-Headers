@interface IFXOpaqueContentView : NSVisualEffectView {
    double _backgroundOpacity;
    char _drawsBorder;
}

- (void)awakeFromNib;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDrawsBorder:(char)a0;
- (void)setBackgroundOpacity:(double)a0;

@end
