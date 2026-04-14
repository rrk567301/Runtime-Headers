@class NSString;

@interface DMFEchoRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *echo;
@property (copy, nonatomic) NSString *resultStatus;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (Class)allowlistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
