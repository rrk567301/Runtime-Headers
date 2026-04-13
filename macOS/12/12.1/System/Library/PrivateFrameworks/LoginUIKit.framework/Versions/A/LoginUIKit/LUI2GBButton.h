@interface LUI2GBButton : NSButton

- (BOOL)allowsVibrancy;
- (void)updateLayer;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)drawFocusRingMask;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusRingMaskBounds;

@end
