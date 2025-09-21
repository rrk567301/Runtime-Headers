@class ICEncryptionKey, NSString, ICEncryptionMetadata, ICEncryptionObject, ICCloudSyncingObject;

@interface ICNoteCryptoStrategyV1 : ICCloudSyncingObjectCryptoStrategyV1 <ICNoteCryptoStrategy>

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

- (char)decrypt;
- (void)correctCryptoTagAndIVIfNecessary;
- (id)decryptNotePrimitiveData;
- (id)decryptTextDataOrSaveAsUnappliedRecordIfNotAuthenticated:(id)a0;
- (char)mainKeyDecryptsPrimaryData:(id)a0;
- (void)mergeEncryptedData:(id)a0 mergeConflict:(id)a1;
- (char)mergeEncryptedDataFromRecord:(id)a0;
- (void)recoverMissingCryptoWrappedKeyIfNeededWithMainKey:(id)a0;
- (char)rewrapWithMainKey:(id)a0;
- (id)unwrappedKey;
- (char)writeEncryptedNoteData:(id)a0;

@end
