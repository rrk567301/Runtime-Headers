@class NSArray;

@interface CESEventEntityWrapper : CESEntityWrapper {
    NSArray *_sCachedAllFetchedEvents;
}

+ (id)defaultWrapper;

- (void).cxx_destruct;
- (id)entityName;
- (void)clearCache;
- (id)fullName;
- (Class)recordClass;
- (long long)entityType;
- (char)shouldBatchPush;
- (id)allFetchedEvents;
- (id)createEKObjectWithValues:(id)a0 withOwner:(id *)a1;
- (id)fetchAllEKObjects;
- (id)fetchObjectAndWrap:(id)a0;
- (int)processInsertWithValues:(id)a0 withSyncID:(id)a1 givingID:(id *)a2 error:(id *)a3 inSession:(id)a4;
- (char)shouldAcceptChangeWithValues:(id)a0 forSyncID:(id)a1 isInsert:(char)a2 isDelete:(char)a3;

@end
