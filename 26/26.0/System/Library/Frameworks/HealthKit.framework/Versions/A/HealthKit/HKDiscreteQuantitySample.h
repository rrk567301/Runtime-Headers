@class NSDateInterval, HKQuantity;

@interface HKDiscreteQuantitySample : HKQuantitySample

@property (copy, nonatomic, setter=_setMinimumQuantity:) HKQuantity *minimumQuantity;
@property (copy, nonatomic, setter=_setAverageQuantity:) HKQuantity *averageQuantity;
@property (copy, nonatomic, setter=_setMaximumQuantity:) HKQuantity *maximumQuantity;
@property (copy, nonatomic, setter=_setMostRecentQuantity:) HKQuantity *mostRecentQuantity;
@property (copy, nonatomic, setter=_setMostRecentQuantityDateInterval:) NSDateInterval *mostRecentQuantityDateInterval;
@property (nonatomic) BOOL _hasMinimumQuantity;
@property (nonatomic) BOOL _hasMaximumQuantity;
@property (nonatomic) BOOL _hasMostRecentQuantity;
@property (nonatomic) BOOL _hasMostRecentQuantityDateInterval;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_isConcreteObjectClass;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)asJSONObject;
- (void).cxx_destruct;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned long long x1; })a0;

@end
