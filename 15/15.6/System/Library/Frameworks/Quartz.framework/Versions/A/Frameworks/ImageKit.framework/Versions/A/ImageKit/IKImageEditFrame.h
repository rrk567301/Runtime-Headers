@interface IKImageEditFrame : NSVisualEffectView {
    char _useToolbar;
}

- (char)acceptsFirstMouse:(id)a0;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isOpaque;
- (id)contentColor;
- (id)titleTextColor;
- (void)drawTitle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 useToolbar:(char)a1;
- (void)setup:(char)a0;
- (id)titlebarColor;

@end
