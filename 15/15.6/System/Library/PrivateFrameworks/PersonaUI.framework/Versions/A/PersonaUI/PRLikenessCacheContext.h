@interface PRLikenessCacheContext : NSObject

@property unsigned long long cacheSize;
@property char circular;
@property double scale;
@property char forceDecode;

+ (id)contextWithCacheSize:(unsigned long long)a0;

- (id)init;

@end
