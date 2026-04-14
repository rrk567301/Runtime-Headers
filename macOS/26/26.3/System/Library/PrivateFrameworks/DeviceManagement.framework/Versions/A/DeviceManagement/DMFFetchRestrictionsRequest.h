@interface DMFFetchRestrictionsRequest : DMFTaskRequest

@property (nonatomic) BOOL includeProfileRestrictions;
@property (nonatomic) unsigned long long profileFilterFlags;

+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (Class)allowlistedClassForResultObject;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
