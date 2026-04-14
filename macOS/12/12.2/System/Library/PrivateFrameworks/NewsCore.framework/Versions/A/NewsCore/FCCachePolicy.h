@interface FCCachePolicy : NSObject <NSCopying>

@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic) double maximumCachedAge;

+ (id)cachePolicyWithSoftMaxAge:(double)a0;
+ (id)defaultCachePolicy;
+ (id)cachedOnlyCachePolicy;
+ (id)ignoreCacheCachePolicy;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
