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
+ (void)disableBundleIdentifier:(id)a0;
+ (BOOL)isVoiceAssistantEnabled;
+ (void)clearTestSettings;
+ (id)cloudSyncDisabledFirstPartyBundleIds;

- (void)setWrittenSharedWithYouContentAvailable:(BOOL)a0;
- (id)trialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1;
- (void)setEntitiesBackfilledTimestamp:(id)a0;
- (void)setEntitiesMappingTrieSha256:(id)a0;
- (void)triggerDelayedCloudSyncRewrite;
- (void)setWrittenSharedWithYouContentConsumed:(BOOL)a0;
- (void)refreshCloudKitDisabledBundleIdsAsync;
- (BOOL)queryPlanLoggingEnabled;
- (int)registerQueryPlanLoggingChangeHandler:(id /* block */)a0;
- (BOOL)isAuthorizedToLogLocation;
- (void)deregisterQueryPlanLoggingChangeHandlerWithToken:(int)a0;
- (void)setTrialUseDefaultFiles:(BOOL)a0;
- (BOOL)trialUseDefaultFiles;
- (id)entitiesMappingPreviousTrieSha256;
- (id)trialPathOverrides;
- (BOOL)showLocationsFoundInApps;
- (void)registerCloudKitDisabledBundleIdRewriteHandler;
- (void)setAssetDefaultBundleOverridePath:(id)a0 assetIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)setQueryPlanLoggingEnabled:(BOOL)a0;
- (id)abGroupOverride;
- (BOOL)hasWrittenSharedWithYouContentConsumed;
- (int)registerDisabledBundleIdentifierChangeHandler:(id /* block */)a0;
- (void)rewriteSyncStateForDisabledBundleIdsAsync;
- (void)registerDisabledBundleIdPurgeHandler;
- (double)assetMetadataRefreshIntervalSeconds;
- (BOOL)hasWrittenSharedWithYouContentAvailable;
- (id)init;
- (id)userDefaults;
- (void)setTrialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1 path:(id)a2;
- (BOOL)bundleIdentifierIsEnabledForDonation:(id)a0;
- (BOOL)bundleIdentifierIsEnabledForCloudKit:(id)a0;
- (id)entitiesBackfilledTimestamp;
- (void)deregisterDisabledBundleIdentifierChangeHandlerWithToken:(int)a0;
- (void)clearAssetMetadataRefreshIntervalSeconds;
- (double)weightMultiplier;
- (void)setAssetMetadataRefreshIntervalSeconds:(double)a0;
- (id)assetDefaultBundleOverridePathForAssetIdentifier:(id)a0;

@end
