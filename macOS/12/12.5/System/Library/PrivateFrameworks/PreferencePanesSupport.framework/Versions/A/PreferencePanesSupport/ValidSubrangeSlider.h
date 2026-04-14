@interface ValidSubrangeSlider : NSUpActionSlider

+ (void)initialize;

- (void)awakeFromNib;
- (double)minValidValue;
- (void)setMinValidValue:(double)a0;
- (double)maxValidValue;
- (void)setMaxValidValue:(double)a0;
- (void)constrainValueWhileDragging;
- (void)constrainFinalValue;

@end
