@class NSString;

@interface CoreIDV.IdentityElementRawValueKeys : NSObject

@property (class, nonatomic, readonly) NSString *givenName;
@property (class, nonatomic, readonly) NSString *familyName;
@property (class, nonatomic, readonly) NSString *sex;
@property (class, nonatomic, readonly) NSString *portrait;
@property (class, nonatomic, readonly) NSString *address;
@property (class, nonatomic, readonly) NSString *height;
@property (class, nonatomic, readonly) NSString *weight;
@property (class, nonatomic, readonly) NSString *eyeColor;
@property (class, nonatomic, readonly) NSString *hairColor;
@property (class, nonatomic, readonly) NSString *organDonorStatus;
@property (class, nonatomic, readonly) NSString *veteranStatus;
@property (class, nonatomic, readonly) NSString *issuingAuthority;
@property (class, nonatomic, readonly) NSString *documentDHSComplianceStatus;
@property (class, nonatomic, readonly) NSString *documentExpirationDate;
@property (class, nonatomic, readonly) NSString *documentNumber;
@property (class, nonatomic, readonly) NSString *documentIssueDate;
@property (class, nonatomic, readonly) NSString *drivingPrivileges;
@property (class, nonatomic, readonly) NSString *age;
@property (class, nonatomic, readonly) NSString *dateOfBirth;
@property (class, nonatomic, readonly) NSString *signatureUsualMark;
@property (class, nonatomic, readonly) NSString *nationality;
@property (class, nonatomic, readonly) NSString *placeOfBirth;
@property (class, nonatomic, readonly) NSString *dhsTemporaryLawfulStatus;

+ (id)ageIsOver:(long long)a0;

- (void).cxx_destruct;
- (id)init;

@end
