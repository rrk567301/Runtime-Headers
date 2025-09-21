@class FCPersonalizationTreatment, NSString, NSDictionary, NSData, NSMutableDictionary, CKRecord, NSObject;
@protocol OS_dispatch_queue, FCOperationThrottler;

@interface FCPersonalizationData : FCPrivateDataController <FCOperationThrottlerDelegate, FCCoreConfigurationObserving, FCPersonalizationDataSource, FCPersonalizationDataGeneratorType, FCReadonlyAggregateStoreProviderType> {
    BOOL _attemptingUpload;
    NSMutableDictionary *_aggregates;
    CKRecord *_remoteRecord;
    NSObject<OS_dispatch_queue> *_accessQueue;
    FCPersonalizationTreatment *_treatment;
    id<FCOperationThrottler> _saveThrottler;
}

@property (readonly, nonatomic) NSData *pbData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *allAggregates;

+ (void)configureKeyValueStoreForJSONHandling:(id)a0;
+ (long long)commandQueueUrgency;
+ (id)desiredKeys;
+ (id)commandStoreFileName;
+ (BOOL)requiresBatchedFirstSync;
+ (BOOL)requiresPushNotificationSupport;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)backingRecordZoneIDs;
+ (id)backingRecordIDs;
+ (unsigned long long)localStoreVersion;
+ (id)localStoreFilename;
+ (BOOL)requiresHighPriorityFirstSync;

- (id)aggregatesForFeatures:(id)a0;
- (void)configurationManager:(id)a0 configurationDidChange:(id)a1;
- (void)loadLocalCachesFromStore;
- (void)clearPersonalizationData;
- (id)baselineAggregateWithConfigurableValues:(id)a0;
- (id)generateDerivedData;
- (void)operationThrottler:(id)a0 performAsyncOperationWithCompletion:(id /* block */)a1;
- (id)d_allGlobalAggregates;
- (id)recordsForRestoringZoneName:(id)a0;
- (id)localStoreMigrator;
- (id)init;
- (void)enumerateAggregatesUsingBlock:(id /* block */)a0;
- (id)aggregateStore;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (void)prepareAggregatesForUseWithCompletionHandler:(id /* block */)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)aggregatesForFeatureKeys:(id)a0;
- (void)updateAggregatesWith:(id)a0 creationBlock:(id /* block */)a1 updateBlock:(id /* block */)a2;
- (id)aggregateForFeatureKey:(id)a0;
- (void)updateFeatures:(id)a0 withAction:(unsigned long long)a1 displayRank:(long long)a2 groupRank:(long long)a3 groupType:(long long)a4 individually:(BOOL)a5 configurableValues:(id)a6;
- (void)modifyLocalAggregatesForFeatureKeys:(id)a0 withAction:(unsigned long long)a1 actionCount:(unsigned long long)a2 defaultClicks:(double)a3 defaultImpressions:(double)a4 impressionBias:(double)a5 groupBias:(double)a6;
- (id)lookupAggregatesWith:(id)a0 creationBlock:(id /* block */)a1;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (id)initWithAggregates:(id)a0;
- (void)activityObservingApplicationWillTerminate;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)syncWithCompletion:(id /* block */)a0;
- (void)activityObservingApplicationWindowDidBecomeBackground;
- (void)d_allResults:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)createAggregateWith:(id)a0 clicks:(double)a1 impressions:(double)a2;

@end
