@class ICEncryptionKey, NSString, ICEncryptionMetadata, ICEncryptionObject, ICCloudSyncingObject;

@interface ICAttachmentCryptoStrategyV1 : ICCloudSyncingObjectCryptoStrategyV1 <ICAttachmentCryptoStrategy>

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

- (id)decryptedFallbackAssetDataForFallbackAssetType:(long long)a0;
- (id)decryptedFallbackImageData;
- (id)decryptedFallbackPDFData;
- (char)rewrapWithMainKey:(id)a0;
- (char)writeEncryptedFallbackAssetData:(id)a0 fallbackAssetType:(long long)a1;
- (char)writeEncryptedFallbackImageData:(id)a0;
- (char)writeEncryptedFallbackPDFData:(id)a0;

@end
