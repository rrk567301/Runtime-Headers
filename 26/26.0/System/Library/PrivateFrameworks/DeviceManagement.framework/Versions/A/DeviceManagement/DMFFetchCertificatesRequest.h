@interface DMFFetchCertificatesRequest : DMFTaskRequest

@property (nonatomic) BOOL managedOnly;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (Class)allowlistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
