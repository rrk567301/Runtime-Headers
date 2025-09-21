@class NSData, NSString, AVContentKeySession, NSError, AVContentKeySpecifier, AVContentKey, NSDictionary, AVContentKeyReportGroup;

@interface AVContentKeyRequestInternal : NSObject {
    AVContentKeySession *weakSession;
    AVContentKeyReportGroup *reportGroup;
    id identifier;
    NSData *keyIDFromInitializationData;
    NSData *initializationData;
    long long status;
    int responseParamsSent;
    char providesPersistableKey;
    NSDictionary *preloadingRequestOptions;
    struct OpaqueFigCPECryptor { } *figCryptor;
    NSError *error;
    struct __CFDictionary { } *requestInfo;
    unsigned long long customURLRequestID;
    struct OpaqueFigCustomURLHandler { } *customURLHandler;
    char isRenewalRequest;
    NSString *cryptorUUID;
    unsigned long long cryptorKeyRequestID;
    char isInchargeOfKeyRequest;
    struct OpaqueFigSimpleMutex { } *stateMutex;
    char hasAnyKeyRequestSucceeded;
    AVContentKeySpecifier *contentKeySpecifier;
    AVContentKey *contentKey;
    NSData *contentIdentifier;
    struct OpaqueFigCFWeakReferenceHolder { } *weakContentKeyBoss;
    char useContentKeyBoss;
    unsigned long long requestID;
    char supportsOfflineKey;
    struct OpaqueFigContentKeySpecifier { } *keySpecifier;
}

- (void).cxx_destruct;

@end
