@class NSMutableDictionary;

@interface STReferenceCountedCache : NSObject {
    NSMutableDictionary *_cache;
    NSMutableDictionary *_referenceCounts;
}

- (id)cachedObjectForKey:(id)a0;
- (void)incrementReferenceCountForKey:(id)a0;
- (void).cxx_destruct;
- (void)cacheObject:(id)a0 forKey:(id)a1;
- (void)clearObjectForKey:(id)a0;
- (void)decrementReferenceCountForKey:(id)a0;
- (id)init;

@end
