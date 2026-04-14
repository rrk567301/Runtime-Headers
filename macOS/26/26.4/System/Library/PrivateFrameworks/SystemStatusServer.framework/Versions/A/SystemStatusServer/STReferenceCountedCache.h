@class NSMutableDictionary;

@interface STReferenceCountedCache : NSObject {
    NSMutableDictionary *_cache;
    NSMutableDictionary *_referenceCounts;
}

- (void)cacheObject:(id)a0 forKey:(id)a1;
- (void)incrementReferenceCountForKey:(id)a0;
- (void)clearObjectForKey:(id)a0;
- (id)cachedObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)decrementReferenceCountForKey:(id)a0;

@end
