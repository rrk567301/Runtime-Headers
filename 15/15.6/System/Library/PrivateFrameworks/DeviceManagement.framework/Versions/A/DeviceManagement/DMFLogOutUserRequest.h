@interface DMFLogOutUserRequest : DMFTaskRequest

@property (nonatomic) char forceLogout;

+ (char)supportsSecureCoding;
+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
