@class PPTrialWrapper, NSString, NSObject, PPRecordStorageHelper, PPSQLDatabase, PPDKStorage, PPSourceStorage;
@protocol OS_dispatch_queue;

@interface PPTopicStorage : NSObject {
    PPSQLDatabase *_db;
    PPDKStorage *_dkStorage;
    id _deletionObserver;
    PPRecordStorageHelper *_storageHelper;
    PPSourceStorage *_sourceStorage;
    PPTrialWrapper *_trialWrapper;
    NSObject<OS_dispatch_queue> *_populateDatabaseQueue;
}

@property (readonly, nonatomic) NSString *parentDirectory;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (char)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;
- (char)iterTopicRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (void)clearRemoteRecordsMissingFromDuetWithShouldContinueBlock:(id /* block */)a0;
- (id)clusterIdentifiersExistingBeforeDate:(id)a0;
- (char)decayFeedbackCountsWithDecayRate:(double)a0 shouldContinueBlock:(id /* block */)a1;
- (id)decayedFeedbackCountsForClusterIdentifier:(id)a0;
- (char)deleteAllTopicFeedbackCountRecordsOlderThanDate:(id)a0;
- (char)deleteAllTopicsFromSourcesWithBundleId:(id)a0 algorithm:(unsigned long long)a1 atLeastOneTopicRemoved:(char *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (char)deleteAllTopicsFromSourcesWithBundleId:(id)a0 atLeastOneTopicRemoved:(char *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (char)deleteAllTopicsFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 algorithm:(unsigned long long)a2 atLeastOneTopicRemoved:(char *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (char)deleteAllTopicsFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 atLeastOneTopicRemoved:(char *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (char)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThanDate:(id)a2 algorithm:(unsigned long long)a3 atLeastOneTopicRemoved:(char *)a4 deletedCount:(unsigned long long *)a5 error:(id *)a6;
- (char)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThanDate:(id)a2 atLeastOneTopicRemoved:(char *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (char)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 algorithm:(unsigned long long)a2 atLeastOneTopicRemoved:(char *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (char)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 atLeastOneTopicRemoved:(char *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (char)deleteAllTopicsOlderThanDate:(id)a0 atLeastOneTopicRemoved:(char *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (char)deleteAllTopicsWithTopicId:(id)a0 algorithm:(unsigned long long)a1 atLeastOneTopicRemoved:(char *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (char)deleteAllTopicsWithTopicId:(id)a0 atLeastOneTopicRemoved:(char *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (void)disableSyncForBundleIds:(id)a0;
- (char)donateTopicFeedback:(id)a0;
- (char)donateTopics:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(char)a3 decayRate:(double)a4 sentimentScore:(double)a5 exactMatchesInSourceText:(id)a6 error:(id *)a7;
- (unsigned int)duetReadBatchSize;
- (double)duetWriteBatchInterval;
- (unsigned int)duetWriteBatchSize;
- (void)exportRecordsToDKWithShouldContinueBlock:(id /* block */)a0;
- (id)firstDonationSourceCountsWithShouldContinueBlock:(id /* block */)a0;
- (void)fixupDKEventsMetadataWithShouldContinueBlock:(id /* block */)a0;
- (void)fixupDKEventsWithShouldContinueBlock:(id /* block */)a0;
- (void)importRemotelyGeneratedTopicDKEventsWithLimit:(unsigned int)a0 isComplete:(char *)a1 shouldContinueBlock:(id /* block */)a2;
- (id)initWithDatabase:(id)a0 maxRecords:(unsigned int)a1 dkStorage:(id)a2 loadEmptyDatabaseFromDK:(char)a3 trialWrapper:(id)a4;
- (id)lastDonationTimeForSourcesBeforeDate:(id)a0;
- (void)processNewDKEventDeletions;
- (char)pruneOrphanedTopicFeedbackCountRecordsWithLimit:(long long)a0 rowOffset:(unsigned long long)a1 deletedCount:(unsigned long long *)a2 isComplete:(char *)a3;
- (id)sourceStats:(unsigned long long)a0 withExcludedAlgorithms:(id)a1;
- (id)tempViewForSourceIdsExcludedAlgorithms:(id)a0 txnWitness:(id)a1;
- (id)thirdPartyBundleIdsFromToday;
- (unsigned int)uniqueClusterIdentifierCount;

@end
