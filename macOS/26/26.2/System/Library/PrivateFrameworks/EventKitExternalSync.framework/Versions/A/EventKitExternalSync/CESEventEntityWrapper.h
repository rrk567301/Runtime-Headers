@class NSArray;

@interface CESEventEntityWrapper : CESEntityWrapper {
    NSArray *_sCachedAllFetchedEvents;
}

+ (id)defaultWrapper;

- (id)entityName;
- (id)fullName;
- (void)clearCache;
- (void).cxx_destruct;
- (long long)entityType;
- (Class)recordClass;
- (BOOL)shouldBatchPush;
- (id)allFetchedEvents;
- (id)createEKObjectWithValues:(id)a0 withOwner:(id *)a1;
- (id)fetchAllEKObjects;
- (id)fetchObjectAndWrap:(id)a0;
- (int)processInsertWithValues:(id)a0 withSyncID:(id)a1 givingID:(id *)a2 error:(id *)a3 inSession:(id)a4;
- (BOOL)shouldAcceptChangeWithValues:(id)a0 forSyncID:(id)a1 isInsert:(BOOL)a2 isDelete:(BOOL)a3;

@end
