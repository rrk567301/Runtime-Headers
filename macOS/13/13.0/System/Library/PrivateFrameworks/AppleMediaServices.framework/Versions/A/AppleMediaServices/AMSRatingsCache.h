@class NSString;

@interface AMSRatingsCache : NSObject

@property (readonly) unsigned long long mediaType;
@property (readonly) NSString *storeFront;

- (void).cxx_destruct;
- (id)cachePath;
- (id)cacheDirectory;
- (id)initWithMediaType:(unsigned long long)a0 storeFront:(id)a1;
- (id)initWithMediaType:(unsigned long long)a0;
- (BOOL)_hasCachedData;
- (void)clearCacheIfNeeded;
- (id)cacheTitle;
- (id)getCacheData;
- (BOOL)addCacheData:(id)a0;

@end
