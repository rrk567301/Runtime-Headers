@interface DMFFetchProvisioningProfilesRequest : DMFTaskRequest

@property (nonatomic) BOOL managedOnly;

+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
