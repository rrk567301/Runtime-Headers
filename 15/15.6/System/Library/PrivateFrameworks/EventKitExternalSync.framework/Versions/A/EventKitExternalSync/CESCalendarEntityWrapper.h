@interface CESCalendarEntityWrapper : CESEntityWrapper

+ (id)defaultWrapper;

- (id)entityName;
- (id)fullName;
- (Class)recordClass;
- (long long)entityType;
- (char)deleteAllRecords;
- (id)createEKObjectWithValues:(id)a0 withOwner:(id *)a1;
- (char)defersDelete;
- (id)fetchAllEKObjects;
- (char)shouldAcceptChangeWithValues:(id)a0 forSyncID:(id)a1 isInsert:(char)a2 isDelete:(char)a3;

@end
