@interface RCCachePolicy : NSObject <NSCopying>

@property (nonatomic) unsigned long long requestCachePolicy;

+ (id)defaultCachePolicy;
+ (id)cacheOnlyPolicy;
+ (id)ignoreCachePolicy;

- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
