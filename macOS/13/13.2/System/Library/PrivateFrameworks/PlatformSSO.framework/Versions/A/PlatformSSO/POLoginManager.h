@class NSString, NSDictionary, POLoginConfiguration, POServiceLoginManagerConnection;
@protocol SOHostExtensionContextProtocol;

@interface POLoginManager : NSObject <NSSecureCoding> {
    POServiceLoginManagerConnection *_serviceConnection;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isDeviceRegistered) BOOL deviceRegistered;
@property (readonly, getter=isUserRegistered) BOOL userRegistered;
@property (readonly, copy, nonatomic) NSString *registrationToken;
@property (retain, nonatomic) NSString *loginUserName;
@property (copy, nonatomic) NSDictionary *ssoTokens;
@property (readonly, copy, nonatomic) POLoginConfiguration *loginConfiguration;
@property (readonly, nonatomic) struct __SecCertificate { } *deviceAttestationCertificate;
@property (retain) id<SOHostExtensionContextProtocol> hostExtensionContext;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)userNeedsReauthentication;
- (void)userNeedsReauthenticationWithCompletion:(id /* block */)a0;
- (BOOL)saveLoginConfiguration:(id)a0 error:(id *)a1;
- (void)saveCertificate:(struct __SecCertificate { } *)a0 keyType:(long long)a1;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)copyKeyForKeyType:(long long)a0;
- (struct __SecIdentity { } *)copyIdentityForKeyType:(long long)a0;
- (void)deviceRegistrationsNeedsRepair;
- (void)userRegistrationsNeedsRepair;
- (void)resetKeys;
- (void)presentRegistrationViewControllerWithCompletion:(id /* block */)a0;
- (void)attestKey:(long long)a0 clientDataHash:(id)a1 completion:(id /* block */)a2;
- (struct __SecCertificate { } *)copyDeviceAttestationCertificate;

@end
