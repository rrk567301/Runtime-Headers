@interface CESAlarmEntityWrapper : CESEntityWrapper

+ (id)defaultWrapper;

- (Class)recordClass;
- (long long)entityType;
- (char)shouldBatchPush;
- (char)alarmMatchesClassType:(id)a0;
- (id)createEKObjectWithValues:(id)a0 withOwner:(id *)a1;
- (id)fetchAllEKObjects;
- (id)fetchWrappedChanges;
- (char)shouldAcceptChangeWithValues:(id)a0 forSyncID:(id)a1 isInsert:(char)a2 isDelete:(char)a3;
- (id)wrapEKObject:(id)a0;
- (id)wrapEKObject:(id)a0 withOwner:(id)a1;

@end
