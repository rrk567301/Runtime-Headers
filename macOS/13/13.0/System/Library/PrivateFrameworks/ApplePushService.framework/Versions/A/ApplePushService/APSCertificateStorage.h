@interface APSCertificateStorage : NSObject

+ (BOOL)hasEntitlement:(id)a0;
+ (id)getUniqueHostIdentifier;
+ (id)commonNameForCertificate:(struct __SecCertificate { } *)a0;
+ (struct __SecCertificate { } *)copyCertificateForName:(id)a0;
+ (struct __SecIdentity { } *)identityForName:(id)a0;
+ (struct __SecCertificate { } *)certificateForIdentity:(struct __SecIdentity { } *)a0;
+ (id)identityExpirationDate:(struct __SecIdentity { } *)a0;
+ (struct __SecIdentity { } *)clientIdentity;
+ (struct __SecKeychainItem { } *)copyActivationRecordKeychainItemForName:(id)a0;
+ (id)activationRecordForName:(id)a0;
+ (id)certificateName;
+ (struct __SecKeychain { } *)unlockAndCopyKeychain;
+ (void)flushKeychain;
+ (struct __SecKeychain { } *)getKeychain;

@end
