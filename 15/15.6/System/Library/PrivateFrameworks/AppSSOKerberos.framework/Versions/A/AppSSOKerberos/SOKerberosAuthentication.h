@class SOKeychainHelper, NSString, NSDistributedNotificationCenter, SOKerberosHelper, SOADSiteDiscovery;

@interface SOKerberosAuthentication : NSObject

@property (retain, nonatomic) NSString *realm;
@property char siteDiscoveryInProgress;
@property (retain) SOKerberosHelper *kerberosHelper;
@property (retain) SOKeychainHelper *keychainHelper;
@property (retain) SOADSiteDiscovery *siteDiscovery;
@property (retain, nonatomic) NSDistributedNotificationCenter *notificationCenter;

+ (void)savePacValues:(id)a0 atLogin:(char)a1;
+ (void)saveValuesForPlugins:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)findExistingCredentialUsingContext:(id)a0 returningCredential:(struct gss_cred_id_t_desc_struct **)a1 orError:(id *)a2;
- (void)_determineSiteCodeUsingDispatchGroup:(id)a0 bundleIdentifier:(id)a1 auditTokenData:(id)a2 networkFingerprint:(id)a3 requireTLSForLDAP:(char)a4;
- (unsigned long long)attemptKerberosWithContext:(id)a0 returningToken:(id *)a1 orError:(id *)a2;
- (char)changePasswordWithContext:(id)a0 withError:(id *)a1;
- (unsigned long long)createNewCredentialUsingContext:(id)a0 returningCredential:(struct gss_cred_id_t_desc_struct **)a1 orError:(id *)a2;
- (void)determineSiteCodeUsingContext:(id)a0;
- (id)initWithRealm:(id)a0;
- (unsigned long long)mapErrorToKnownError:(id)a0;
- (char)refreshPacValuesWithContext:(id)a0 atLogin:(char)a1 error:(id *)a2;
- (char)refreshPacValuesWithContext:(id)a0 credential:(struct gss_cred_id_t_desc_struct { } *)a1 atLogin:(char)a2;
- (id)retrieveCachedSiteCodeFromCacheForBundleIdentifier:(id)a0 networkFingerprint:(id)a1;
- (void)setSiteCodeUsingContext:(id)a0;
- (void)triggerVPNIfNeededUsingRealm:(id)a0 bundleIdentifier:(id)a1 auditToken:(id)a2;

@end
