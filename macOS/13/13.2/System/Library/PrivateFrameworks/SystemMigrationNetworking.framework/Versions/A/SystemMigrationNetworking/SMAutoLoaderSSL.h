@interface SMAutoLoaderSSL : NSObject

+ (struct __SecIdentity { } *)clientIdentity;
+ (id)keychainPath;
+ (struct __SecIdentity { } *)serverIdentity;
+ (void)unlockIdentityKeychain;
+ (unsigned long long)passCodeFromServerKeyData:(id)a0 clientKeyData:(id)a1;
+ (void)userRespondedToPasscode:(unsigned long long)a0;
+ (void)deleteKeychain;
+ (void)persistKeychainAndCertificates:(BOOL)a0;
+ (id)identitiesMatchingPrefix:(id)a0;
+ (id)publicKeyDataFromIdentity:(struct __SecIdentity { } *)a0;
+ (id)publicKeyDataFromCertificate:(struct __SecCertificate { } *)a0;
+ (id)txtRecordPublicKeyValuesWithData:(id)a0;
+ (id)dataWithTxtRecordPublicKeyValues:(id)a0;
+ (BOOL)persistKeychainAndCertificates;
+ (BOOL)doSynchronousPairingWithPasscode:(unsigned long long)a0;
+ (struct __SecCertificate { } *)generateSelfSignedCertificate:(id)a0 forSSLServer:(BOOL)a1;
+ (struct __SecKeychain { } *)sessionKeychain;

@end
