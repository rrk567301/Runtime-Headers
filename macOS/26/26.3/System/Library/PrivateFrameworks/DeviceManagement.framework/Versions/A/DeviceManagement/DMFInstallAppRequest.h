@interface DMFInstallAppRequest : DMFAppRequest

@property (nonatomic) unsigned long long licenseType;
@property (nonatomic) BOOL allowFreePurchases;

+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
