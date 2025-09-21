@interface IKImageView2ScrollView : NSScrollView

@property char isElastic;

- (void)_setMagnification:(double)a0 centeredAroundPoint:(struct CGPoint { double x0; double x1; })a1 animate:(char)a2;

@end
