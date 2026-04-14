@interface IMAVSlider : IMAVControl

+ (Class)_auxiliaryClass;
+ (id)timeSlider;

- (double)maxValue;
- (double)minValue;
- (void)setMinValue:(double)a0;
- (void)setMaxValue:(double)a0;

@end
