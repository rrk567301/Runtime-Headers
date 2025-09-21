@class HKAudiogramSensitivityPointClampingRange, HKQuantity;

@interface HKAudiogramSensitivityTest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) HKQuantity *clampedSensitivity;
@property (readonly, copy, nonatomic) HKQuantity *sensitivity;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) char masked;
@property (readonly, nonatomic) long long side;
@property (readonly, copy, nonatomic) HKAudiogramSensitivityPointClampingRange *clampingRange;

+ (id)_rangeViolationMin:(id)a0 max:(id)a1 value:(id)a2;
+ (char)validateConductionType:(long long)a0 side:(long long)a1 error:(id *)a2;
+ (char)validateSensitivity:(id)a0 error:(id *)a1;
+ (char)validateUnitForSensitivity:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithSensitivity:(id)a0 type:(long long)a1 masked:(char)a2 side:(long long)a3 clampingRange:(id)a4;
- (id)initWithSensitivity:(id)a0 type:(long long)a1 masked:(char)a2 side:(long long)a3 clampingRange:(id)a4 error:(id *)a5;

@end
