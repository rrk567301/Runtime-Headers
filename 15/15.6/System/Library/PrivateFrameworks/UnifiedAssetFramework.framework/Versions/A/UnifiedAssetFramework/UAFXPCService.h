@class NSXPCListener, NSString, UAFAssetUtilitiesService, NSObject;
@protocol OS_dispatch_queue;

@interface UAFXPCService : NSObject <NSXPCListenerDelegate, UAFXPCProxyService> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_xpcListener;
    id _platformAssetSetObserver;
    UAFAssetUtilitiesService *_assetUtilitiesService;
}

@property (readonly, nonatomic) char dictationEnabled;
@property (readonly, nonatomic) char assistantEnabled;
@property (readonly, nonatomic) char gmsEnabled;
@property (readonly, copy) NSString *assistantLanguage;
@property (readonly, copy) NSString *systemLanguage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_currentAssistantMode:(id *)a0;
+ (char)_isOnDemandAssetSubscriptionAllowed;
+ (void)daemonLaunchTasks;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (void)invalidate;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithXPCListener:(id)a0;
- (void)start;
- (void)stop;
- (void)_invalidate;
- (oneway void)markAssetsExpired:(id)a0 completion:(id /* block */)a1;
- (void)_assistantGMSAvailabilityUpdate;
- (void)_startObservers;
- (oneway void)operationWithConfig:(id)a0 completion:(id /* block */)a1;
- (void)subscribeWithConfig:(id)a0 completion:(id /* block */)a1;
- (char)_assistantEnabledChanged;
- (char)_assistantLanguageChanged;
- (void)_assistantLanguageUpdate;
- (void)_assistantPreferencesUpdate;
- (char)_dictationEnabledChanged;
- (char)_gmsEnabledChanged;
- (void)_stopObservers;
- (char)_systemLanguageChanged;
- (void)_systemLanguageUpdate;
- (void)_updateAssetUtilitiesLanguage;
- (void)_updateAssistantSubscription;
- (void)_updateGMSSiriLanguageSubscription;
- (void)_updateMorphunSystemLanguageSubscription;
- (void)_updateNLSystemLanguageSubscription;
- (oneway void)checkAssetStatus:(id /* block */)a0;
- (void)configureCacheDeleteWithConfig:(id)a0 completion:(id /* block */)a1;
- (oneway void)diagnosticInformation:(id /* block */)a0;
- (oneway void)diskSpaceNeededInBytesForLanguage:(id)a0 forClient:(unsigned long long)a1 completion:(id /* block */)a2;
- (oneway void)downloadDictationAssetsForLanguage:(id)a0;
- (oneway void)downloadSiriAssets;
- (oneway void)downloadSiriAssetsOverCellular;
- (oneway void)lockLatestAtomicInstance:(id)a0 completion:(id /* block */)a1;
- (oneway void)postAssetNotificationIfNeeded;
- (oneway void)postDictationAssetNotificationForLanguage:(id)a0;
- (void)runUpdates;
- (void)startAsync;
- (void)stopAsync;
- (void)subscriptionsForSubscriber:(id)a0 completion:(id /* block */)a1;
- (void)unsubscribeWithConfig:(id)a0 completion:(id /* block */)a1;

@end
