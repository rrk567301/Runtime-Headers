@interface CESCalendarEntityWrapper : CESEntityWrapper

+ (id)defaultWrapper;

- (id)entityName;
- (id)fullName;
- (Class)recordClass;
- (long long)entityType;
- (BOOL)deleteAllRecords;
- (id)createEKObjectWithValues:(id)a0 withOwner:(id *)a1;
- (id)fetchAllEKObjects;
- (BOOL)defersDelete;
- (BOOL)shouldAcceptChangeWithValues:(id)a0 forSyncID:(id)a1 isInsert:(BOOL)a2 isDelete:(BOOL)a3;

@end
