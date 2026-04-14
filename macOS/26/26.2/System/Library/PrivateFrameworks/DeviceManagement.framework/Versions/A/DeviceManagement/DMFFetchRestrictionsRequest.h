@interface DMFFetchRestrictionsRequest : DMFTaskRequest

@property (nonatomic) BOOL includeProfileRestrictions;
@property (nonatomic) unsigned long long profileFilterFlags;

+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (Class)allowlistedClassForResultObject;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;

@end
