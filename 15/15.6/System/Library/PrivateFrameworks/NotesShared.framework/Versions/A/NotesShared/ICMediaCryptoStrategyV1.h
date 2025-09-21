@class ICEncryptionKey, NSString, ICEncryptionMetadata, ICEncryptionObject, ICCloudSyncingObject;

@interface ICMediaCryptoStrategyV1 : ICCloudSyncingObjectCryptoStrategyV1 <ICMediaCryptoStrategy>

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

- (id)decryptedData;
- (char)encryptFileFromURL:(id)a0 toURL:(id)a1;
- (id)fileURLEncryptionCryptoInitialzationVector;
- (id)fileURLEncryptionCryptoTag;

@end
