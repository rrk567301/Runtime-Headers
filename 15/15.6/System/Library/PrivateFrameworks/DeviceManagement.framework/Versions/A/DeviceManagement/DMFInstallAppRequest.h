@interface DMFInstallAppRequest : DMFAppRequest

@property (nonatomic) unsigned long long licenseType;
@property (nonatomic) char allowFreePurchases;

+ (char)supportsSecureCoding;
+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
