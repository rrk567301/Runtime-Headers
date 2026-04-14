@class NSDictionary, NSString;
@protocol ACMPrincipalPreferences, ACMPreferencesStore;

@interface ACMEnvironmentPreferences : ACMPreferences <ACMEnvironmentPreferences>

@property (retain) NSDictionary *environmentSpecification;
@property (retain) id<ACMPrincipalPreferences> principalPreferences;
@property (readonly, retain) NSString *realm;
@property (retain) id<ACMPreferencesStore> preferencesStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedRealms;
+ (id)environmentSpecifications;
+ (BOOL)isSupportedRealm:(id)a0;
+ (id)environmentPreferencesWithRealm:(id)a0;

- (void)dealloc;
- (id)publicKeyVersion;
- (void)setPublicKeyVersion:(id)a0;
- (id)realmName;
- (id)iForgotURL;
- (id)initWithRealm:(id)a0;
- (id)serverHosts;
- (id)serverAttemptsDelays;
- (id)principalPreferencesWithUserName:(id)a0;
- (id)environmentSpecificationForRealm:(id)a0;
- (id)publicKeyCertificateName;
- (void)setPublicKeyCertificateName:(id)a0;
- (id)realmShortName;
- (id)authenticateURLString;
- (id)verifyTicketURLString;
- (id)defaultPublicKeyString;
- (id)getTrustedDevicesURLString;
- (id)generateAndSendSecCodeURLString;
- (id)verifySecurityCodeURLString;
- (id)verifyRecoveryKeyURLString;
- (id)provisionedDeviceIdentifier;
- (id)myAppleIDURL;
- (id)createPrincipalPreferencesWithUserName:(id)a0;

@end
