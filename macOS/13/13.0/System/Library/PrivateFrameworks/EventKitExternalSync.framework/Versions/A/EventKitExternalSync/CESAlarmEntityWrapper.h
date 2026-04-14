@interface CESAlarmEntityWrapper : CESEntityWrapper

+ (id)defaultWrapper;

- (Class)recordClass;
- (long long)entityType;
- (id)createEKObjectWithValues:(id)a0 withOwner:(id *)a1;
- (id)fetchAllEKObjects;
- (BOOL)shouldBatchPush;
- (id)wrapEKObject:(id)a0 withOwner:(id)a1;
- (id)wrapEKObject:(id)a0;
- (id)fetchWrappedChanges;
- (BOOL)shouldAcceptChangeWithValues:(id)a0 forSyncID:(id)a1 isInsert:(BOOL)a2 isDelete:(BOOL)a3;
- (BOOL)alarmMatchesClassType:(id)a0;

@end
