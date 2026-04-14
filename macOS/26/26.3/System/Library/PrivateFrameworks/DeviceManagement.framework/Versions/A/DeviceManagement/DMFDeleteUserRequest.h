@class NSString;

@interface DMFDeleteUserRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *username;
@property (nonatomic) BOOL forceDeletion;

+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
