@class NSCache, NSString, PPLocalTopicStore, _PASLock, PPTrialWrapper, NSObject, PPNamedEntityStorage, _PASLazyResult;
@protocol OS_dispatch_queue;

@interface PPLocalNamedEntityStore : PPNamedEntityStore <PPFeedbackProcessing> {
    _PASLock *_lock;
    PPLocalTopicStore *_topicStoreForNamedEntityMapping;
    _PASLazyResult *_lazyContactStoreForMapsFeedback;
    NSObject<OS_dispatch_queue> *_mapsPrefetchQueue;
    NSCache *_modelCache;
    PPTrialWrapper *_trialWrapper;
}

@property (retain, nonatomic) NSString *invalidationNotificationOverride;
@property (retain, nonatomic) NSString *meaningfulChangeNotificationOverride;
@property (readonly, nonatomic) PPNamedEntityStorage *storage;

+ (id)defaultStore;
+ (id)recordsForNamedEntities:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2;
+ (float)resolvedPerRecordDecayRateForFeatureProvider:(id)a0 perRecordDecayRate:(float)a1;
+ (void)sortAndTruncate:(id)a0 queryLimit:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (void)runWithLockAcquired:(id /* block */)a0;
- (id)rankedNamedEntitiesWithQuery:(id)a0 error:(id *)a1;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (char)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;
- (char)cloudSyncWithError:(id *)a0;
- (char)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (char)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (char)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThan:(id)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (char)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (char)donateLocationNamedEntities:(id)a0 bundleId:(id)a1 groupId:(id)a2 error:(id *)a3;
- (char)donateMapItem:(id)a0 forPlaceName:(id)a1 error:(id *)a2;
- (char)donateNamedEntities:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(char)a3 sentimentScore:(double)a4 error:(id *)a5;
- (char)flushDonationsWithError:(id *)a0;
- (char)iterNamedEntityRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (char)iterRankedNamedEntitiesWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)mapItemForPlaceName:(id)a0 error:(id *)a1;
- (id)namedEntityRecordsWithQuery:(id)a0 error:(id *)a1;
- (char)removeMapItemForPlaceName:(id)a0 error:(id *)a1;
- (char)removeMapItemsBeforeCutoffDate:(id)a0 error:(id *)a1;
- (void)processFeedback:(id)a0;
- (char)deleteAllNamedEntitiesOlderThanDate:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (char)deleteAllNamedEntityFeedbackCountsOlderThanDate:(id)a0;
- (void)disableSyncForBundleIds:(id)a0;
- (char)filterExistingNamedEntitiesWithShouldContinueBlock:(id /* block */)a0;
- (double)finalScoreFromRecordsUsingHybrid:(id)a0 streamingScorer:(id)a1 mlModel:(id)a2;
- (id)initWithStorage:(id)a0 topicStoreForNamedEntityMapping:(id)a1 lazyContactStoreForMapsFeedback:(id)a2 trialWrapper:(id)a3;
- (id)namedEntityToMatchedStringMappingForNamedEntities:(id)a0 timestamp:(double)a1 error:(id *)a2;
- (char)pruneOrphanedNamedEntityFeedbackCountsWithLimit:(long long)a0 rowOffset:(unsigned long long)a1 deletedCount:(unsigned long long *)a2 isComplete:(char *)a3;
- (id)rankedNamedEntitiesWithQuery:(id)a0 error:(id *)a1 clientProcessName:(id)a2;
- (id)scoredEntityFromRecords:(id)a0 scoringDate:(id)a1 perRecordDecayRate:(float)a2 decayRate:(float)a3 sourceStats:(id)a4 decayedFeedbackCounts:(id)a5 streamingScorer:(id *)a6 mlModel:(id)a7;

@end
