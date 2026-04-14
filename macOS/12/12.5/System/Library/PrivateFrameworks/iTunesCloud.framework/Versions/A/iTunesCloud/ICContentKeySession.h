@class NSMutableArray, NSString, AVContentKeySession, NSURL, NSSet, ICFileContentKeyStore, NSMutableDictionary, NSObject, ICAVContentKeySessionReusable, NSMutableSet, ICStoreRequestContext, NSNumber;
@protocol ICContentKeySessionDelegateProtocol, ICContentKeyStoreProtocol, OS_dispatch_semaphore, OS_dispatch_queue, OS_dispatch_source;

@interface ICContentKeySession : NSObject <AVContentKeySessionDelegate> {
    AVContentKeySession *_contentKeySession;
    ICAVContentKeySessionReusable *_contentKeySessionReusable;
    id<ICContentKeyStoreProtocol> _keyStore;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_pendingKeyIdentifiers;
    NSMutableSet *_pendingRenewalKeyIdentifiers;
    NSMutableArray *_renewalCompletionBlocks;
    NSObject<OS_dispatch_semaphore> *_waitForKeysSemaphore;
    NSSet *_prefetchKeyIdentifiers;
    NSURL *_prefetchKeyServerURL;
    NSURL *_prefetchKeyCertificateURL;
    ICFileContentKeyStore *_prefetchedContentKeyStore;
    NSMutableDictionary *_keyRenewalDates;
    NSMutableDictionary *_keyRequestsPendingRenewal;
    NSObject<OS_dispatch_source> *_keyRenewalTimer;
    BOOL _automaticKeyRenewalPaused;
    id<ICContentKeySessionDelegateProtocol> _delegate;
}

@property (class, readonly, nonatomic) NSString *enhancedAudioSharedContentKeyPath;

@property (readonly, nonatomic) ICStoreRequestContext *requestContext;
@property (copy, nonatomic) NSURL *keyServerURL;
@property (copy, nonatomic) NSURL *keyCertificateURL;
@property (copy, nonatomic) NSNumber *adamID;
@property (copy, nonatomic) NSString *playbackToken;
@property (nonatomic) BOOL bypassCache;
@property (nonatomic) BOOL requestOfflineKeys;
@property (nonatomic) long long keyServerProtocolType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)contentKeySession:(id)a0 contentKeyRequest:(id)a1 didFailWithError:(id)a2;
- (void)contentKeySession:(id)a0 contentKeyRequestDidSucceed:(id)a1;
- (void)contentKeySession:(id)a0 didProvideRenewingContentKeyRequest:(id)a1;
- (void)contentKeySession:(id)a0 didProvidePersistableContentKeyRequest:(id)a1;
- (void)contentKeySession:(id)a0 didProvideContentKeyRequest:(id)a1;
- (void)addAsset:(id)a0;
- (void)removeAsset:(id)a0;
- (id)initWithRequestContext:(id)a0;
- (id)initWithRequestContext:(id)a0 keyStore:(id)a1;
- (void)addAsset:(id)a0 shouldPreloadKeys:(BOOL)a1;
- (void)waitForAllKeysToProcessWithTimeout:(double)a0;
- (void)didReceiveFairPlayError:(id)a0;
- (id)initWithRequestContext:(id)a0 keyStore:(id)a1 delegate:(id)a2;
- (id)initWithRequestContext:(id)a0 keyStore:(id)a1 delegate:(id)a2 nonreusableTokens:(id)a3;
- (void)_processKeyWithIdentifier:(id)a0;
- (void)_scheduleKeyRefreshTimer;
- (void)_performKeyDeliveryRequestForContentKeyRequest:(id)a0 persistResponse:(BOOL)a1 isRenewal:(BOOL)a2;
- (void)_finishProcessingKeyWithIdentifier:(id)a0;
- (void)_renewExpiredKeys;
- (void)processKeyWithIdentifier:(id)a0;
- (void)pauseAutomaticKeyRenewal;
- (void)resumeAutomaticKeyRenewal;
- (void)waitForKeyRenewalsWithCompletionHandler:(id /* block */)a0;
- (void)waitForAllKeysToProcess;

@end
