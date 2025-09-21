@class HKGlassesLensSpecification;

@interface HKGlassesPrescription : HKVisionPrescription <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) HKGlassesLensSpecification *rightEye;
@property (readonly, copy, nonatomic) HKGlassesLensSpecification *leftEye;

+ (char)_validatePrism:(id)a0 error:(id *)a1;
+ (id)prescriptionWithRightEyeSpecification:(id)a0 leftEyeSpecification:(id)a1 dateIssued:(id)a2 expirationDate:(id)a3 device:(id)a4 metadata:(id)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setLeftEyeSpecification:(id)a0;
- (void)_setRightEyeSpecification:(id)a0;
- (char)_validateGlassesFieldsWithError:(id *)a0;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned long long x1; })a0;
- (id)leftAddPower;
- (id)leftAxis;
- (id)leftCylinder;
- (id)leftSphere;
- (id)rightAddPower;
- (id)rightAxis;
- (id)rightCylinder;
- (id)rightSphere;

@end
