@interface SAAppSizerCacheManager : NSObject

+ (id)cacheFilePath;
+ (id)cacheAppSizes:(id)a0;
+ (id)getCacheDict;
+ (void)getLastCachedAppSizes:(double)a0 maxAge:(double)a1 reply:(id /* block */)a2;

@end
