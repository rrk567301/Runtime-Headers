@interface DMFLogOutUserRequest : DMFTaskRequest

@property (nonatomic) BOOL forceLogout;

+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
