@interface PKIdentityElement : NSObject <NSCopying>

@property (class, readonly, nonatomic) PKIdentityElement *givenNameElement;
@property (class, readonly, nonatomic) PKIdentityElement *familyNameElement;
@property (class, readonly, nonatomic) PKIdentityElement *portraitElement;
@property (class, readonly, nonatomic) PKIdentityElement *addressElement;
@property (class, readonly, nonatomic) PKIdentityElement *heightElement;
@property (class, readonly, nonatomic) PKIdentityElement *weightElement;
@property (class, readonly, nonatomic) PKIdentityElement *eyeColorElement;
@property (class, readonly, nonatomic) PKIdentityElement *hairColorElement;
@property (class, readonly, nonatomic) PKIdentityElement *organDonorStatusElement;
@property (class, readonly, nonatomic) PKIdentityElement *veteranStatusElement;
@property (class, readonly, nonatomic) PKIdentityElement *issuingAuthorityElement;
@property (class, readonly, nonatomic) PKIdentityElement *documentIssueDateElement;
@property (class, readonly, nonatomic) PKIdentityElement *documentExpirationDateElement;
@property (class, readonly, nonatomic) PKIdentityElement *documentDHSComplianceStatusElement;
@property (class, readonly, nonatomic) PKIdentityElement *documentNumberElement;
@property (class, readonly, nonatomic) PKIdentityElement *drivingPrivilegesElement;
@property (class, readonly, nonatomic) PKIdentityElement *ageElement;
@property (class, readonly, nonatomic) PKIdentityElement *dateOfBirthElement;
@property (class, readonly, nonatomic) PKIdentityElement *sexElement;

+ (id)ageThresholdElementWithAge:(long long)a0;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;

@end
