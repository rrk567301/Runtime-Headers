@class NSString;

@interface ICAttachmentCryptoStrategyV1 : ICCloudSyncingObjectCryptoStrategyV1 <ICAttachmentCryptoStrategy>

@property (readonly, nonatomic) long long intrinsicNotesVersion;
@property (readonly) BOOL canAuthenticate;
@property (readonly) BOOL isAuthenticated;
@property (readonly) BOOL hasPassphraseSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)writeEncryptedFallbackImageData:(id)a0;
- (id)decryptedFallbackImageData;

@end
