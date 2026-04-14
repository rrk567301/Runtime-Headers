@class NSXPCListener, NSString, UAFAssetUtilitiesService, NSObject;
@protocol OS_dispatch_queue;

@interface UAFXPCService : NSObject <NSXPCListenerDelegate, UAFXPCProxyService> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_xpcListener;
    BOOL _dictationEnabled;
    BOOL _assistantEnabled;
    NSString *_languageCode;
    NSString *_systemLanguageCode;
    UAFAssetUtilitiesService *_assetUtilitiesService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isOnDemandAssetSubscriptionAllowed;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithXPCListener:(id)a0;
- (void)start;
- (void)stop;
- (void)_invalidate;
- (void)_startObservers;
- (void)subscribeWithConfig:(id)a0 completion:(id /* block */)a1;
- (oneway void)operationWithConfig:(id)a0 completion:(id /* block */)a1;
- (void)_assistantLanguageUpdate;
- (void)_assistantPreferencesUpdate;
- (void)_stopObservers;
- (void)_systemLanguageUpdate;
- (oneway void)checkAssetStatus:(id /* block */)a0;
- (void)configureCacheDeleteWithConfig:(id)a0 completion:(id /* block */)a1;
- (oneway void)diagnosticInformation:(id /* block */)a0;
- (oneway void)downloadDictationAssetsForLanguage:(id)a0;
- (oneway void)downloadSiriAssets;
- (oneway void)downloadSiriAssetsOverCellular;
- (oneway void)downloadSizeInBytesForLanguage:(id)a0 completion:(id /* block */)a1;
- (oneway void)lockLatestAtomicInstance:(id)a0 completion:(id /* block */)a1;
- (oneway void)postAssetNotificationIfNeeded;
- (oneway void)postDictationAssetNotificationForLanguage:(id)a0;
- (void)runUpdates;
- (void)startAsync;
- (void)stopAsync;
- (void)unsubscribeWithConfig:(id)a0 completion:(id /* block */)a1;

@end
