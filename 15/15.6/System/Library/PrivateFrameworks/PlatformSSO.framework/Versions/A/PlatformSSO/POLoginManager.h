@class NSString, NSDictionary, POUserLoginConfiguration, POLoginConfiguration, POServiceLoginManagerConnection;
@protocol SOHostExtensionContextProtocol;

@interface POLoginManager : NSObject <NSSecureCoding> {
    POServiceLoginManagerConnection *_serviceConnection;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, getter=isDeviceRegistered) char deviceRegistered;
@property (readonly, getter=isUserRegistered) char userRegistered;
@property (readonly, copy, nonatomic) NSString *registrationToken;
@property (copy, nonatomic) NSDictionary *extensionData;
@property (retain, nonatomic) NSString *loginUserName;
@property (readonly, copy, nonatomic) POUserLoginConfiguration *userLoginConfiguration;
@property (copy, nonatomic) NSDictionary *ssoTokens;
@property (readonly, copy, nonatomic) POLoginConfiguration *loginConfiguration;
@property (readonly, nonatomic) struct __SecCertificate { } *deviceAttestationCertificate;
@property (retain) id<SOHostExtensionContextProtocol> hostExtensionContext;
@property (retain, nonatomic) NSString *requestIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)resetDeviceKeys;
- (void)attestKey:(long long)a0 clientData:(id)a1 completion:(id /* block */)a2;
- (void)attestPendingKey:(long long)a0 clientData:(id)a1 completion:(id /* block */)a2;
- (void)completeRotationKeyForKeyType:(long long)a0;
- (struct __SecIdentity { } *)copyIdentityForKeyType:(long long)a0;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)copyKeyForKeyType:(long long)a0;
- (void)deviceRegistrationsNeedsRepair;
- (void)presentRegistrationViewControllerWithCompletion:(id /* block */)a0;
- (void)resetKeys;
- (void)resetUserSecureEnclaveKey;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)rotateKeyForKeyType:(long long)a0;
- (void)saveCertificate:(struct __SecCertificate { } *)a0 keyType:(long long)a1;
- (char)saveLoginConfiguration:(id)a0 error:(id *)a1;
- (char)saveUserLoginConfiguration:(id)a0 error:(id *)a1;
- (void)userNeedsReauthentication;
- (void)userNeedsReauthenticationWithCompletion:(id /* block */)a0;
- (void)userRegistrationsNeedsRepair;
- (id)initWithUid:(unsigned int)a0;

@end
