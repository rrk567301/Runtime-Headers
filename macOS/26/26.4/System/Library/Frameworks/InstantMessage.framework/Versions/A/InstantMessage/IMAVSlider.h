@interface IMAVSlider : IMAVControl

+ (Class)_auxiliaryClass;
+ (id)timeSlider;

- (void)setMaxValue:(double)a0;
- (double)minValue;
- (double)maxValue;
- (void)setMinValue:(double)a0;

@end
