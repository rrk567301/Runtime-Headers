@class ICEncryptionKey, NSString, ICEncryptionMetadata, ICEncryptionObject, ICCloudSyncingObject;

@interface ICCryptoStrategyBase : NSObject <ICCloudSyncingObjectCryptoStrategy>

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

- (void).cxx_destruct;
- (id)decryptData:(id)a0;
- (id)encryptData:(id)a0;
- (void)performBlockIfAttachmentExists:(id /* block */)a0;
- (char)authenticateWithPassphrase:(id)a0;
- (id)decryptSidecarData:(id)a0;
- (id)decryptedDataFromFileURL:(id)a0;
- (id)decryptedSidecarDataFromFileURL:(id)a0;
- (char)encryptFileFromURL:(id)a0 toURL:(id)a1;
- (id)encryptSidecarData:(id)a0;
- (char)encryptSidecarFileFromURL:(id)a0 toURL:(id)a1;
- (id)encryptedData:(id)a0 rewrappedWithMainKey:(id)a1;
- (char)hasSameKeyAsObject:(id)a0;
- (id)initWithCloudSyncingObject:(id)a0;
- (void)initializeCryptoPropertiesFromObject:(id)a0;
- (void)invalidateStrategy;
- (char)isPassphraseCorrect:(id)a0;
- (char)isRecordAuthenticated:(id)a0;
- (char)loadDecryptedValuesIfNecessary;
- (char)mainKeyDecryptsPrimaryData:(id)a0;
- (id)mainKeyForPassphrase:(id)a0;
- (char)mergeEncryptedDataFromRecord:(id)a0;
- (void)performBlockIfAccountExists:(id /* block */)a0;
- (void)performBlockIfMediaExists:(id /* block */)a0;
- (void)performBlockIfNoteExists:(id /* block */)a0;
- (void)performBlockIfObjectExists:(id /* block */)a0;
- (void)performBlockIfPreviewImageExists:(id /* block */)a0;
- (char)recordHasChangedPassphrase:(id)a0;
- (char)rewrapDataAtURL:(id)a0 withMainKey:(id)a1;
- (char)rewrapFile:(id /* block */)a0 withMainKey:(id)a1 generationManager:(id)a2;
- (char)rewrapWithMainKey:(id)a0;
- (char)saveEncryptedJSON;
- (char)serialize:(id)a0 toURL:(id)a1;

@end
