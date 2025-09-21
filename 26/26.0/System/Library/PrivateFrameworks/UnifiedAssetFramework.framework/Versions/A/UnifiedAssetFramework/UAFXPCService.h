@class NSXPCListener, NSString, UAFAssetUtilitiesService, NSObject;
@protocol OS_dispatch_queue;

@interface UAFXPCService : NSObject <NSXPCListenerDelegate, UAFXPCProxyService> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_xpcListener;
    id _platformAssetSetObserver;
    BOOL _subscriptionService;
    UAFAssetUtilitiesService *_assetUtilitiesService;
}

@property (readonly, nonatomic) BOOL dictationEnabled;
@property (readonly, nonatomic) BOOL assistantEnabled;
@property (readonly, nonatomic) BOOL gmsEnabled;
@property (readonly, copy) NSString *assistantLanguage;
@property (readonly, copy) NSString *systemLanguage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_currentAssistantMode:(id *)a0;
+ (BOOL)_isOnDemandAssetSubscriptionAllowed;
+ (void)daemonLaunchTasks;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void)dealloc;
- (void)invalidate;
- (void)stop;
- (void)_invalidate;
- (id)init;
- (void).cxx_destruct;
- (oneway void)markAssetsExpired:(id)a0 completion:(id /* block */)a1;
- (void)_assistantGMSAvailabilityUpdate;
- (void)_startObservers;
- (oneway void)operationWithConfig:(id)a0 completion:(id /* block */)a1;
- (BOOL)_assistantEnabledChanged;
- (BOOL)_assistantLanguageChanged;
- (void)_assistantLanguageUpdate;
- (void)_assistantPreferencesUpdate;
- (BOOL)_dictationEnabledChanged;
- (BOOL)_gmsEnabledChanged;
- (void)_stopObservers;
- (BOOL)_systemLanguageChanged;
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
- (oneway void)expireSubscriptions:(id /* block */)a0;
- (id)initSubscriptionService;
- (id)initWithMachServiceName:(id)a0 subscriptionService:(BOOL)a1;
- (id)initWithXPCListener:(id)a0 subscriptionService:(BOOL)a1;
- (oneway void)lockLatestAtomicInstance:(id)a0 completion:(id /* block */)a1;
- (oneway void)postAssetNotificationIfNeeded;
- (oneway void)postDictationAssetNotificationForLanguage:(id)a0;
- (void)runUpdates;
- (oneway void)setSystemConfigurationForKey:(id)a0 withValue:(id)a1 completion:(id /* block */)a2;
- (void)startAsync;
- (void)stopAsync;
- (void)subscribeWithConfig:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (void)subscriptions:(id)a0 subscriber:(id)a1 user:(id)a2 completion:(id /* block */)a3;
- (void)unsubscribeWithConfig:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;

@end
