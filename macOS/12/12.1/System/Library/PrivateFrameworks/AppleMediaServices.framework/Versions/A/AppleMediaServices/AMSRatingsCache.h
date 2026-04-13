@class NSString;

@interface AMSRatingsCache : NSObject

@property (readonly) unsigned long long mediaType;
@property (readonly) NSString *storeFront;

- (void).cxx_destruct;
- (id)cachePath;
- (id)cacheDirectory;
- (id)initWithMediaType:(unsigned long long)a0 storeFront:(id)a1;
- (id)cacheTitle;
- (BOOL)_hasCachedData;
- (id)initWithMediaType:(unsigned long long)a0;
- (void)clearCacheIfNeeded;
- (id)getCacheData;
- (BOOL)addCacheData:(id)a0;

@end
