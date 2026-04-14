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
+ (BOOL)isVoiceAssistantEnabled;
+ (id)cloudSyncDisabledFirstPartyBundleIds;

- (void)setEntitiesBackfilledTimestamp:(id)a0;
- (double)weightMultiplier;
- (void)setWrittenSharedWithYouContentConsumed:(BOOL)a0;
- (BOOL)isAuthorizedToLogLocation;
- (void)refreshCloudKitDisabledBundleIdsAsync;
- (void)clearAssetMetadataRefreshIntervalSeconds;
- (void)rewriteSyncStateForDisabledBundleIdsAsync;
- (id)assetDefaultBundleOverridePathForAssetIdentifier:(id)a0;
- (id)userDefaults;
- (void)setTrialUseDefaultFiles:(BOOL)a0;
- (id)entitiesMappingPreviousTrieSha256;
- (BOOL)bundleIdentifierIsEnabledForCloudKit:(id)a0;
- (void)setWrittenSharedWithYouContentAvailable:(BOOL)a0;
- (id)trialPathOverrides;
- (int)registerQueryPlanLoggingChangeHandler:(id /* block */)a0;
- (void)registerDisabledBundleIdPurgeHandler;
- (BOOL)hasWrittenSharedWithYouContentConsumed;
- (id)abGroupOverride;
- (void).cxx_destruct;
- (void)setTrialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1 path:(id)a2;
- (void)setEntitiesMappingTrieSha256:(id)a0;
- (id)entitiesBackfilledTimestamp;
- (void)registerCloudKitDisabledBundleIdRewriteHandler;
- (BOOL)hasWrittenSharedWithYouContentAvailable;
- (BOOL)trialUseDefaultFiles;
- (int)registerDisabledBundleIdentifierChangeHandler:(id /* block */)a0;
- (id)init;
- (void)setAssetDefaultBundleOverridePath:(id)a0 assetIdentifier:(id)a1;
- (void)setAssetMetadataRefreshIntervalSeconds:(double)a0;
- (void)triggerDelayedCloudSyncRewrite;
- (double)assetMetadataRefreshIntervalSeconds;
- (BOOL)bundleIdentifierIsEnabledForDonation:(id)a0;
- (void)setQueryPlanLoggingEnabled:(BOOL)a0;
- (BOOL)showLocationsFoundInApps;
- (id)trialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1;
- (BOOL)queryPlanLoggingEnabled;
- (void)deregisterDisabledBundleIdentifierChangeHandlerWithToken:(int)a0;
- (void)deregisterQueryPlanLoggingChangeHandlerWithToken:(int)a0;

@end
