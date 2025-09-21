@class ICEncryptionKey, NSString, ICEncryptionMetadata, ICEncryptionObject, ICCloudSyncingObject;

@interface ICCloudSyncingObjectCryptoStrategyV1Neo : ICCryptoStrategyBase <ICCloudSyncingObjectCryptoStrategy>

@property (readonly, copy, nonatomic) ICEncryptionKey *sidecarMainKey;
@property (readonly, copy, nonatomic) ICEncryptionKey *fallbackSidecarMainKey;
@property (readonly, weak, nonatomic) ICCloudSyncingObject *object;
@property (readonly, nonatomic) long long intrinsicNotesVersion;
@property (readonly, nonatomic) char canAuthenticate;
@property (readonly, nonatomic) char isAuthenticated;
@property (readonly, nonatomic) char hasPassphraseSet;
@property (readonly, copy, nonatomic) NSString *passphraseHint;
@property (readonly, nonatomic) ICEncryptionMetadata *primaryMetadata;
@property (readonly, nonatomic) ICEncryptionKey *primaryWrappedKey;
@property (readonly, nonatomic) ICEncryptionObject *primaryEncryptionObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)decryptData:(id)a0;
- (id)encryptData:(id)a0;
- (char)authenticateWithPassphrase:(id)a0;
- (id)decryptObject:(id)a0 encryptionKey:(id)a1 mainKey:(id)a2;
- (id)decryptSidecarData:(id)a0;
- (id)encryptData:(id)a0 encryptionKey:(id)a1 mainKey:(id)a2;
- (id)encryptSidecarData:(id)a0;
- (id)encryptedData:(id)a0 rewrappedWithMainKey:(id)a1;
- (char)hasSameKeyAsObject:(id)a0;
- (void)initializeCryptoPropertiesFromObject:(id)a0;
- (char)isPassphraseCorrect:(id)a0;
- (char)isRecordAuthenticated:(id)a0;
- (char)loadDecryptedValuesIfNecessary;
- (char)mainKeyDecryptsPrimaryData:(id)a0;
- (id)mainKeyForPassphrase:(id)a0;
- (char)mergeEncryptedDataFromRecord:(id)a0;
- (char)recordHasChangedPassphrase:(id)a0;
- (char)rewrapWithMainKey:(id)a0;
- (char)saveEncryptedJSON;
- (id)sidecarMainKeyCreateIfNeeded;

@end
