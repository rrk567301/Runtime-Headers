@class NSString;

@interface DMFRemoveProvisioningProfileRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *profileIdentifier;
@property (copy, nonatomic) NSString *managingProfileIdentifier;

+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
