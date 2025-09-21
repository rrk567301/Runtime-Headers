@class NSString;

@interface DMFFetchAvailableOSUpdatesRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *productVersion;
@property (nonatomic) char useDelay;

+ (char)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;
+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
