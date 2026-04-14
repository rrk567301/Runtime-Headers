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
+ (BOOL)isCloudSyncEnabled;
+ (void)clearTestSettings;
+ (id)cloudSyncDisabledFirstPartyBundleIds;
+ (void)disableBundleIdentifier:(id)a0;
+ (BOOL)isVoiceAssistantEnabled;

- (id)userDefaults;
- (BOOL)isAuthorizedToLogLocation;
- (id)entitiesMappingPreviousTrieSha256;
- (id)trialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1;
- (void)triggerDelayedCloudSyncRewrite;
- (void)setEntitiesBackfilledTimestamp:(id)a0;
- (void)registerCloudKitDisabledBundleIdRewriteHandler;
- (BOOL)queryPlanLoggingEnabled;
- (BOOL)hasWrittenSharedWithYouContentConsumed;
- (id)init;
- (void)clearAssetMetadataRefreshIntervalSeconds;
- (id)trialPathOverrides;
- (void)deregisterDisabledBundleIdentifierChangeHandlerWithToken:(int)a0;
- (id)assetDefaultBundleOverridePathForAssetIdentifier:(id)a0;
- (void)rewriteSyncStateForDisabledBundleIdsAsync;
- (double)weightMultiplier;
- (void)setEntitiesMappingTrieSha256:(id)a0;
- (BOOL)showLocationsFoundInApps;
- (double)assetMetadataRefreshIntervalSeconds;
- (void)setAssetMetadataRefreshIntervalSeconds:(double)a0;
- (void)refreshCloudKitDisabledBundleIdsAsync;
- (void)setAssetDefaultBundleOverridePath:(id)a0 assetIdentifier:(id)a1;
- (void)registerDisabledBundleIdPurgeHandler;
- (void)setTrialUseDefaultFiles:(BOOL)a0;
- (void)deregisterQueryPlanLoggingChangeHandlerWithToken:(int)a0;
- (void)setWrittenSharedWithYouContentConsumed:(BOOL)a0;
- (id)abGroupOverride;
- (void)setQueryPlanLoggingEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)bundleIdentifierIsEnabledForCloudKit:(id)a0;
- (BOOL)trialUseDefaultFiles;
- (void)setTrialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1 path:(id)a2;
- (id)entitiesBackfilledTimestamp;
- (BOOL)hasWrittenSharedWithYouContentAvailable;
- (BOOL)bundleIdentifierIsEnabledForDonation:(id)a0;
- (int)registerDisabledBundleIdentifierChangeHandler:(id /* block */)a0;
- (int)registerQueryPlanLoggingChangeHandler:(id /* block */)a0;
- (void)setWrittenSharedWithYouContentAvailable:(BOOL)a0;

@end
