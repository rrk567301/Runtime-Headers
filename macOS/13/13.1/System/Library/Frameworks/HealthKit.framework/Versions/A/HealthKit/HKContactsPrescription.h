@class NSString, HKContactsLensSpecification;

@interface HKContactsPrescription : HKVisionPrescription

@property (readonly, copy, nonatomic) HKContactsLensSpecification *rightEye;
@property (readonly, copy, nonatomic) HKContactsLensSpecification *leftEye;
@property (readonly, copy, nonatomic) NSString *brand;

+ (BOOL)supportsSecureCoding;
+ (id)prescriptionWithRightEyeSpecification:(id)a0 leftEyeSpecification:(id)a1 brand:(id)a2 dateIssued:(id)a3 expirationDate:(id)a4 device:(id)a5 metadata:(id)a6;
+ (BOOL)_validateBaseCurve:(id)a0 error:(id *)a1;
+ (BOOL)_validateDiameter:(id)a0 error:(id *)a1;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_setBrand:(id)a0;
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
- (BOOL)_validateContactsFieldsWithError:(id *)a0;

@end
