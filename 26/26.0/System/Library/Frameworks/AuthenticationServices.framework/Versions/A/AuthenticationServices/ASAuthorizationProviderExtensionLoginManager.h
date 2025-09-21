@class ASAuthorizationProviderExtensionLoginConfiguration, NSString, NSDictionary, ASAuthorizationProviderExtensionUserLoginConfiguration, POLoginManager;

@interface ASAuthorizationProviderExtensionLoginManager : NSObject

@property (readonly, nonatomic) POLoginManager *loginManager;
@property (readonly, getter=isDeviceRegistered) BOOL deviceRegistered;
@property (readonly, getter=isUserRegistered) BOOL userRegistered;
@property (readonly, copy, nonatomic) NSString *registrationToken;
@property (readonly, nonatomic) long long authenticationMethod;
@property (readonly, copy, nonatomic) NSDictionary *extensionData;
@property (copy, nonatomic) NSString *loginUserName;
@property (readonly, copy, nonatomic) ASAuthorizationProviderExtensionUserLoginConfiguration *userLoginConfiguration;
@property (copy, nonatomic) NSDictionary *ssoTokens;
@property (readonly, copy, nonatomic) ASAuthorizationProviderExtensionLoginConfiguration *loginConfiguration;

- (void)presentRegistrationViewControllerWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithLoginManager:(id)a0;
- (void)resetDeviceKeys;
- (void)attestKey:(long long)a0 clientDataHash:(id)a1 completion:(id /* block */)a2;
- (void)attestPendingKey:(long long)a0 clientDataHash:(id)a1 completion:(id /* block */)a2;
- (struct __SecKey { } *)beginKeyRotationForKeyType:(long long)a0;
- (void)completeKeyRotationForKeyType:(long long)a0;
- (struct __SecIdentity { } *)copyIdentityForKeyType:(long long)a0;
- (struct __SecKey { } *)copyKeyForKeyType:(long long)a0;
- (void)decryptionKeysNeedRepair;
- (void)deviceRegistrationsNeedsRepair;
- (void)resetKeys;
- (void)resetUserSecureEnclaveKey;
- (void)saveCertificate:(struct __SecCertificate { } *)a0 keyType:(long long)a1;
- (BOOL)saveLoginConfiguration:(id)a0 error:(id *)a1;
- (BOOL)saveUserLoginConfiguration:(id)a0 error:(id *)a1;
- (void)userNeedsReauthenticationWithCompletion:(id /* block */)a0;
- (void)userRegistrationsNeedsRepair;

@end
