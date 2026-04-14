@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, TRITimeProviding;

@interface TRIWKMSKeyCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheAccessQueue;
@property (retain, nonatomic) NSMutableDictionary *keyCache;
@property (nonatomic) unsigned long long maxSize;
@property (nonatomic) double defaultTTL;
@property (nonatomic) unsigned long long hitCount;
@property (nonatomic) unsigned long long missCount;
@property (nonatomic) unsigned long long evictionCount;
@property (retain, nonatomic) id<TRITimeProviding> timeProvider;

- (void).cxx_destruct;
- (id)cacheStatistics;
- (void)_evictLRUEntry;
- (id)_hashForAuthData:(id)a0;
- (void)cacheKey:(id)a0 forAuthData:(id)a1;
- (void)cacheKey:(id)a0 forAuthData:(id)a1 withTTL:(double)a2;
- (unsigned long long)cachedKeyCount;
- (id)cachedKeyForAuthData:(id)a0;
- (unsigned long long)estimatedMemoryUsage;
- (id)initWithMaxSize:(unsigned long long)a0 defaultTTL:(double)a1;
- (void)invalidateAllKeys;
- (void)invalidateKeyForAuthData:(id)a0;
- (void)removeExpiredKeys;

@end
