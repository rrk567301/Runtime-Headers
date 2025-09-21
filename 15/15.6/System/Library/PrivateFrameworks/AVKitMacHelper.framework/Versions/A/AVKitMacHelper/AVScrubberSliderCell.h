@interface AVScrubberSliderCell : NSSliderCell

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })barRectFlipped:(char)a0;
- (void)drawBarInside:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flipped:(char)a1;
- (void)drawKnob:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })knobRectFlipped:(char)a0;
- (float)_normalizeSliderValue:(float)a0;
- (id)_parentScrubberSlider;

@end
