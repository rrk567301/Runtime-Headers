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
+ (void)clearTestSettings;
+ (void)disableBundleIdentifier:(id)a0;
+ (BOOL)isCloudSyncEnabled;
+ (id)cloudSyncDisabledFirstPartyBundleIds;
+ (BOOL)isVoiceAssistantEnabled;

- (id)userDefaults;
- (BOOL)bundleIdentifierIsEnabledForDonation:(id)a0;
- (void)setAssetDefaultBundleOverridePath:(id)a0 assetIdentifier:(id)a1;
- (int)registerDisabledBundleIdentifierChangeHandler:(id /* block */)a0;
- (void)rewriteSyncStateForDisabledBundleIdsAsync;
- (id)abGroupOverride;
- (void)setTrialUseDefaultFiles:(BOOL)a0;
- (void)registerCloudKitDisabledBundleIdRewriteHandler;
- (id)assetDefaultBundleOverridePathForAssetIdentifier:(id)a0;
- (void)setEntitiesBackfilledTimestamp:(id)a0;
- (void)deregisterQueryPlanLoggingChangeHandlerWithToken:(int)a0;
- (void)setTrialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1 path:(id)a2;
- (void)registerDisabledBundleIdPurgeHandler;
- (void)clearAssetMetadataRefreshIntervalSeconds;
- (id)entitiesBackfilledTimestamp;
- (void)setAssetMetadataRefreshIntervalSeconds:(double)a0;
- (double)assetMetadataRefreshIntervalSeconds;
- (BOOL)trialUseDefaultFiles;
- (double)weightMultiplier;
- (BOOL)showLocationsFoundInApps;
- (void)setWrittenSharedWithYouContentAvailable:(BOOL)a0;
- (void)refreshCloudKitDisabledBundleIdsAsync;
- (BOOL)hasWrittenSharedWithYouContentAvailable;
- (id)trialPathOverrides;
- (BOOL)bundleIdentifierIsEnabledForCloudKit:(id)a0;
- (void)triggerDelayedCloudSyncRewrite;
- (void).cxx_destruct;
- (BOOL)queryPlanLoggingEnabled;
- (id)entitiesMappingPreviousTrieSha256;
- (void)deregisterDisabledBundleIdentifierChangeHandlerWithToken:(int)a0;
- (int)registerQueryPlanLoggingChangeHandler:(id /* block */)a0;
- (BOOL)isAuthorizedToLogLocation;
- (void)setWrittenSharedWithYouContentConsumed:(BOOL)a0;
- (void)setQueryPlanLoggingEnabled:(BOOL)a0;
- (void)setEntitiesMappingTrieSha256:(id)a0;
- (id)trialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1;
- (BOOL)hasWrittenSharedWithYouContentConsumed;
- (id)init;

@end
