@class NSArray;
@protocol FCContentContext;

@interface FCResourcesFetchOperation : FCMultiStepFetchOperation {
    BOOL _downloadAssets;
    id<FCContentContext> _context;
    NSArray *_resourceIDs;
    NSArray *_resources;
}

@property (nonatomic) long long cacheLifetimeHint;
@property (nonatomic) unsigned long long maxConcurrentFetchCount;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ interestTokenHandler;
@property (copy, nonatomic) id /* block */ archiveHandler;

- (id)completeFetchOperation;
- (BOOL)validateOperation;
- (id)initWithContext:(id)a0 resourceIDs:(id)a1 downloadAssets:(BOOL)a2;
- (void)operationWillFinishWithError:(id)a0;
- (id)init;
- (id)fetchResourcesWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)downloadAssetsWithCompletion:(id /* block */)a0;

@end
