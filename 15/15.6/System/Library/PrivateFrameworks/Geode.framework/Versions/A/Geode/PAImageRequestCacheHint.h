@interface PAImageRequestCacheHint : NSObject {
    char _shouldCache;
    char _temporary;
    int _purgeLevel;
}

+ (id)cachePurgeFirst;
+ (id)cachePurgeThird;
+ (id)noCache;
+ (id)_newInstanceShouldCache:(char)a0 temporary:(char)a1 purgeLevel:(int)a2;
+ (id)cacheNonPurgeable;
+ (id)cachePurgeLast;
+ (id)cachePurgeSecond;
+ (id)cacheTemporary;
+ (id)sharedInstanceAtIndex:(unsigned long long)a0;

- (id)description;
- (char)shouldCache;
- (char)temporary;
- (int)purgeLevel;

@end
