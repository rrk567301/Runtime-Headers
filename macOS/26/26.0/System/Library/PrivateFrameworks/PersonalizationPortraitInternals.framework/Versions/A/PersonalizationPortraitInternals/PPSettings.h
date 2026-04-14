@class NSUserDefaults, PPKVOObserver, NSObject, _PASLock;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PPSettings : NSObject {
    NSUserDefaults *_portraitDefaults;
    NSUserDefaults *_canLearnFromAppDefaults;
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_initializationComplete;
    PPKVOObserver *_canLearnFromAppKVOObserver;
    PPKVOObserver *_weightKVOObserver;
    PPKVOObserver *_abGroupKVObserver;
    PPKVOObserver *_queryPlanLoggingKVOObserver;
}

@property (nonatomic, getter=isAppConnectionsLocationsEnabled) BOOL appConnectionsLocationsEnabled;

+ (id)sharedInstance;
+ (void)disableBundleIdentifier:(id)a0;
+ (BOOL)isCloudSyncEnabled;
+ (BOOL)isVoiceAssistantEnabled;
+ (void)clearTestSettings;
+ (id)cloudSyncDisabledFirstPartyBundleIds;

- (id)userDefaults;
- (BOOL)showLocationsFoundInApps;
- (void)setAssetDefaultBundleOverridePath:(id)a0 assetIdentifier:(id)a1;
- (BOOL)hasWrittenSharedWithYouContentAvailable;
- (void)registerCloudKitDisabledBundleIdRewriteHandler;
- (BOOL)hasWrittenSharedWithYouContentConsumed;
- (void)registerDisabledBundleIdPurgeHandler;
- (void)clearAssetMetadataRefreshIntervalSeconds;
- (BOOL)bundleIdentifierIsEnabledForCloudKit:(id)a0;
- (BOOL)bundleIdentifierIsEnabledForDonation:(id)a0;
- (void)setWrittenSharedWithYouContentConsumed:(BOOL)a0;
- (void)setQueryPlanLoggingEnabled:(BOOL)a0;
- (double)weightMultiplier;
- (void)setTrialUseDefaultFiles:(BOOL)a0;
- (id)init;
- (void)deregisterQueryPlanLoggingChangeHandlerWithToken:(int)a0;
- (id)trialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1;
- (void)rewriteSyncStateForDisabledBundleIdsAsync;
- (void)setWrittenSharedWithYouContentAvailable:(BOOL)a0;
- (void)setTrialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1 path:(id)a2;
- (int)registerDisabledBundleIdentifierChangeHandler:(id /* block */)a0;
- (BOOL)isAuthorizedToLogLocation;
- (void)refreshCloudKitDisabledBundleIdsAsync;
- (double)assetMetadataRefreshIntervalSeconds;
- (id)entitiesMappingPreviousTrieSha256;
- (void)setEntitiesBackfilledTimestamp:(id)a0;
- (void)setEntitiesMappingTrieSha256:(id)a0;
- (void)setAssetMetadataRefreshIntervalSeconds:(double)a0;
- (id)assetDefaultBundleOverridePathForAssetIdentifier:(id)a0;
- (id)trialPathOverrides;
- (id)abGroupOverride;
- (BOOL)trialUseDefaultFiles;
- (void)triggerDelayedCloudSyncRewrite;
- (int)registerQueryPlanLoggingChangeHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)entitiesBackfilledTimestamp;
- (void)deregisterDisabledBundleIdentifierChangeHandlerWithToken:(int)a0;
- (BOOL)queryPlanLoggingEnabled;

@end
