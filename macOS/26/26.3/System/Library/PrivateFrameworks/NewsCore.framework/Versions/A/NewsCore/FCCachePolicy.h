@class NSDate;

@interface FCCachePolicy : NSObject <NSCopying>

@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic) double maximumCachedAge;
@property (readonly, nonatomic) NSDate *oldestAllowedDate;

+ (id)cachePolicyWithSoftMaxAge:(double)a0;
+ (id)cachedOnlyCachePolicy;
+ (id)ignoreCacheCachePolicy;
+ (id)defaultCachePolicy;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
