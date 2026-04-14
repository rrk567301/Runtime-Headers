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
- (BOOL)deleteAllRecords;
- (void)releaseMemoryFromPushing;
- (void)processDeferredDeletes;
- (id)createEKObjectWithValues:(id)a0 withOwner:(id *)a1;
- (id)fetchAllEKObjects;
- (BOOL)deleteObjectWithRecordID:(id)a0;
- (id)objectIDFromSyncID:(id)a0;
- (id)objectFromSyncID:(id)a0;
- (id)fetchObjectAndWrap:(id)a0;
- (BOOL)defersDelete;
- (BOOL)shouldBatchPush;
- (void)deferDelete:(id)a0;
- (void)trackRejection:(id)a0;
- (BOOL)isRejectedId:(id)a0;
- (id)wrapEKObject:(id)a0 withOwner:(id)a1;
- (id)wrapEKObject:(id)a0;
- (id)fetchAllWrapped;
- (id)createWrappers:(id)a0;
- (int)processModify:(id)a0 withSyncID:(id)a1 givingID:(id *)a2 error:(id *)a3 record:(id)a4;
- (id)createObjectWrapper:(id)a0 withValues:(id)a1;
- (int)processInsertWithValues:(id)a0 withSyncID:(id)a1 givingID:(id *)a2 error:(id *)a3 inSession:(id)a4;
- (id)fetchWrappedChanges;
- (id)fetchChangedRecordsMoreComing:(BOOL *)a0;
- (id)fetchAllRecordsMoreComing:(BOOL *)a0;
- (id)fetchAllRecords;
- (id)fetchChangedRecords;
- (BOOL)shouldAcceptChangeWithValues:(id)a0 forSyncID:(id)a1 isInsert:(BOOL)a2 isDelete:(BOOL)a3;
- (void)logChangeRejectionBecause:(id)a0 recordID:(id)a1 isInsert:(BOOL)a2;

@end
