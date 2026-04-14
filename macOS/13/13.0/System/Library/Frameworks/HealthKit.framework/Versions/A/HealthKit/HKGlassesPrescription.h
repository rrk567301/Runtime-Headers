@class HKGlassesLensSpecification;

@interface HKGlassesPrescription : HKVisionPrescription

@property (readonly, copy, nonatomic) HKGlassesLensSpecification *rightEye;
@property (readonly, copy, nonatomic) HKGlassesLensSpecification *leftEye;

+ (BOOL)supportsSecureCoding;
+ (id)prescriptionWithRightEyeSpecification:(id)a0 leftEyeSpecification:(id)a1 dateIssued:(id)a2 expirationDate:(id)a3 device:(id)a4 metadata:(id)a5;
+ (BOOL)_validatePrism:(id)a0 error:(id *)a1;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void)_setRightEyeSpecification:(id)a0;
- (void)_setLeftEyeSpecification:(id)a0;
- (id)leftSphere;
- (id)rightSphere;
- (id)leftCylinder;
- (id)rightCylinder;
- (id)leftAxis;
- (id)rightAxis;
- (id)leftAddPower;
- (id)rightAddPower;
- (BOOL)_validateGlassesFieldsWithError:(id *)a0;

@end
