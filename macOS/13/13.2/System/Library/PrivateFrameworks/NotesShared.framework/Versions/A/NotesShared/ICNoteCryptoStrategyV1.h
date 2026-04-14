@class NSString;

@interface ICNoteCryptoStrategyV1 : ICCloudSyncingObjectCryptoStrategyV1 <ICNoteCryptoStrategy>

@property (readonly, nonatomic) long long intrinsicNotesVersion;
@property (readonly) BOOL canAuthenticate;
@property (readonly) BOOL isAuthenticated;
@property (readonly) BOOL hasPassphraseSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fromNote:(id)a0;

- (void)decrypt;
- (id)unwrappedKey;
- (BOOL)canKeyDecrypt:(id)a0;
- (void)mergeEncryptedDataFromRecord:(id)a0;
- (void)writeEncryptedNoteData:(id)a0;
- (id)decryptTextDataOrSaveAsUnappliedRecordIfNotAuthenticated:(id)a0;
- (id)decryptNotePrimitiveData;
- (void)mergeEncryptedData:(id)a0 mergeConflict:(id)a1;
- (void)applyAccountSaltAndICWithPassphrase:(id)a0;
- (void)alignAccountSaltAndICWithPassphrase:(id)a0;
- (void)fixDivergedAttachmentsUsingPassphrase:(id)a0;
- (void)rewrapAllChildrenWithNewMainKey:(id)a0 salt:(id)a1 iterationCount:(unsigned long long)a2 hint:(id)a3;
- (void)recoverMissingCryptoWrappedKeyIfNecessaryWithMainKey:(id)a0;
- (void)correctCryptoTagAndIVIfNecessary;

@end
