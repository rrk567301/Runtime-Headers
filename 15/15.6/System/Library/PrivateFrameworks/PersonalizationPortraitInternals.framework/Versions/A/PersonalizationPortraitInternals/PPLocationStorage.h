@class PPTrialWrapper, PPRecordStorageHelper, PPSQLDatabase, PPDKStorage, PPSourceStorage;

@interface PPLocationStorage : NSObject {
    PPSQLDatabase *_db;
    PPDKStorage *_dkStorage;
    id _deletionObserver;
    PPRecordStorageHelper *_storageHelper;
    PPSourceStorage *_sourceStorage;
    PPTrialWrapper *_trialWrapper;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (char)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;
- (char)iterLocationRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (char)decayFeedbackCountsWithDecayRate:(double)a0 shouldContinueBlock:(id /* block */)a1;
- (id)decayedFeedbackCountsForClusterIdentifier:(id)a0;
- (char)deleteAllLocationFeedbackCountRecordsOlderThanDate:(id)a0;
- (char)deleteAllLocationsFromSourcesWithBundleId:(id)a0 atLeastOneLocationRemoved:(char *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (char)deleteAllLocationsFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 atLeastOneLocationRemoved:(char *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (char)deleteAllLocationsFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThanDate:(id)a2 atLeastOneLocationRemoved:(char *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (char)deleteAllLocationsFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 atLeastOneLocationRemoved:(char *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (char)deleteAllLocationsOlderThanDate:(id)a0 atLeastOneLocationRemoved:(char *)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (char)donateLocationFeedback:(id)a0;
- (char)donateLocations:(id)a0 source:(id)a1 contextualNamedEntities:(id)a2 algorithm:(unsigned short)a3 cloudSync:(char)a4 error:(id *)a5;
- (id)initWithDatabase:(id)a0 maxRecords:(unsigned int)a1 dkStorage:(id)a2 loadEmptyDatabaseFromDK:(char)a3 trialWrapper:(id)a4;
- (id)lastDonationTimeForSourcesBeforeDate:(id)a0;
- (char)pruneOrphanedLocationFeedbackCountRecordsWithLimit:(unsigned long long)a0 rowOffset:(unsigned long long)a1 deletedCount:(unsigned long long *)a2 isComplete:(char *)a3;
- (id)sourceStats:(unsigned long long)a0 withExcludedAlgorithms:(id)a1;
- (id)tempViewForSourceIdsExcludedAlgorithms:(id)a0 txnWitness:(id)a1;
- (id)thirdPartyBundleIdsFromToday;

@end
