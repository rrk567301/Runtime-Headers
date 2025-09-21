@class TSCH3DDictionaryOfDictionary, NSMutableSet;

@interface TSCH3DSceneRenderCache : NSObject {
    NSMutableSet *_enabledKeys;
    TSCH3DDictionaryOfDictionary *_cache;
}

+ (id)cache;
+ (id)cacheFromScene:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)cacheEnabledForKey:(id)a0;
- (id)cacheObjectForKey:(id)a0 cacheID:(id)a1 created:(char *)a2 ifAbsent:(id /* block */)a3;
- (void)enableCache:(char)a0 forKey:(id)a1;
- (void)setCacheObject:(id)a0 forKey:(id)a1 cacheID:(id)a2;

@end
