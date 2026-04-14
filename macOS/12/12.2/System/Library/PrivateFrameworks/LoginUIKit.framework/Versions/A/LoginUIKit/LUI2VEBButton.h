@interface LUI2VEBButton : NSButton

- (BOOL)allowsVibrancy;
- (void)updateLayer;
- (void)drawFocusRingMask;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusRingMaskBounds;

@end
