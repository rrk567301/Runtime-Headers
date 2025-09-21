@class HKUnit;

@interface HKQuantity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=_unit) HKUnit *unit;
@property (readonly, nonatomic, getter=_value) double value;

+ (id)_quantityWithBeatsPerMinute:(double)a0;
+ (id)hk_quantityWithMinutes:(id)a0;
+ (id)hk_quantityWithSeconds:(id)a0;
+ (id)quantityWithUnit:(id)a0 doubleValue:(double)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)asJSONObject;
- (double)_beatsPerMinute;
- (char)isEqualToQuantity:(id)a0 withAccuracy:(id)a1;
- (char)_isZero;
- (double)_baselineRelativeDoubleValueForUnit:(id)a0;
- (id)_foundationMeasurement;
- (id)_initWithUnit:(id)a0 doubleValue:(double)a1;
- (id)_quantityByAddingQuantity:(id)a0;
- (double)_valueScaledForDisplay;
- (id)asJSONObjectForUnit:(id)a0;
- (double)doubleValueForUnit:(id)a0;
- (char)hk_isGreaterThanQuantity:(id)a0;
- (char)hk_isLessThanQuantity:(id)a0;
- (id)hk_minutesNumber;
- (id)hk_secondsNumber;
- (char)isCompatibleWithUnit:(id)a0;

@end
