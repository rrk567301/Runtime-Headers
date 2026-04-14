@class HKMedicalCoding;

@interface HKMedicalCodingConceptSelection : HKConceptSelection

@property (readonly, copy, nonatomic) HKMedicalCoding *coding;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithMedicalCoding:(id)a0;

@end
