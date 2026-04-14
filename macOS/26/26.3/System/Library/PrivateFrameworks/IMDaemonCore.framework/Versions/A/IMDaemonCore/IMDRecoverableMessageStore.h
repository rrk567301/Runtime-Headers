@interface IMDRecoverableMessageStore : NSObject <RecordStoreProviding, RecordStoreDeleting> {
    void /* unknown type, empty encoding */ metadataByRecordNameMap;
}

- (void)clearTombstonesForRecordIDs:(id)a0;
- (id)batchOfRecordIDsToDeleteWithLimit:(long long)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (id)batchOfRecordsToWriteWithFilter:(unsigned long long)a0 limit:(long long)a1 error:(id *)a2;
- (void)legacyImport:(id)a0;
- (void)resetFetchState;
- (void)recordUpdateFailedWithID:(id)a0 localGUID:(id)a1 error:(id)a2;
- (void)recordUpdateSucceededWithRecord:(id)a0;
- (void)resetLocalSyncStateIfAppropriate;
- (void)clearLocalSyncState:(unsigned long long)a0;

@end
