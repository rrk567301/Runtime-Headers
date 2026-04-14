@interface FCCachePolicy : NSObject <NSCopying>

@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic) double maximumCachedAge;

+ (id)defaultCachePolicy;
+ (id)cachedOnlyCachePolicy;
+ (id)ignoreCacheCachePolicy;
+ (id)cachePolicyWithSoftMaxAge:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
