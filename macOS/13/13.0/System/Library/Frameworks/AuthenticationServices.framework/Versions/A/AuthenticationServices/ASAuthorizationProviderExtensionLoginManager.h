@class ASAuthorizationProviderExtensionLoginConfiguration, NSString, NSDictionary, POLoginManager;

@interface ASAuthorizationProviderExtensionLoginManager : NSObject

@property (readonly, nonatomic) POLoginManager *loginManager;
@property (readonly, getter=isDeviceRegistered) BOOL deviceRegistered;
@property (readonly, getter=isUserRegistered) BOOL userRegistered;
@property (readonly, copy, nonatomic) NSString *registrationToken;
@property (copy, nonatomic) NSString *loginUserName;
@property (copy, nonatomic) NSDictionary *ssoTokens;
@property (readonly, copy, nonatomic) ASAuthorizationProviderExtensionLoginConfiguration *loginConfiguration;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithLoginManager:(id)a0;
- (void)userNeedsReauthenticationWithCompletion:(id /* block */)a0;
- (BOOL)saveLoginConfiguration:(id)a0 error:(id *)a1;
- (void)saveCertificate:(struct __SecCertificate { } *)a0 keyType:(long long)a1;
- (struct __SecKey { } *)copyKeyForKeyType:(long long)a0;
- (struct __SecIdentity { } *)copyIdentityForKeyType:(long long)a0;
- (void)deviceRegistrationsNeedsRepair;
- (void)userRegistrationsNeedsRepair;
- (void)resetKeys;
- (void)presentRegistrationViewControllerWithCompletion:(id /* block */)a0;

@end
