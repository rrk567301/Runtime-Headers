@class NSString;

@interface ICAccountCryptoStrategyV1 : ICCloudSyncingObjectCryptoStrategyV1 <ICAccountCryptoStrategy>

@property (readonly, nonatomic) long long intrinsicNotesVersion;
@property (readonly) BOOL canAuthenticate;
@property (readonly) BOOL isAuthenticated;
@property (readonly) BOOL hasPassphraseSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mergeEncryptedDataFromRecord:(id)a0;
- (void)copyCryptoFieldsFromAccount:(id)a0;
- (BOOL)setPassphrase:(id)a0 hint:(id)a1;
- (void)removePassphrase;
- (BOOL)hasSamePassphraseForObject:(id)a0;
- (BOOL)updateAllNotesWithOldPassphrase:(id)a0 toAccountPassphrase:(id)a1 progress:(id)a2;

@end
