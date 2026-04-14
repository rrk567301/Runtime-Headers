@interface IASMagicPocketView : NSView

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)draw;
- (BOOL)isAccessibilityElement;
- (void)updateLayer;
- (void)dealloc;
- (BOOL)wantsUpdateLayer;
- (void)_windowKeyStateDidChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForBorderLine;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPocketShadow;

@end
