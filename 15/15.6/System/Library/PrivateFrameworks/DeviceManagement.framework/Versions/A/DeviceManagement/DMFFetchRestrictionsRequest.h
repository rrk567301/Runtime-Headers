@interface DMFFetchRestrictionsRequest : DMFTaskRequest

@property (nonatomic) char includeProfileRestrictions;
@property (nonatomic) unsigned long long profileFilterFlags;

+ (char)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;
+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
