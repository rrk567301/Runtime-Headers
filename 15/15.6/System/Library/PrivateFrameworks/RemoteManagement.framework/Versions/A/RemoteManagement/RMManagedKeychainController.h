@class NSString, RMSharedLock;

@interface RMManagedKeychainController : NSObject

@property (class, readonly, nonatomic) RMSharedLock *lock;
@property (class, readonly, nonatomic) RMSharedLock *modifierLock;

@property (nonatomic) long long scope;
@property (copy, nonatomic) NSString *personaID;

+ (id)newManagedKeychainControllerForScope:(long long)a0 personaID:(id)a1;

- (void).cxx_destruct;
- (id)debugState;
- (void)_postNotification;
- (id)assetKeysForCertificatesAndReturnError:(id *)a0;
- (id)assetKeysForIdentitiesAndReturnError:(id *)a0;
- (id)assetKeysForPasswordsAndReturnError:(id *)a0;
- (id)assignCertificateForAssetKey:(id)a0 toConfigurationKey:(id)a1 access:(void *)a2 group:(id)a3 error:(id *)a4;
- (id)assignIdentityForAssetKey:(id)a0 configurationKey:(id)a1 access:(void *)a2 group:(id)a3 error:(id *)a4;
- (id)assignPasswordForAssetKey:(id)a0 toConfigurationKey:(id)a1 access:(void *)a2 group:(id)a3 returnUserName:(id *)a4 error:(id *)a5;
- (id)certificatePersistentRefForAssetKey:(id)a0 error:(id *)a1;
- (id)certificatePersistentRefsForAssetKeys:(id)a0 error:(id *)a1;
- (char)hasDataForAssetKey:(id)a0;
- (id)initWithScope:(long long)a0 personaID:(id)a1;
- (void)lockBeforeModifyingKeychain;
- (char)removedKeychainItemsForAssetKey:(id)a0 error:(id *)a1;
- (char)storeACMEDirectoryURL:(id)a0 clientIdentifier:(id)a1 keySize:(unsigned long long)a2 keyType:(id)a3 hardwareBound:(char)a4 subject:(id)a5 subjectAltName:(id)a6 usageFlags:(unsigned long long)a7 extendedKeyUsage:(id)a8 attest:(char)a9 isUserEnrollment:(char)a10 assetKey:(id)a11 error:(id *)a12;
- (char)storePEMData:(id)a0 assetKey:(id)a1 error:(id *)a2;
- (char)storePKCS12Data:(id)a0 password:(id)a1 assetKey:(id)a2 error:(id *)a3;
- (char)storePKCS1Data:(id)a0 assetKey:(id)a1 error:(id *)a2;
- (char)storePassword:(id)a0 userName:(id)a1 assetKey:(id)a2 error:(id *)a3;
- (char)storeSCEPIdentityURL:(id)a0 caInstanceName:(id)a1 caFingerprint:(id)a2 caCapabilities:(id)a3 challenge:(id)a4 subject:(id)a5 keySize:(unsigned long long)a6 usageFlags:(unsigned long long)a7 subjectAltName:(id)a8 retries:(unsigned long long)a9 retryDelay:(unsigned int)a10 assetKey:(id)a11 error:(id *)a12;
- (char)unassignAllAssetsFromConfigurationKey:(id)a0 error:(id *)a1;
- (void)unlockAfterModifyingKeychain;

@end
