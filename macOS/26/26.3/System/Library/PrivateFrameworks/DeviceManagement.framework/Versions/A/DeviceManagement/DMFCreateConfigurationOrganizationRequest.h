@class NSString;

@interface DMFCreateConfigurationOrganizationRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSString *organizationDisplayName;
@property (copy, nonatomic) NSString *organizationType;

+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
