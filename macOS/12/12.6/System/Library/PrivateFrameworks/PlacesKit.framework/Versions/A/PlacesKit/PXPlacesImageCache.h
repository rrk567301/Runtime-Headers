@class NSCache;

@interface PXPlacesImageCache : NSObject {
    NSCache *_cache;
}

- (id)init;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (id)cachedRenderedImageForGeotaggble:(id)a0 andKey:(id)a1;
- (void)cacheRenderedImage:(id)a0 forGeotaggble:(id)a1 andKey:(id)a2;
- (void)removeCachedRenderedImageForGeotaggble:(id)a0 andKey:(id)a1;

@end
