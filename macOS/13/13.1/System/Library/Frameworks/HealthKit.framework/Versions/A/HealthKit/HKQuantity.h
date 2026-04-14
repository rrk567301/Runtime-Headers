@class HKUnit;

@interface HKQuantity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_unit) HKUnit *unit;
@property (readonly, nonatomic, getter=_value) double value;

+ (id)hk_quantityWithSeconds:(id)a0;
+ (id)hk_quantityWithMinutes:(id)a0;
+ (id)quantityWithUnit:(id)a0 doubleValue:(double)a1;
+ (id)_quantityWithBeatsPerMinute:(double)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (double)_beatsPerMinute;
- (id)hk_secondsNumber;
- (id)hk_minutesNumber;
- (id)_initWithUnit:(id)a0 doubleValue:(double)a1;
- (double)doubleValueForUnit:(id)a0;
- (BOOL)isCompatibleWithUnit:(id)a0;
- (id)_quantityByAddingQuantity:(id)a0;
- (BOOL)_isZero;
- (id)_foundationMeasurement;
- (BOOL)hk_isLessThanQuantity:(id)a0;
- (BOOL)hk_isGreaterThanQuantity:(id)a0;
- (double)_valueScaledForDisplay;
- (double)_baselineRelativeDoubleValueForUnit:(id)a0;
- (id)asJSONObjectForUnit:(id)a0;

@end
