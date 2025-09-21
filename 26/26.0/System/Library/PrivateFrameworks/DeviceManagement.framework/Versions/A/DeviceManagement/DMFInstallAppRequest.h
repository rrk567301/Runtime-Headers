@interface DMFInstallAppRequest : DMFAppRequest

@property (nonatomic) unsigned long long licenseType;
@property (nonatomic) BOOL allowFreePurchases;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
