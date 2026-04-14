@class QLDiskCache;

@interface QLDiskCacheEnumerator : NSObject {
    QLDiskCache *_diskCache;
}

+ (BOOL)cachedThumbnailDataIsLowQuality:(id)a0 forThumbnailRequest:(id)a1;
+ (double)_expectedThumbnailSizeForRequest:(id)a0;

- (void).cxx_destruct;
- (id)initWithDiskCache:(id)a0;

@end
