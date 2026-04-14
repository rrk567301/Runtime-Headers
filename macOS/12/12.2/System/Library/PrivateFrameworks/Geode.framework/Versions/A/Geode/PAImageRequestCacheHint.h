@interface PAImageRequestCacheHint : NSObject {
    BOOL _shouldCache;
    BOOL _temporary;
    int _purgeLevel;
}

+ (id)cachePurgeFirst;
+ (id)_newInstanceShouldCache:(BOOL)a0 temporary:(BOOL)a1 purgeLevel:(int)a2;
+ (id)sharedInstanceAtIndex:(unsigned long long)a0;
+ (id)noCache;
+ (id)cachePurgeSecond;
+ (id)cachePurgeThird;
+ (id)cachePurgeLast;
+ (id)cacheNonPurgeable;
+ (id)cacheTemporary;

- (id)description;
- (BOOL)shouldCache;
- (BOOL)temporary;
- (int)purgeLevel;

@end
