@class NSMutableDictionary;

@interface SFCache : NSObject {
    unsigned long long _cachePolicy;
    unsigned long long _cacheSize;
    double _entryTimeToLive;
    NSMutableDictionary *_cacheEntries;
}

- (unsigned long long)count;
- (id)initWithPolicy:(unsigned long long)a0;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)_entryForKey:(id)a0;
- (void)addEntry:(id)a0 forKey:(id)a1;
- (id)initWithPolicy:(unsigned long long)a0 timeToLive:(double)a1 size:(unsigned long long)a2;
- (void)_insertCacheEntry:(id)a0 forKey:(id)a1;
- (void)_removeCacheEntryWithKey:(id)a0;
- (id)entryForKey:(id)a0;

@end
