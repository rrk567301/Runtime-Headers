@class NSString, PPSourceStorage, PPDKStorage, _DKEventStream;

@interface PPRecordStorageHelper : NSObject {
    NSString *_table;
    NSString *_feedbackTable;
    NSString *_clusterIdentifierColumn;
    unsigned int _maxRecords;
    PPDKStorage *_duetStorage;
    _DKEventStream *_duetStream;
    NSString *_lastDuetImportDateKey;
    NSString *_lastDuetDeletionDateKey;
    PPSourceStorage *_sourceStorage;
}

- (id)init;
- (void).cxx_destruct;
- (id)blobFromUUID:(id)a0;
- (char)clearWithDatabase:(id)a0 client:(unsigned char)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3 clearExternalTableReferences:(id /* block */)a4;
- (id)clusterIdentifiersExistingInDatabaseBeforeDate:(id)a0 client:(unsigned char)a1 date:(id)a2;
- (char)decayFeedbackWithDatabase:(id)a0 client:(unsigned char)a1 decayRate:(double)a2;
- (id)decayedFeedbackCountsForItemString:(id)a0 database:(id)a1 client:(unsigned char)a2;
- (char)deleteAllRecordsSourcedFromBundleId:(id)a0 algorithm:(unsigned int)a1 txnWitness:(id)a2 atLeastOneRecordClusterRemoved:(char *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (char)deleteAllRecordsSourcedFromBundleId:(id)a0 documentIds:(id)a1 algorithm:(unsigned int)a2 txnWitness:(id)a3 atLeastOneRecordClusterRemoved:(char *)a4 deletedCount:(unsigned long long *)a5 error:(id *)a6;
- (char)deleteAllRecordsSourcedFromBundleId:(id)a0 documentIds:(id)a1 txnWitness:(id)a2 atLeastOneRecordClusterRemoved:(char *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (char)deleteAllRecordsSourcedFromBundleId:(id)a0 groupId:(id)a1 olderThanDate:(id)a2 algorithm:(unsigned int)a3 txnWitness:(id)a4 atLeastOneRecordClusterRemoved:(char *)a5 deletedCount:(unsigned long long *)a6 error:(id *)a7;
- (char)deleteAllRecordsSourcedFromBundleId:(id)a0 groupId:(id)a1 olderThanDate:(id)a2 txnWitness:(id)a3 atLeastOneRecordClusterRemoved:(char *)a4 deletedCount:(unsigned long long *)a5 error:(id *)a6;
- (char)deleteAllRecordsSourcedFromBundleId:(id)a0 groupIds:(id)a1 algorithm:(unsigned int)a2 txnWitness:(id)a3 atLeastOneRecordClusterRemoved:(char *)a4 deletedCount:(unsigned long long *)a5 error:(id *)a6;
- (char)deleteAllRecordsSourcedFromBundleId:(id)a0 groupIds:(id)a1 txnWitness:(id)a2 atLeastOneRecordClusterRemoved:(char *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (char)deleteAllRecordsSourcedFromBundleId:(id)a0 txnWitness:(id)a1 atLeastOneRecordClusterRemoved:(char *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (char)deleteAllRecordsWithClusterIdentifier:(id)a0 algorithm:(unsigned int)a1 txnWitness:(id)a2 atLeastOneRecordClusterRemoved:(char *)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (char)deleteAllRecordsWithClusterIdentifier:(id)a0 txnWitness:(id)a1 atLeastOneRecordClusterRemoved:(char *)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (char)deleteAllRecordsWithName:(id)a0 algorithm:(unsigned int)a1 bundleId:(id)a2 groupId:(id)a3 category:(unsigned int)a4 beforeDate:(id)a5 txnWitness:(id)a6 atLeastOneRecordClusterRemoved:(char *)a7 deletedCount:(unsigned long long *)a8 error:(id *)a9;
- (void)deleteAllRemoteRecordsMissingInDuetFromDatabase:(id)a0 client:(unsigned char)a1 shouldContinueBlock:(id /* block */)a2;
- (char)deleteFeedbackCountRecordsOlderThanDate:(id)a0 txnWitness:(id)a1;
- (void)deleteRecordsForRowIds:(id)a0 txnWitness:(id)a1 atLeastOneClusterRemoved:(char *)a2 deletedCount:(unsigned long long *)a3;
- (void)disableSyncForBundleIds:(id)a0 txnWitness:(id)a1;
- (unsigned int)distinctClusterCountInDatabase:(id)a0 client:(unsigned char)a1;
- (id /* block */)duetEventDeletionProcessingBlockWithDatabase:(id)a0 client:(unsigned char)a1;
- (id)firstDonationSourceCountsForDatabase:(id)a0 client:(unsigned char)a1 shouldContinueBlock:(id /* block */)a2;
- (void)fixupDKEventsMetadataWithShouldContinueBlock:(id /* block */)a0 database:(id)a1 client:(unsigned char)a2;
- (char)fixupDKEventsWithDatabase:(id)a0 fixup49995922Table:(id)a1 batchSize:(unsigned int)a2 shouldContinueBlock:(id /* block */)a3 createRecordWithStatement:(id /* block */)a4 eventForRecord:(id /* block */)a5;
- (void)importDuetEventsWithLimit:(unsigned int)a0 database:(id)a1 client:(unsigned char)a2 remoteEventsOnly:(char)a3 isComplete:(char *)a4 shouldContinueBlock:(id /* block */)a5 eventImportBlock:(id /* block */)a6;
- (id)initWithName:(id)a0 table:(id)a1 clusterIdentifierColumn:(id)a2 maxRecords:(unsigned int)a3 duetStorage:(id)a4 duetStream:(id)a5 sourceStorage:(id)a6;
- (id)lastDonationTimeForSourcesInDatabase:(id)a0 client:(unsigned char)a1 before:(id)a2;
- (char)pruneOrphanedFeedbackCountRecordsWithLimit:(unsigned long long)a0 rowOffset:(unsigned long long)a1 deletedCount:(unsigned long long *)a2 txnWitness:(id)a3 isComplete:(char *)a4;
- (id)rowIdsForRecordsOlderThanDate:(id)a0 txnWitness:(id)a1;
- (id)rowIdsForRecordsSourcedFromBundleId:(id)a0 documentIds:(id)a1 txnWitness:(id)a2;
- (id)rowIdsForRecordsSourcedFromBundleId:(id)a0 exactMatchGroupId:(id)a1 olderThanDate:(id)a2 txnWitness:(id)a3;
- (id)rowIdsForRecordsSourcedFromBundleId:(id)a0 groupIds:(id)a1 txnWitness:(id)a2;
- (id)rowIdsForRecordsSourcedFromBundleId:(id)a0 txnWitness:(id)a1;
- (id)rowIdsForRecordsToDropMakingRoomForCount:(unsigned int)a0 txnWitness:(id)a1;
- (char)storeFeedback:(id)a0 database:(id)a1 client:(unsigned char)a2 lowercaseItemStrings:(char)a3 limit:(unsigned int)a4;
- (id)thirdPartyBundleIdsFromTodayInDatabase:(id)a0 client:(unsigned char)a1;
- (void)truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned int)a0 txnWitness:(id)a1;
- (id)uuidForStatement:(id)a0 columnName:(const char *)a1 tableName:(const char *)a2;

@end
