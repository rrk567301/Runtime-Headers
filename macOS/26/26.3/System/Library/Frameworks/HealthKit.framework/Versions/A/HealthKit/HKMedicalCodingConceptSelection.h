@class HKMedicalCoding;

@interface HKMedicalCodingConceptSelection : HKConceptSelection

@property (readonly, copy, nonatomic) HKMedicalCoding *coding;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMedicalCoding:(id)a0;

@end
