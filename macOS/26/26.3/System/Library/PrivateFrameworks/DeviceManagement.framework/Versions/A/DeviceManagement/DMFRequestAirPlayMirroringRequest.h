@class NSString;

@interface DMFRequestAirPlayMirroringRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *destinationName;
@property (copy, nonatomic) NSString *destinationDeviceID;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) BOOL force;
@property (nonatomic) double scanWaitInterval;

+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
