@class NSString;

@interface AMSRatingsCache : NSObject

@property (readonly) unsigned long long mediaType;
@property (readonly) NSString *storeFront;

- (id)initWithMediaType:(unsigned long long)a0;
- (id)cacheDirectory;
- (id)cachePath;
- (void).cxx_destruct;
- (BOOL)_hasCachedData;
- (BOOL)addCacheData:(id)a0;
- (id)cacheTitle;
- (void)clearCacheIfNeeded;
- (id)getCacheData;
- (id)initWithMediaType:(unsigned long long)a0 storeFront:(id)a1;

@end
