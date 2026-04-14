@class NSCache, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface PXGCGImageTextureProvider : PXGTextureProvider {
    NSCache *_imageCache;
    NSCache *_additionalInfoCache;
    NSMapTable *_aliveImagesCache;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

- (id)init;
- (void).cxx_destruct;
- (void)invalidateCache;
- (void)releaseCachedResources;
- (void)requestCGImageWithCacheKey:(id)a0 imageProvider:(id /* block */)a1 resultHandler:(id /* block */)a2;
- (void)requestCGImageAndAdditionalInfoWithCacheKey:(id)a0 imageProvider:(id /* block */)a1 resultHandler:(id /* block */)a2;
- (void)cacheAdditionalInfo:(id)a0 withKey:(id)a1;
- (void)lowMemoryModeDidChange;
- (void)_updateCacheLimit;
- (void)_clearStrongCaches;

@end
