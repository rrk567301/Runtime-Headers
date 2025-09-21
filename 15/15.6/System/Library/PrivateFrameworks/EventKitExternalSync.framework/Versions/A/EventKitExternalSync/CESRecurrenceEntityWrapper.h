@interface CESRecurrenceEntityWrapper : CESEntityWrapper

+ (id)defaultWrapper;

- (id)entityName;
- (id)fullName;
- (Class)recordClass;
- (long long)entityType;
- (char)deleteAllRecords;
- (char)shouldBatchPush;
- (id)createEKObjectWithValues:(id)a0 withOwner:(id *)a1;
- (id)fetchAllEKObjects;
- (id)objectFromSyncID:(id)a0;
- (int)processInsertWithValues:(id)a0 withSyncID:(id)a1 givingID:(id *)a2 error:(id *)a3 inSession:(id)a4;
- (int)processModify:(id)a0 withSyncID:(id)a1 givingID:(id *)a2 error:(id *)a3 record:(id)a4;
- (char)shouldAcceptChangeWithValues:(id)a0 forSyncID:(id)a1 isInsert:(char)a2 isDelete:(char)a3;
- (id)wrapEKObject:(id)a0;
- (id)wrapEKObject:(id)a0 withOwner:(id)a1;

@end
