@class ICEncryptionKey, NSString, NSMutableDictionary, ICEncryptionMetadata, ICEncryptionObject, ICCloudSyncingObject;

@interface ICCloudSyncingObjectCryptoStrategyV2 : ICCryptoStrategyBase <ICCloudSyncingObjectCryptoStrategy>

@property (class, readonly, nonatomic) NSMutableDictionary *accountKeyByIdentifier;

@property (readonly, nonatomic) NSString *accountDsid;
@property (readonly, nonatomic) NSString *accountKeyIdentifier;
@property (readonly, nonatomic) NSString *currentAccountKeyIdentifier;
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
- (id)accountIdentifier;
- (void)serializeToEncryptedValuesJSON:(id)a0;
- (id)accountKeyWithIdentifier:(id)a0 createIfNotExist:(char)a1;
- (char)authenticateWithPassphrase:(id)a0;
- (char)canAuthenticateRecord:(id)a0;
- (void)decryptAndMergeEncryptedJSON:(id)a0;
- (id)decryptObject:(id)a0;
- (id)decryptSidecarData:(id)a0;
- (id)decryptedDataFromFileURL:(id)a0;
- (char)encryptFileFromURL:(id)a0 toURL:(id)a1;
- (id)encryptSidecarData:(id)a0;
- (char)encryptSidecarFileFromURL:(id)a0 toURL:(id)a1;
- (id)encryptedData:(id)a0 rewrappedWithMainKey:(id)a1;
- (id)encryptedDataFromRecord:(id)a0;
- (void)fetchKeychainItemsForAccountKeyIdentifier:(id)a0 accountDsid:(id)a1;
- (char)hasSameKeyAsObject:(id)a0;
- (char)isInICloudAccount;
- (char)isPassphraseCorrect:(id)a0;
- (char)isRecordAuthenticated:(id)a0;
- (char)loadDecryptedValuesIfNecessary;
- (char)mainKeyDecryptsPrimaryData:(id)a0;
- (id)mainKeyForPassphrase:(id)a0;
- (char)mergeEncryptedDataFromRecord:(id)a0;
- (char)recordHasChangedPassphrase:(id)a0;
- (char)rewrapDataAtURL:(id)a0 withMainKey:(id)a1;
- (char)rewrapWithMainKey:(id)a0;
- (char)saveEncryptedJSON;
- (char)serialize:(id)a0 toURL:(id)a1;
- (char)shouldSpoofAccountKey;

@end
