@class NSDateInterval, HKQuantity;

@interface HKDiscreteQuantitySample : HKQuantitySample

@property (copy, nonatomic, setter=_setMinimumQuantity:) HKQuantity *minimumQuantity;
@property (copy, nonatomic, setter=_setAverageQuantity:) HKQuantity *averageQuantity;
@property (copy, nonatomic, setter=_setMaximumQuantity:) HKQuantity *maximumQuantity;
@property (copy, nonatomic, setter=_setMostRecentQuantity:) HKQuantity *mostRecentQuantity;
@property (copy, nonatomic, setter=_setMostRecentQuantityDateInterval:) NSDateInterval *mostRecentQuantityDateInterval;
@property (nonatomic) char _hasMinimumQuantity;
@property (nonatomic) char _hasMaximumQuantity;
@property (nonatomic) char _hasMostRecentQuantity;
@property (nonatomic) char _hasMostRecentQuantityDateInterval;

+ (char)supportsSecureCoding;
+ (char)_isConcreteObjectClass;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)asJSONObject;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned long long x1; })a0;

@end
