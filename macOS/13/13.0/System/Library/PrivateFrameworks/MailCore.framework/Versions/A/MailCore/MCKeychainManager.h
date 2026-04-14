@interface MCKeychainManager : NSObject

+ (struct __SecCertificate { } *)copyEncryptionCertificateForAddress:(id)a0;
+ (id)sessionTrustedCertificatesForHost:(id)a0;
+ (void)setSessionTrustedCertificates:(id)a0 forHost:(id)a1;
+ (id)copyTLSClientIdentities;
+ (struct __SecIdentity { } *)copySigningIdentityForAddress:(id)a0 error:(id *)a1;
+ (struct __SecPolicy { } *)createSMIMEPolicyForAddress:(id)a0 keyUsage:(void *)a1 ignoreExpiration:(BOOL)a2;
+ (struct __SecPolicy { } *)createSMIMEPolicyForAddress:(id)a0 keyUsage:(void *)a1;

@end
