@interface PKPassScroller : NSScroller

+ (BOOL)isCompatibleWithOverlayScrollers;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawKnob;
- (void)drawKnobSlotInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 highlight:(BOOL)a1;
- (double)overlayScrollerKnobAlpha;
- (double)overlayScrollerTrackAlpha;

@end
