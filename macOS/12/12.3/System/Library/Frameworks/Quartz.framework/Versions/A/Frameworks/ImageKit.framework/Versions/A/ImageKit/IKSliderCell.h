@interface IKSliderCell : NSSliderCell

- (BOOL)continueTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (void)_drawTickMarks;
- (double)_positionForValue:(double)a0;

@end
