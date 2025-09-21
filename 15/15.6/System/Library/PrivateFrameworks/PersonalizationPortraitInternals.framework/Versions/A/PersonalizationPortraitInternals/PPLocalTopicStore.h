@class PPTopicBlocklist, NSString, NSError, PPTopicStorage, _PASLock, PPTrialWrapper, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface PPLocalTopicStore : PPTopicStore <PPFeedbackProcessing> {
    _PASLock *_lock;
    NSCache *_modelCache;
    PPTrialWrapper *_trialWrapper;
    PPTopicBlocklist *_blocklist;
    NSString *_cachePath;
    NSObject<OS_dispatch_queue> *_cacheAsyncUpdateQueue;
    NSObject<OS_dispatch_queue> *_cacheUpdateQueue;
    struct atomic_flag { _Atomic BOOL _Value; } _cacheUpdateEnqueued;
    NSError *_cacheUpdateError;
}

@property (readonly, nonatomic) PPTopicStorage *storage;

+ (id)defaultStore;
+ (id)calibrateScoredTopic:(id)a0 calibrationTrie:(id)a1;
+ (id)recordsForTopics:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2;
+ (void)sortAndTruncate:(id)a0 queryLimit:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)topicExtractionsFromText:(id)a0 error:(id *)a1;
- (id)cachePath:(id *)a0;
- (id)cachedTopicScores;
- (char)clearTopicScoresCache:(id *)a0;
- (char)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;
- (char)cloudSyncWithError:(id *)a0;
- (char)computeAndCacheTopicScores:(id *)a0;
- (char)deleteAllTopicsFromSourcesWithBundleId:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (char)deleteAllTopicsFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (char)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThan:(id)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (char)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (char)deleteAllTopicsWithTopicId:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (char)donateTopics:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(char)a3 sentimentScore:(double)a4 exactMatchesInSourceText:(id)a5 error:(id *)a6;
- (char)flushDonationsWithError:(id *)a0;
- (char)iterScoresForTopicMapping:(id)a0 query:(id)a1 error:(id *)a2 block:(id /* block */)a3;
- (char)iterTopicRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)rankedTopicsWithQuery:(id)a0 error:(id *)a1;
- (void)registerUniversalSearchSpotlightFeedback:(id)a0 completion:(id /* block */)a1;
- (id)scoresForTopicMapping:(id)a0 query:(id)a1 error:(id *)a2;
- (id)topicCacheSandboxExtensionToken:(id *)a0;
- (id)topicRecordsWithQuery:(id)a0 error:(id *)a1;
- (id)unmapMappedTopicIdentifier:(id)a0 mappingIdentifier:(id)a1 error:(id *)a2;
- (void)processFeedback:(id)a0;
- (char)computeAndCacheTopicScoresWithShouldContinueBlock:(id /* block */)a0 error:(id *)a1;
- (char)deleteAllTopicFeedbackCountsOlderThanDate:(id)a0;
- (char)deleteAllTopicsFromSourcesWithBundleId:(id)a0 algorithm:(unsigned long long)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (char)deleteAllTopicsFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 algorithm:(unsigned long long)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (char)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupId:(id)a1 algorithm:(unsigned long long)a2 olderThan:(id)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (char)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 algorithm:(unsigned long long)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (char)deleteAllTopicsOlderThanDate:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (char)deleteAllTopicsWithTopicId:(id)a0 algorithm:(unsigned long long)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (void)disableSyncForBundleIds:(id)a0;
- (double)finalScoreFromRecordsUsingHybrid:(id)a0 streamingScorer:(id)a1 mlModel:(id)a2;
- (id)initWithStorage:(id)a0 trialWrapper:(id)a1;
- (char)iterScoredTopicsWithQuery:(id)a0 error:(id *)a1 clientProcessName:(id)a2 block:(id /* block */)a3;
- (void)logDonationErrorForReason:(long long)a0 errorCode:(unsigned long long)a1 source:(id)a2;
- (char)pruneOrphanedTopicFeedbackCountsWithLimit:(unsigned long long)a0 rowOffset:(unsigned long long)a1 deletedCount:(unsigned long long *)a2 isComplete:(char *)a3;
- (id)rankedTopicsWithQuery:(id)a0 error:(id *)a1 clientProcessName:(id)a2;
- (id)scoreTopics:(id)a0 scoringDate:(id)a1 decayRate:(double)a2 strictFiltering:(char)a3 sourceStats:(id)a4 decayedFeedbackCounts:(id)a5 streamingScorer:(id *)a6 mlModel:(id)a7;
- (id)scoresForTopicMapping:(id)a0 query:(id)a1 error:(id *)a2 clientProcessName:(id)a3;
- (id)topicExtractionsFromText:(id)a0 clientProcessName:(id)a1 error:(id *)a2;

@end
