@class NSString, HKContactsLensSpecification;

@interface HKContactsPrescription : HKVisionPrescription <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) HKContactsLensSpecification *rightEye;
@property (readonly, copy, nonatomic) HKContactsLensSpecification *leftEye;
@property (readonly, copy, nonatomic) NSString *brand;

+ (char)_validateBaseCurve:(id)a0 error:(id *)a1;
+ (char)_validateDiameter:(id)a0 error:(id *)a1;
+ (id)prescriptionWithRightEyeSpecification:(id)a0 leftEyeSpecification:(id)a1 brand:(id)a2 dateIssued:(id)a3 expirationDate:(id)a4 device:(id)a5 metadata:(id)a6;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setBrand:(id)a0;
- (void)_setLeftEyeSpecification:(id)a0;
- (void)_setRightEyeSpecification:(id)a0;
- (char)_validateContactsFieldsWithError:(id *)a0;
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
