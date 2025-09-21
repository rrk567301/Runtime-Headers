@class NSString;

@interface DMFRemoveProvisioningProfileRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *profileIdentifier;
@property (copy, nonatomic) NSString *managingProfileIdentifier;

+ (char)supportsSecureCoding;
+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
