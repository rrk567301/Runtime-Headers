@class NSString, CSSearchableIndex, ICSearchIndexProgress;

@interface ICSearchIndexImplementation : NSObject <ICSearchIndex>

@property (retain, nonatomic) CSSearchableIndex *searchableIndex;
@property (retain, nonatomic) ICSearchIndexProgress *lastReportedProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)slowFetchAttributes:(id)a0 protectionClass:(id)a1 bundleID:(id)a2 identifiers:(id)a3 completionHandler:(id /* block */)a4;
- (void)deleteSearchableItemsWithIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (void)endIndexBatchWithClientState:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginIndexBatch;
- (void)fetchLastClientStateWithCompletionHandler:(id /* block */)a0;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)csProgressForSearchIndexProgress:(id)a0;
- (void)indexSearchableItems:(id)a0 progress:(id)a1 completionHandler:(id /* block */)a2;
- (void)reportProgress:(id)a0 completionHandler:(id /* block */)a1;

@end
