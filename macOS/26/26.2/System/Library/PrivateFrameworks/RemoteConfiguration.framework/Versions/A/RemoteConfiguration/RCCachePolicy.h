@interface RCCachePolicy : NSObject <NSCopying>

@property (nonatomic) unsigned long long requestCachePolicy;

+ (id)defaultCachePolicy;
+ (id)cacheOnlyPolicy;
+ (id)ignoreCachePolicy;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
