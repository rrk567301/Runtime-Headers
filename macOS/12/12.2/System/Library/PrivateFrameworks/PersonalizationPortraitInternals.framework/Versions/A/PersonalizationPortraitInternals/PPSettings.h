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
+ (id)cloudSyncDisabledFirstPartyBundleIds;
+ (void)clearTestSettings;
+ (BOOL)isVoiceAssistantEnabled;
+ (BOOL)isCloudSyncEnabled;

- (id)init;
- (void).cxx_destruct;
- (id)userDefaults;
- (BOOL)bundleIdentifierIsEnabledForDonation:(id)a0;
- (void)setEntitiesBackfilledTimestamp:(id)a0;
- (void)setEntitiesMappingTrieSha256:(id)a0;
- (BOOL)showLocationsFoundInApps;
- (int)registerDisabledBundleIdentifierChangeHandler:(id /* block */)a0;
- (void)deregisterDisabledBundleIdentifierChangeHandlerWithToken:(int)a0;
- (void)registerCloudKitDisabledBundleIdRewriteHandler;
- (void)registerDisabledBundleIdPurgeHandler;
- (void)rewriteSyncStateForDisabledBundleIdsAsync;
- (void)triggerDelayedCloudSyncRewrite;
- (void)refreshCloudKitDisabledBundleIdsAsync;
- (double)weightMultiplier;
- (id)entitiesBackfilledTimestamp;
- (id)entitiesMappingPreviousTrieSha256;
- (BOOL)bundleIdentifierIsEnabledForCloudKit:(id)a0;
- (id)abGroupOverride;
- (void)setAssetMetadataRefreshIntervalSeconds:(double)a0;
- (void)clearAssetMetadataRefreshIntervalSeconds;
- (double)assetMetadataRefreshIntervalSeconds;
- (void)setAssetDefaultBundleOverridePath:(id)a0 assetIdentifier:(id)a1;
- (id)trialPathOverrides;
- (BOOL)trialUseDefaultFiles;
- (void)setTrialUseDefaultFiles:(BOOL)a0;
- (id)trialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1;
- (void)setTrialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1 path:(id)a2;
- (id)assetDefaultBundleOverridePathForAssetIdentifier:(id)a0;
- (BOOL)hasWrittenSharedWithYouContentAvailable;
- (BOOL)hasWrittenSharedWithYouContentConsumed;
- (void)setWrittenSharedWithYouContentAvailable:(BOOL)a0;
- (void)setWrittenSharedWithYouContentConsumed:(BOOL)a0;
- (void)setQueryPlanLoggingEnabled:(BOOL)a0;
- (BOOL)queryPlanLoggingEnabled;
- (int)registerQueryPlanLoggingChangeHandler:(id /* block */)a0;
- (void)deregisterQueryPlanLoggingChangeHandlerWithToken:(int)a0;
- (BOOL)isAuthorizedToLogLocation;

@end
