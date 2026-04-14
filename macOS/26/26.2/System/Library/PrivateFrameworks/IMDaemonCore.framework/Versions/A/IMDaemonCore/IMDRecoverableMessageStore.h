@interface IMDRecoverableMessageStore : NSObject <RecordStoreProviding, RecordStoreDeleting> {
    void /* unknown type, empty encoding */ metadataByRecordNameMap;
}

- (void)resetLocalSyncStateIfAppropriate;
- (id)batchOfRecordsToWriteWithFilter:(unsigned long long)a0 limit:(long long)a1 error:(id *)a2;
- (void)legacyImport:(id)a0;
- (id)batchOfRecordIDsToDeleteWithLimit:(long long)a0 error:(id *)a1;
- (void)clearTombstonesForRecordIDs:(id)a0;
- (void)recordUpdateFailedWithID:(id)a0 localGUID:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)clearLocalSyncState:(unsigned long long)a0;
- (id)init;
- (void)resetFetchState;
- (void)recordUpdateSucceededWithRecord:(id)a0;

@end
