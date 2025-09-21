@class NSArray, FCTagRecordSource, FCHeldRecords, FCAssetManager;
@protocol FCTagsFetchOperationDelegate, FCCoreConfiguration;

@interface FCTagsFetchOperation : FCMultiStepFetchOperation {
    NSArray *_tagIDs;
    FCHeldRecords *_heldTagRecords;
    FCHeldRecords *_heldParentTagRecords;
    FCHeldRecords *_heldChildTagRecords;
    FCTagRecordSource *_tagRecordSource;
    FCAssetManager *_assetManager;
    id<FCCoreConfiguration> _configuration;
    id<FCTagsFetchOperationDelegate> _delegate;
}

@property (nonatomic) char includeChildren;
@property (nonatomic) char includeParents;
@property char overrideTargetsCachePolicy;
@property unsigned long long targetsCachePolicy;
@property double targetsMaximumCachedAge;
@property char overrideChildrenCachePolicy;
@property unsigned long long childrenCachePolicy;
@property double childrenMaximumCachedAge;

- (void).cxx_destruct;
- (id)completeFetchOperation;
- (void)customizeChildOperation:(id)a0 forFetchStep:(SEL)a1;
- (id)fetchChildTagRecordsWithCompletion:(id /* block */)a0;
- (id)fetchParentTagRecordsWithCompletion:(id /* block */)a0;
- (id)fetchTagRecordsWithCompletion:(id /* block */)a0;
- (id)initWithTagIDs:(id)a0 tagRecordSource:(id)a1 assetManager:(id)a2 configuration:(id)a3 delegate:(id)a4;

@end
