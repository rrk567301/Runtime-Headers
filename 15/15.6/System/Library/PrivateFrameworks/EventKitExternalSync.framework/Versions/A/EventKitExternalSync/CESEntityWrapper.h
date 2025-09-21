@class NSArray, NSMutableDictionary, NSMutableSet, CESCalStoreSource;

@interface CESEntityWrapper : NSObject

@property (retain) NSArray *wrappedObjectsToPush;
@property (retain) NSMutableDictionary *pushRecordDictionary;
@property unsigned long long indexOfNextObjectToPush;
@property (retain) NSMutableSet *deferredDeletes;
@property (retain) NSMutableSet *rejectedIDs;
@property (readonly) NSMutableDictionary *attributeMappings;
@property (readonly) NSMutableDictionary *relationMappings;
@property (retain) CESCalStoreSource *store;

- (id)init;
- (void).cxx_destruct;
- (id)entityName;
- (id)fullName;
- (Class)recordClass;
- (long long)entityType;
- (char)deleteAllRecords;
- (id)createObjectWrapper:(id)a0 withValues:(id)a1;
- (id)fetchAllWrapped;
- (id)createWrappers:(id)a0;
- (id)fetchAllRecords;
- (char)shouldBatchPush;
- (void)trackRejection:(id)a0;
- (id)createEKObjectWithValues:(id)a0 withOwner:(id *)a1;
- (void)deferDelete:(id)a0;
- (char)defersDelete;
- (char)deleteObjectWithRecordID:(id)a0;
- (id)fetchAllEKObjects;
- (id)fetchAllRecordsMoreComing:(char *)a0;
- (id)fetchChangedRecords;
- (id)fetchChangedRecordsMoreComing:(char *)a0;
- (id)fetchObjectAndWrap:(id)a0;
- (id)fetchWrappedChanges;
- (char)isRejectedId:(id)a0;
- (void)logChangeRejectionBecause:(id)a0 recordID:(id)a1 isInsert:(char)a2;
- (id)objectFromSyncID:(id)a0;
- (id)objectIDFromSyncID:(id)a0;
- (void)processDeferredDeletes;
- (int)processInsertWithValues:(id)a0 withSyncID:(id)a1 givingID:(id *)a2 error:(id *)a3 inSession:(id)a4;
- (int)processModify:(id)a0 withSyncID:(id)a1 givingID:(id *)a2 error:(id *)a3 record:(id)a4;
- (void)releaseMemoryFromPushing;
- (char)shouldAcceptChangeWithValues:(id)a0 forSyncID:(id)a1 isInsert:(char)a2 isDelete:(char)a3;
- (id)wrapEKObject:(id)a0;
- (id)wrapEKObject:(id)a0 withOwner:(id)a1;

@end
