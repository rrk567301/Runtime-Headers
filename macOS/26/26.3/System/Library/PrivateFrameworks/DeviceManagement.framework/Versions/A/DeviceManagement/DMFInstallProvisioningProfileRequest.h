@class NSString, NSData;

@interface DMFInstallProvisioningProfileRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *managingProfileIdentifier;
@property (copy, nonatomic) NSData *profileData;

+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
