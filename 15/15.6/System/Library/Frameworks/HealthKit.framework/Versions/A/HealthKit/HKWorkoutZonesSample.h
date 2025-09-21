@class NSArray;

@interface HKWorkoutZonesSample : HKSample

@property (readonly, copy, nonatomic) NSArray *zones;

+ (char)supportsSecureCoding;
+ (char)_isConcreteObjectClass;
+ (char)supportsEquivalence;
+ (id)zonesSampleWithType:(id)a0 zones:(id)a1 device:(id)a2 metadata:(id)a3;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEquivalent:(id)a0;
- (char)_validateStartAndEnd:(id)a0 end:(id)a1 error:(id *)a2;
- (void)_setZones:(id)a0;
- (char)_validateFirstZone:(id)a0 error:(id *)a1;
- (char)_validateLastZone:(id)a0 error:(id *)a1;
- (char)_validateMiddleZones:(id)a0 previousEndQuantity:(id)a1 error:(id *)a2;
- (char)_validateUnit:(id)a0 error:(id *)a1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned long long x1; })a0;

@end
