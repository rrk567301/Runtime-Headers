@class NSString, AVWeakReference, NSData, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVContentKeyReportGroup : NSObject {
    AVWeakReference *_contentKeySessionWeakReference;
    struct OpaqueFigContentKeySession { } *_figContentKeySession;
    NSData *_protectorSessionIdentifier;
    NSMutableArray *_cryptorsList;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_keySystem;
    BOOL _isExpired;
}

@property (readonly) NSData *contentProtectionSessionIdentifier;

- (void)dealloc;
- (const struct OpaqueFigContentKeySession { } *)_figContentKeySession;
- (void)expire;
- (BOOL)hasProtector;
- (const struct OpaqueFigCPECryptor { } *)createCryptorIfNecessaryForIdentifier:(id)a0 initializationData:(id)a1 formatDescription:(struct opaqueCMFormatDescription { } *)a2 hlsMethod:(id)a3 error:(id *)a4;
- (int)configureAppIdentifier:(id)a0;
- (void)createProtectorSessionIdentifierIfNecessary;
- (BOOL)_setAuthorizationToken:(id)a0 forIdentifier:(id)a1 error:(id *)a2;
- (unsigned int)externalProtectionStatusForCryptor:(struct OpaqueFigCPECryptor { } *)a0 withDisplays:(id)a1;
- (id)initWithKeySystem:(id)a0 keySession:(id)a1 storageDirectoryAtURL:(id)a2;
- (void)processContentKeyRequestWithIdentifier:(id)a0 initializationData:(id)a1 options:(id)a2;
- (const struct OpaqueFigCPECryptor { } *)copyCryptorForIdentifier:(id)a0 initializationData:(id)a1;
- (struct OpaqueFigCPECryptor { } *)copyCryptorForCryptKeyAttributes:(id)a0;
- (id)_contentKeySession;
- (void)failProcessingContentKeyRequestWithIdentifier:(id)a0 initializationData:(id)a1 error:(id)a2;
- (id)_processContentKeyRequestWithIdentifier:(id)a0 contentIdentifier:(id)a1 keyIDFromInitializationData:(id)a2 initializationData:(id)a3 options:(id)a4;
- (id)_processContentKeyRequestWithKeyRequestFromPSSH:(id)a0 decryptFormatType:(id)a1 initializationData:(id)a2 options:(id)a3;
- (id)cryptorOptionsForIdentifier:(id)a0 initializationData:(id)a1 formatDescription:(struct opaqueCMFormatDescription { } *)a2 hlsMethod:(id)a3;
- (BOOL)associateContentKeyRequest:(id)a0;

@end
