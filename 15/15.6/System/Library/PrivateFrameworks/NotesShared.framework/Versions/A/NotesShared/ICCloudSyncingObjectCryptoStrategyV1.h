@class ICEncryptionKey, NSString, NSData, ICEncryptionMetadata, ICCloudSyncingObject, ICEncryptionObject;

@interface ICCloudSyncingObjectCryptoStrategyV1 : ICCryptoStrategyBase <ICCloudSyncingObjectCryptoStrategy>

@property (readonly) NSData *fileURLEncryptionCryptoTag;
@property (readonly) NSData *fileURLEncryptionCryptoInitialzationVector;
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

+ (id)decryptWithMainKeyOfObject:(id)a0 encryptedData:(id)a1 fallbackAttemptSuccessCleanupHandler:(id /* block */)a2;
+ (id)decryptWithMainKeyOfObject:(id)a0 encryptedDataPreparationBlock:(id /* block */)a1 fallbackAttemptSuccessCleanupHandler:(id /* block */)a2;
+ (void)encryptWithMainKeyOfObject:(id)a0 dataPreparationBlock:(id /* block */)a1 failureHandler:(id /* block */)a2 successHandler:(id /* block */)a3;
+ (void)encryptWithMainKeyOfObject:(id)a0 dataToEncrypt:(id)a1 failureHandler:(id /* block */)a2 successHandler:(id /* block */)a3;

- (id)decryptData:(id)a0;
- (id)encryptData:(id)a0;
- (char)authenticateWithPassphrase:(id)a0;
- (char)canMainKey:(id)a0 decryptObject:(id)a1;
- (void)decryptAndMergeEncryptedJSON:(id)a0;
- (id)decryptSidecarData:(id)a0;
- (id)decryptedDataFromFileURL:(id)a0;
- (char)encryptFileFromURL:(id)a0 toURL:(id)a1;
- (char)encryptFileFromURL:(id)a0 toURL:(id)a1 setTagAndIVHandler:(id /* block */)a2;
- (id)encryptSidecarData:(id)a0;
- (char)encryptSidecarFileFromURL:(id)a0 toURL:(id)a1;
- (id)encryptedData:(id)a0 rewrappedWithMainKey:(id)a1;
- (id)encryptionObjectWithData:(id)a0;
- (char)hasSameKeyAsObject:(id)a0;
- (void)initializeCryptoPropertiesFromObject:(id)a0;
- (char)isPassphraseCorrect:(id)a0;
- (char)isRecordAuthenticated:(id)a0;
- (char)loadDecryptedValuesIfNecessary;
- (char)mainKeyDecryptsPrimaryData:(id)a0;
- (id)mainKeyForPassphrase:(id)a0;
- (char)mergeEncryptedDataFromRecord:(id)a0;
- (char)recordHasChangedPassphrase:(id)a0;
- (void)rewrapAndDivergeKeyUsingPassphrase:(id)a0;
- (char)rewrapDataAtURL:(id)a0 withMainKey:(id)a1;
- (void)rewrapKeyWithNewMainKey:(id)a0 salt:(id)a1 iterationCount:(unsigned long long)a2 hint:(id)a3;
- (char)rewrapWithMainKey:(id)a0;
- (char)saveEncryptedJSON;
- (id)unwrappedKey;

@end
