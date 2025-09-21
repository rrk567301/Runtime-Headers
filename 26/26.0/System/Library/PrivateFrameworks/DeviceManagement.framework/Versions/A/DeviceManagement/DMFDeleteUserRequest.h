@class NSString;

@interface DMFDeleteUserRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *username;
@property (nonatomic) BOOL forceDeletion;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
