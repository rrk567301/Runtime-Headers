@class ASAuthorizationProviderExtensionLoginConfiguration, NSString, NSDictionary, POLoginManager;

@interface ASAuthorizationProviderExtensionLoginManager : NSObject

@property (readonly, nonatomic) POLoginManager *loginManager;
@property (readonly, getter=isDeviceRegistered) BOOL deviceRegistered;
@property (readonly, getter=isUserRegistered) BOOL userRegistered;
@property (readonly, copy, nonatomic) NSString *registrationToken;
@property (copy, nonatomic) NSString *loginUserName;
@property (copy, nonatomic) NSDictionary *ssoTokens;
@property (readonly, copy, nonatomic) ASAuthorizationProviderExtensionLoginConfiguration *loginConfiguration;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithLoginManager:(id)a0;
- (struct __SecIdentity { } *)copyIdentityForKeyType:(long long)a0;
- (struct __SecKey { } *)copyKeyForKeyType:(long long)a0;
- (void)deviceRegistrationsNeedsRepair;
- (void)presentRegistrationViewControllerWithCompletion:(id /* block */)a0;
- (void)resetKeys;
- (void)saveCertificate:(struct __SecCertificate { } *)a0 keyType:(long long)a1;
- (BOOL)saveLoginConfiguration:(id)a0 error:(id *)a1;
- (void)userNeedsReauthenticationWithCompletion:(id /* block */)a0;
- (void)userRegistrationsNeedsRepair;

@end
