@class AXDispatchTimer;

@interface AXSSPunctuationEntryCloudKitHelper : AXSSCloudKitHelper {
    AXDispatchTimer *_changeCoalescer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)recordType;
- (id)apsEnvironment;
- (Class)managedObjectClass;
- (id)testRecordForSchemaCreation:(id)a0;
- (void)beginWatchingForChanges;
- (id)createCKRecordFromObject:(id)a0;
- (void)processServerUpdateChanges:(id)a0 moc:(id)a1 recordNameToManagedObject:(id)a2;
- (void)processRecordDeletionsFromServer:(id)a0;
- (void)retrieveLocalChangesForCloud:(id /* block */)a0;
- (void)clearRecordsForPurging:(id)a0;
- (void)punctuationGroupChanged:(id)a0;
- (id)createCKRecordFromEntry:(id)a0;
- (void)_processPunctuationEntryFromCKRecord:(id)a0;

@end
