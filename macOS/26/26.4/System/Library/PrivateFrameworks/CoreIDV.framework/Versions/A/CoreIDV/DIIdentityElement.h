@class NSString;

@interface DIIdentityElement : NSObject <NSCopying>

@property (class, readonly, nonatomic) DIIdentityElement *givenNameElement;
@property (class, readonly, nonatomic) DIIdentityElement *familyNameElement;
@property (class, readonly, nonatomic) DIIdentityElement *sexElement;
@property (class, readonly, nonatomic) DIIdentityElement *portraitElement;
@property (class, readonly, nonatomic) DIIdentityElement *addressElement;
@property (class, readonly, nonatomic) DIIdentityElement *heightElement;
@property (class, readonly, nonatomic) DIIdentityElement *weightElement;
@property (class, readonly, nonatomic) DIIdentityElement *eyeColorElement;
@property (class, readonly, nonatomic) DIIdentityElement *hairColorElement;
@property (class, readonly, nonatomic) DIIdentityElement *organDonorStatusElement;
@property (class, readonly, nonatomic) DIIdentityElement *veteranStatusElement;
@property (class, readonly, nonatomic) DIIdentityElement *issuingAuthorityElement;
@property (class, readonly, nonatomic) DIIdentityElement *documentIssueDateElement;
@property (class, readonly, nonatomic) DIIdentityElement *documentDHSComplianceStatusElement;
@property (class, readonly, nonatomic) DIIdentityElement *documentExpirationDateElement;
@property (class, readonly, nonatomic) DIIdentityElement *documentNumberElement;
@property (class, readonly, nonatomic) DIIdentityElement *drivingPrivilegesElement;
@property (class, readonly, nonatomic) DIIdentityElement *ageElement;
@property (class, readonly, nonatomic) DIIdentityElement *dateOfBirthElement;
@property (class, readonly, nonatomic) DIIdentityElement *signatureUsualMarkElement;
@property (class, readonly, nonatomic) DIIdentityElement *placeOfBirthElement;
@property (class, readonly, nonatomic) DIIdentityElement *nationalityElement;
@property (class, readonly, nonatomic) DIIdentityElement *dhsTemporaryLawfulStatusElement;

@property (readonly, nonatomic) NSString *identifier;

+ (id)ageThresholdElementWithAge:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
