@class HKQuantity, HKClinicalCodingCollection;

@interface HKMedicationIngredient : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKClinicalCodingCollection *substanceCodingCollection;
@property (readonly, copy, nonatomic) HKQuantity *numerator;
@property (readonly, copy, nonatomic) HKQuantity *denominator;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithSubstanceCodingCollection:(id)a0 numerator:(id)a1 denominator:(id)a2;

@end
