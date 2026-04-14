@class NSMutableDictionary;

@interface STReferenceCountedCache : NSObject {
    NSMutableDictionary *_cache;
    NSMutableDictionary *_referenceCounts;
}

- (void)incrementReferenceCountForKey:(id)a0;
- (void)decrementReferenceCountForKey:(id)a0;
- (void).cxx_destruct;
- (void)clearObjectForKey:(id)a0;
- (id)cachedObjectForKey:(id)a0;
- (void)cacheObject:(id)a0 forKey:(id)a1;
- (id)init;

@end
