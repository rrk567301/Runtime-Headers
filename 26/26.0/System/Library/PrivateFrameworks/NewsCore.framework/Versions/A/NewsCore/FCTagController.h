@class NSString, FCOperationThrottler, NSMutableDictionary, FCTagRecordSource, FCThreadSafeMapTable, FCAssetManager, FCThreadSafeMutableSet, FCCKContentDatabase;
@protocol FCCoreConfigurationManager;

@interface FCTagController : NSObject <FCTagsFetchOperationDelegate, FCCoreConfigurationObserving, FCOperationThrottlerDelegate, FCJSONEncodableObjectProviding> {
    FCCKContentDatabase *_contentDatabase;
    FCAssetManager *_assetManager;
    FCTagRecordSource *_tagRecordSource;
    id<FCCoreConfigurationManager> _configurationManager;
    FCThreadSafeMapTable *_fastCache;
    FCOperationThrottler *_tagPrefetchThrottler;
    NSMutableDictionary *_prefetchedTags;
    FCOperationThrottler *_tagRefreshThrottler;
    FCThreadSafeMutableSet *_tagIDsNeedingRefresh;
}

@property (nonatomic) BOOL shouldPrefetchGlobalTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isTagAllowedForNewsVersion:(id)a0;
+ (BOOL)isTagAllowed:(id)a0;
+ (BOOL)isTagAllowedInContentStoreFront:(id)a0;

- (void)configurationManager:(id)a0 configurationDidChange:(id)a1;
- (id)tagsForTagIDs:(id)a0;
- (id)tagsForTagRecords:(id)a0;
- (void)saveTagsToCache:(id)a0;
- (void)dealloc;
- (void)operationThrottler:(id)a0 performAsyncOperationWithCompletion:(id /* block */)a1;
- (id)slowCachedTagForID:(id)a0;
- (void)fetchTagsForTagIDs:(id)a0 includeParents:(BOOL)a1 includeChildren:(BOOL)a2 qualityOfService:(long long)a3 callbackQueue:(id)a4 completionHandler:(id /* block */)a5;
- (void)fetchTagsForTagIDs:(id)a0 maximumCachedAge:(double)a1 qualityOfService:(long long)a2 completionHandler:(id /* block */)a3;
- (id)fastCachedTagsForIDs:(id)a0;
- (void)tagsFetchOperation:(id)a0 didFetchTags:(id)a1;
- (void)fetchTagsForTagIDs:(id)a0 qualityOfService:(long long)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (id)slowCachedTagsForIDs:(id)a0;
- (id)init;
- (id)fetchOperationForTagsIncludingChildrenWithIDs:(id)a0 softMaxAge:(double)a1;
- (id)tagsForTagIDs:(id)a0 predicate:(id /* block */)a1;
- (id)channelsForTagRecords:(id)a0;
- (id)fetchOperationForTagsWithIDs:(id)a0;
- (id)fetchOperationForTagsWithIDs:(id)a0 includeChildren:(BOOL)a1;
- (id)initWithContentDatabase:(id)a0 assetManager:(id)a1 tagRecordSource:(id)a2 configurationManager:(id)a3;
- (void)fetchTagsForTagIDs:(id)a0 cachePolicy:(id)a1 qualityOfService:(long long)a2 completionHandler:(id /* block */)a3;
- (void)fetchTagForTagID:(id)a0 qualityOfService:(long long)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (id)fastCachedTagForID:(id)a0;
- (id)jsonEncodableObject;
- (id)fetchOperationForTagsWithIDs:(id)a0 includeParents:(BOOL)a1;
- (id)expectedFastCachedTagForID:(id)a0;
- (void).cxx_destruct;

@end
