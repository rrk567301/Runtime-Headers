@class AVContentKey, NSDictionary, NSData, NSError, AVContentKeySpecifier, AVContentKeyRequestInternal;

@interface AVContentKeyRequest : NSObject {
    AVContentKeyRequestInternal *_contentKeyRequest;
}

@property (readonly) long long status;
@property (readonly) NSError *error;
@property (readonly) id identifier;
@property (readonly, nonatomic) NSData *initializationData;
@property (readonly, copy) NSDictionary *options;
@property (readonly) char canProvidePersistableContentKey;
@property (readonly) AVContentKeySpecifier *contentKeySpecifier;
@property (readonly) AVContentKey *contentKey;

+ (id)_createKeyRequestDictionaryForApp:(id)a0 persistentKey:(id)a1 serverChallenge:(id)a2 cryptorKeyRequestID:(unsigned long long)a3 purpose:(int)a4;
+ (id)_ensureProtocolVersionList:(id)a0;
+ (id)_mergePreloadingRequestOptions:(id)a0 withCreateKeyRequestOptions:(id)a1;
+ (char)_prepareCryptor:(struct OpaqueFigCPECryptor { } *)a0 forRenewal:(char)a1 andReturnKeyRequestID:(unsigned long long *)a2 isInchargeOfKeyRequest:(char *)a3 error:(id *)a4;
+ (void)_validateHLSEncryptionMethod:(id)a0;
+ (void)_validateProtocolVersionList:(id)a0;
+ (void)_validateServerChallenge:(id)a0;

- (void)dealloc;
- (id)description;
- (void)_clearContext;
- (id)contentIdentifier;
- (id)session;
- (void)_setStatus:(long long)a0;
- (id)identifierString;
- (void)_setError:(id)a0;
- (long long)externalContentProtectionStatus;
- (char)setReportGroup:(id)a0;
- (void)processContentKeyResponseError:(id)a0;
- (char)_canRespondByRequestingPersistableContentKeyRequest;
- (void)_copyAndStoreCryptorUUID;
- (struct OpaqueFigContentKeyBoss { } *)_copyContentKeyBoss;
- (int)_encryptionMethod;
- (void)_finishLoadingCustomURLRequestWithError:(id)a0;
- (void)_finishLoadingCustomURLRequestWithResponseData:(id)a0 renewalDate:(id)a1;
- (id)_getRetryReasonForError:(int)a0;
- (void)_handleKeyResponseError:(id)a0;
- (void)_handleKeyResponseSuccessWithCryptor:(struct OpaqueFigCPECryptor { } *)a0;
- (id)_keySystem;
- (id)_makeStreamingContentKeyRequestDataForApp:(id)a0 contentIdentifier:(id)a1 options:(id)a2 error:(id *)a3;
- (char)_prepareForKeyRenewalReturningError:(id *)a0;
- (char)_processContentKeyResponse:(id)a0 renewalDate:(id)a1 initializationVector:(id)a2 error:(id *)a3;
- (void)_processContentKeyResponseError:(id)a0;
- (unsigned long long)_requestID;
- (void)_sendResponseInfoToCustomURLHandlerWithRenewalDate:(id)a0;
- (id)contentKeyRequestDataForApp:(id)a0 contentIdentifier:(id)a1 options:(id)a2 error:(id *)a3;
- (char)ensureCryptorWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 error:(id *)a1;
- (struct OpaqueFigCPECryptor { } *)figCryptor;
- (id)initWithContentKeySession:(id)a0 contentKeyBoss:(struct OpaqueFigContentKeyBoss { } *)a1 useContentKeyBoss:(char)a2 keySpecifier:(struct OpaqueFigContentKeySpecifier { } *)a3 initializationData:(id)a4 keyIDFromInitializationData:(id)a5 contentIdentifier:(id)a6 isRenewalRequest:(char)a7 requestID:(unsigned long long)a8 providesPersistableKey:(char)a9 preloadingRequestOptions:(id)a10 identifier:(id)a11 supportsOfflineKey:(char)a12;
- (id)initWithContentKeySession:(id)a0 reportGroup:(id)a1 customURLHandler:(struct OpaqueFigCustomURLHandler { } *)a2 identifier:(id)a3 requestInfo:(struct __CFDictionary { } *)a4 requestID:(unsigned long long)a5 providesPersistableKey:(char)a6 isRenewalRequest:(char)a7;
- (id)initWithContentKeySession:(id)a0 reportGroup:(id)a1 identifier:(id)a2 contentIdentifier:(id)a3 keyIDFromInitializationData:(id)a4 initializationData:(id)a5 preloadingRequestOptions:(id)a6 providesPersistableKey:(char)a7;
- (id)keyIDFromInitializationData;
- (void)makeStreamingContentKeyRequestDataForApp:(id)a0 contentIdentifier:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)processContentKeyResponse:(id)a0;
- (void)processContentKeyResponseData:(id)a0;
- (char)processContentKeyResponseData:(id)a0 renewalDate:(id)a1 error:(id *)a2;
- (void)renewExpiringContentKeyResponseData;
- (char)renewsExpiringResponseData;
- (void)respondByRequestingPersistableContentKeyRequest;
- (char)respondByRequestingPersistableContentKeyRequestAndReturnError:(id *)a0;
- (char)willOutputBeObscuredDueToInsufficientExternalProtectionForDisplays:(id)a0;

@end
