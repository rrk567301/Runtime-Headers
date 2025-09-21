@class NSString;

@interface PPTopicStore : NSObject <PPFeedbackAccepting, PPUniversalSearchSpotlightFeedbackAccepting, PPClientStore>

@property (retain, nonatomic) NSString *clientIdentifier;

+ (id)new;
+ (id)defaultStore;
+ (double)decayValue:(double)a0 withDecayRate:(double)a1 forTimeElapsed:(double)a2;

- (id)init;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (char)clearWithError:(id *)a0;
- (id)topicExtractionsFromText:(id)a0 error:(id *)a1;
- (id)_initFromSubclass;
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
- (char)iterRankedTopicsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (char)iterScoresForTopicMapping:(id)a0 query:(id)a1 error:(id *)a2 block:(id /* block */)a3;
- (char)iterTopicRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)rankedTopicsWithQuery:(id)a0 error:(id *)a1;
- (void)registerUniversalSearchSpotlightFeedback:(id)a0 completion:(id /* block */)a1;
- (id)scoresForTopicMapping:(id)a0 query:(id)a1 error:(id *)a2;
- (id)topicCacheSandboxExtensionToken:(id *)a0;
- (id)topicRecordsWithQuery:(id)a0 error:(id *)a1;
- (id)unmapMappedTopicIdentifier:(id)a0 mappingIdentifier:(id)a1 error:(id *)a2;

@end
