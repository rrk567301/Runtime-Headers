@class NSString;

@interface AMSRatingsCache : NSObject

@property (readonly) unsigned long long mediaType;
@property (readonly) NSString *storeFront;

- (id)cacheDirectory;
- (id)cachePath;
- (void).cxx_destruct;
- (id)initWithMediaType:(unsigned long long)a0;
- (BOOL)_hasCachedData;
- (BOOL)addCacheData:(id)a0;
- (id)cacheTitle;
- (void)clearCacheIfNeeded;
- (id)getCacheData;
- (id)initWithMediaType:(unsigned long long)a0 storeFront:(id)a1;

@end
