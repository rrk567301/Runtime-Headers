@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface DAAppAssetManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_cacheFileURL;
}

@property (class, readonly) DAAppAssetManager *sharedManager;

- (id)initInternal;
- (void).cxx_destruct;
- (id)_loadCache;
- (void)_cacheAsset:(id)a0;
- (id)_createCacheFileURL;
- (id)_loadCachedAssetForBundleID:(id)a0;
- (id)_pruneCache:(id)a0;
- (void)_writeCache:(id)a0;
- (void)clearAllCache;
- (void)getAppAssetForBundleID:(id)a0 completion:(id /* block */)a1;
- (void)removeCacheForBundleID:(id)a0;

@end
