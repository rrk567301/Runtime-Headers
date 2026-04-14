@interface AXVLightScroller : NSScroller

+ (BOOL)isCompatibleWithOverlayScrollers;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFloatValue:(float)a0;
- (void)drawKnobSlotInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 highlight:(BOOL)a1;
- (void)drawKnob;
- (long long)knobStyle;
- (void)fadeOut;

@end
