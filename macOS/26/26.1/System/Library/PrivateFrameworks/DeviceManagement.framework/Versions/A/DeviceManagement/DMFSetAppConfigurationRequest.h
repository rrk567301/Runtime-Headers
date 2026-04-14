@class NSDictionary;

@interface DMFSetAppConfigurationRequest : DMFAppRequest

@property (copy, nonatomic) NSDictionary *configuration;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
