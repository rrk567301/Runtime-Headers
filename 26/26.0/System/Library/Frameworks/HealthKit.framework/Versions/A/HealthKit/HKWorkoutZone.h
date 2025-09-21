@class NSUUID, HKObjectType, HKQuantity;

@interface HKWorkoutZone : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double timeInZone;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) HKQuantity *startQuantity;
@property (readonly, copy, nonatomic) HKQuantity *endQuantity;
@property (readonly, copy, nonatomic) HKObjectType *type;

+ (id)_quantityFromValue:(double)a0 objectType:(id)a1;
+ (id)_valueForQuantity:(id)a0 objectType:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_setTimeInZone:(double)a0;
- (id)_initWithIdentifier:(id)a0 type:(id)a1 startQuantity:(id)a2 endQuantity:(id)a3;
- (void)_validateType;
- (id)initFirstZoneWithType:(id)a0 endQuantity:(id)a1;
- (id)initLastZoneWithType:(id)a0 startQuantity:(id)a1;
- (id)initWithIdentifier:(id)a0 startQuantity:(id)a1 endQuantity:(id)a2;
- (id)initWithType:(id)a0 startQuantity:(id)a1 endQuantity:(id)a2;

@end
