@class HKQuantity;

@interface HKCumulativeQuantitySample : HKQuantitySample

@property (copy, nonatomic, setter=_setSumQuantity:) HKQuantity *sumQuantity;

+ (char)supportsSecureCoding;
+ (char)_isConcreteObjectClass;

- (id)sum;

@end
