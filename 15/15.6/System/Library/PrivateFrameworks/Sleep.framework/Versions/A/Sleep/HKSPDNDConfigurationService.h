@class NSString, DNDModeConfigurationService, DNDGlobalConfigurationService, HKSPSleepFocusConfiguration;
@protocol NAScheduler, HKSPSleepFocusModeBridgeDelegate;

@interface HKSPDNDConfigurationService : NSObject <DNDModeConfigurationServiceListener, DNDGlobalConfigurationServiceListener, HKSPSleepFocusModeBridge> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    HKSPSleepFocusConfiguration *_cachedSleepFocusConfiguration;
    id<NAScheduler> _dndScheduler;
}

@property (readonly, nonatomic) DNDModeConfigurationService *modeConfigService;
@property (readonly, nonatomic) DNDGlobalConfigurationService *globalConfigService;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HKSPSleepFocusModeBridgeDelegate> delegate;

+ (char)_readGlobalConfigForOptions:(unsigned long long)a0;
+ (id)sleepFocusConfigurationService;
+ (id)sleepFocusConfigurationServiceWithOptions:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)invalidate;
- (void)_notifyDelegate;
- (void)modeConfigurationService:(id)a0 didReceiveAvailableModesUpdate:(id)a1;
- (void)_withLock:(id /* block */)a0;
- (void)globalConfigurationService:(id)a0 didReceiveUpdatedPairSyncState:(unsigned long long)a1;
- (void)_updateCacheAndNotifyWithBlock:(id /* block */)a0;
- (char)_cacheSleepFocusConfig;
- (void)_checkForUpdatedSleepFocusConfig;
- (void)_fetchUpdatedSleepFocusConfigurationWithCompletion:(id /* block */)a0;
- (void)_loadCachedSleepFocusConfig;
- (char)_lock_updateCachedSleepFocusConfig:(id)a0 updatedSleepFocusConfig:(id)a1;
- (char)_readGlobalConfig;
- (id)_sleepFocusConfiguration:(id *)a0 checkCache:(char)a1;
- (void)_startListeningToGlobalConfigService;
- (void)_startListeningToModeConfigService;
- (void)_stopListeningToGlobalConfigService;
- (void)_stopListeningToModeConfigService;
- (char)_uncachedMirrorsFocusModes:(id *)a0;
- (id)_uncachedModeConfiguration:(id *)a0;
- (void)_updateCachedSleepFocusConfig:(id)a0;
- (char)hasSleepFocusMode:(id *)a0;
- (id)initWithModeConfigService:(id)a0 globalConfigService:(id)a1;
- (id)initWithModeConfigService:(id)a0 globalConfigService:(id)a1 options:(unsigned long long)a2;
- (id)sleepFocusConfiguration:(id *)a0;
- (void)updateCachedMirrorsFocusModes:(char)a0;
- (void)updateCachedUUID:(id)a0 state:(unsigned long long)a1;

@end
