@class NSString, TLKAsyncCache;

@interface SearchUIPhotoAssetCache : TLKAsyncCache <SearchUIBatchedCachePrewarmer>

@property (readonly) TLKAsyncCache *cacheToPrewarm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCache;

- (void)computeObjectsForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)itemsToBatchPreFetchForRowModel:(id)a0;
- (id)assetForImage:(id)a0;
- (id)assetsForImages:(id)a0;
- (void)fetchAssetForImage:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchAssetsForImages:(id)a0 completionHandler:(id /* block */)a1;

@end
