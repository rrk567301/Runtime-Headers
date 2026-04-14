@class HKMedicalCoding;

@interface HKMedicalCodingConceptSelection : HKConceptSelection

@property (readonly, copy, nonatomic) HKMedicalCoding *coding;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithMedicalCoding:(id)a0;

@end
