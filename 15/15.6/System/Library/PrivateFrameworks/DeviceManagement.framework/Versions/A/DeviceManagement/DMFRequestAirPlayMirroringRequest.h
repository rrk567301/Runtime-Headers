@class NSString;

@interface DMFRequestAirPlayMirroringRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *destinationName;
@property (copy, nonatomic) NSString *destinationDeviceID;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) char force;
@property (nonatomic) double scanWaitInterval;

+ (char)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;
+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
