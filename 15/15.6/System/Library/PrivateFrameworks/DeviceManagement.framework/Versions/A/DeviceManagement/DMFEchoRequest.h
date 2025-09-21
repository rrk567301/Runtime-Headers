@class NSString;

@interface DMFEchoRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *echo;
@property (copy, nonatomic) NSString *resultStatus;

+ (char)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;
+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
