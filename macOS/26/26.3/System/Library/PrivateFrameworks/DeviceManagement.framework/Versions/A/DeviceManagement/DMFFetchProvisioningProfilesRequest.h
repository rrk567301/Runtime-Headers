@interface DMFFetchProvisioningProfilesRequest : DMFTaskRequest

@property (nonatomic) BOOL managedOnly;

+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (Class)allowlistedClassForResultObject;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
