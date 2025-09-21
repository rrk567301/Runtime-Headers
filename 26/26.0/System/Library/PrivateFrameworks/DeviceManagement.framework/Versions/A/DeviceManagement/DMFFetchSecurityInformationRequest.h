@class NSArray;

@interface DMFFetchSecurityInformationRequest : DMFTaskRequest

@property (class, readonly, copy, nonatomic) NSArray *allPlatformSecurityInfoKeys;
@property (class, readonly, copy, nonatomic) NSArray *iOSSecurityInfoKeys;
@property (class, readonly, copy, nonatomic) NSArray *macOSSecurityInfoKeys;
@property (class, readonly, copy, nonatomic) NSArray *tvOSSecurityInfoKeys;
@property (class, readonly, copy, nonatomic) NSArray *watchOSSecurityInfoKeys;
@property (class, readonly, copy, nonatomic) NSArray *currentPlatformSecurityInfoKeys;

@property (copy, nonatomic) NSArray *infoKeys;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (Class)allowlistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
