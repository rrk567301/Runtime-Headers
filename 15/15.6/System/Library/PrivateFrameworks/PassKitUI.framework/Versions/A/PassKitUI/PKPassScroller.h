@interface PKPassScroller : NSScroller

+ (char)isCompatibleWithOverlayScrollers;

- (void)drawKnob;
- (void)drawKnobSlotInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 highlight:(char)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)overlayScrollerKnobAlpha;
- (double)overlayScrollerTrackAlpha;

@end
