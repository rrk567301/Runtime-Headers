@class PPTrialWrapper, NSObject, PPRecordStorageHelper, PPSQLDatabase, PPDKStorage, PPSourceStorage;
@protocol OS_dispatch_queue;

@interface PPNamedEntityStorage : NSObject {
    PPSQLDatabase *_db;
    PPDKStorage *_dkStorage;
    id _deletionObserver;
    PPRecordStorageHelper *_storageHelper;
    PPSourceStorage *_sourceStorage;
    PPTrialWrapper *_trialWrapper;
    NSObject<OS_dispatch_queue> *_populateDatabaseQueue;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (char)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;
- (char)iterNamedEntityRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)namedEntityFilterLastRecordDate;
- (void)clearRemoteRecordsMissingFromDuetWithShouldContinueBlock:(id /* block */)a0;
- (id)clusterIdentifiersExistingBeforeDate:(id)a0;
- (char)decayFeedbackCountsWithDecayRate:(double)a0 shouldContinueBlock:(id /* block */)a1;
- (id)decayedFeedbackCountsForClusterIdentifier:(id)a0;
- (char)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 atLeastOneNamedEntityRemoved:(char *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (char)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 atLeastOneNamedEntityRemoved:(char *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (char)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThanDate:(id)a2 atLeastOneNamedEntityRemoved:(char *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (char)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 atLeastOneNamedEntityRemoved:(char *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (char)deleteAllNamedEntitiesOlderThanDate:(id)a0 atLeastOneNamedEntityRemoved:(char *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (char)deleteAllNamedEntityFeedbackCountRecordsOlderThanDate:(id)a0;
- (char)deleteNamedEntitiesMatchingRowIds:(id)a0 atLeastOneNamedEntityRemoved:(char *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (void)disableSyncForBundleIds:(id)a0;
- (char)donateNamedEntities:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(char)a3 decayRate:(double)a4 sentimentScore:(double)a5 error:(id *)a6;
- (char)donateNamedEntityFeedback:(id)a0;
- (unsigned int)duetReadBatchSize;
- (double)duetWriteBatchInterval;
- (unsigned int)duetWriteBatchSize;
- (void)exportRecordsToDKWithShouldContinueBlock:(id /* block */)a0;
- (id)firstDonationSourceCountsWithShouldContinueBlock:(id /* block */)a0;
- (void)fixupDKEventsMetadataWithShouldContinueBlock:(id /* block */)a0;
- (void)fixupDKEventsWithShouldContinueBlock:(id /* block */)a0;
- (void)importRemotelyGeneratedNamedEntityDKEventsWithLimit:(unsigned int)a0 isComplete:(char *)a1 shouldContinueBlock:(id /* block */)a2;
- (id)initWithDatabase:(id)a0 maxRecords:(unsigned int)a1 dkStorage:(id)a2 loadEmptyDatabaseFromDK:(char)a3 trialWrapper:(id)a4;
- (char)iterNamedEntityRecordsAndIdsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)lastDonationTimeForSourcesBeforeDate:(id)a0;
- (id)namedEntityFilterLastRunDateWithError:(id *)a0;
- (void)processNewDKEventDeletions;
- (char)pruneOrphanedNamedEntityFeedbackCountRecordsWithLimit:(unsigned long long)a0 rowOffset:(unsigned long long)a1 deletedCount:(unsigned long long *)a2 isComplete:(char *)a3;
- (char)setNamedEntityFilterLastRecordDate:(id)a0 error:(id *)a1;
- (char)setNamedEntityFilterLastRunDate:(id)a0 error:(id *)a1;
- (id)sourceStats:(unsigned long long)a0 withExcludedAlgorithms:(id)a1;
- (id)tempViewForSourceIdsExcludedAlgorithms:(id)a0 txnWitness:(id)a1;
- (id)thirdPartyBundleIdsFromToday;
- (unsigned int)uniqueClusterIdentifierCount;

@end
