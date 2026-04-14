@class AXDispatchTimer;

@interface AXSSPunctuationGroupCloudKitHelper : AXSSCloudKitHelper {
    AXDispatchTimer *_changeCoalescer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)recordType;
- (id)apsEnvironment;
- (void)beginWatchingForChanges;
- (id)testRecordForSchemaCreation:(id)a0;
- (Class)managedObjectClass;
- (void)processServerUpdateChanges:(id)a0 moc:(id)a1 recordNameToManagedObject:(id)a2;
- (void)clearRecordsForPurging:(id)a0;
- (void)retrieveLocalChangesForCloud:(id /* block */)a0;
- (id)createCKRecordFromObject:(id)a0;
- (id)createCKRecordFromGroup:(id)a0;
- (void)punctuationGroupsChanged:(id)a0;

@end
