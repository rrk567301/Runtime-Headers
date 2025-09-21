@interface IMAVSlider : IMAVControl

+ (Class)_auxiliaryClass;
+ (id)timeSlider;

- (void)setMaxValue:(double)a0;
- (void)setMinValue:(double)a0;
- (double)maxValue;
- (double)minValue;

@end
