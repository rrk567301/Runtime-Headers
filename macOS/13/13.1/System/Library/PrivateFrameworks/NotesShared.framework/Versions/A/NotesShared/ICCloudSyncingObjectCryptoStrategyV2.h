@class NSString, NSMutableDictionary;

@interface ICCloudSyncingObjectCryptoStrategyV2 : ICCryptoStrategyBase <ICCloudSyncingObjectCryptoStrategy>

@property (class, readonly, nonatomic) NSMutableDictionary *accountKeyByIdentifier;

@property (readonly, nonatomic) long long intrinsicNotesVersion;
@property (readonly) BOOL canAuthenticate;
@property (readonly) BOOL isAuthenticated;
@property (readonly) BOOL hasPassphraseSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accountIdentifier;
- (id)encryptData:(id)a0;
- (id)decryptData:(id)a0;
- (id)accountDsid;
- (id)unwrappedKey;
- (BOOL)canKeyDecrypt:(id)a0;
- (void)initializeCryptoPropertiesFromObject:(id)a0;
- (void)saveEncryptedJSON;
- (BOOL)encryptFileFromURL:(id)a0 toURL:(id)a1;
- (void)loadDecryptedValuesIfNecessary;
- (id)encryptSidecarData:(id)a0;
- (id)decryptSidecarData:(id)a0;
- (BOOL)encryptSidecarFileFromURL:(id)a0 toURL:(id)a1;
- (void)mergeEncryptedDataFromRecord:(id)a0;
- (void)rewrapAndDivergeKeyUsingPassphrase:(id)a0;
- (BOOL)isPassphraseCorrect:(id)a0;
- (BOOL)isInICloudAccount;
- (id)decryptedDataFromFileURL:(id)a0;
- (id)encryptedDataFromRecord:(id)a0;
- (BOOL)isRecordAuthenticated:(id)a0;
- (BOOL)isAuthenticatedForBothObjectAndRecord:(id)a0;
- (void)decryptAndMergeEncryptedJSON:(id)a0;
- (BOOL)shouldSpoofAccountKey;
- (id)currentAccountKeyIdentifier;
- (id)accountKeyWithIdentifier:(id)a0 createIfNotExist:(BOOL)a1;
- (id)decryptObject:(id)a0;
- (void)serializeToEncryptedValuesJSON:(id)a0;
- (BOOL)serialize:(id)a0 toURL:(id)a1;

@end
