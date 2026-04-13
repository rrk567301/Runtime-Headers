@class NSString;

@interface DMFFetchAvailableOSUpdatesRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *productVersion;
@property (nonatomic) BOOL useDelay;

+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (Class)whitelistedClassForResultObject;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
