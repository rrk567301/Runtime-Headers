@class ATXGenericFileBasedCache;

@interface ATXTimeIntelligenceCache : NSObject

@property (retain, nonatomic) ATXGenericFileBasedCache *cache;

- (void).cxx_destruct;
- (id)init;
- (id)cachedEvents;
- (void)cacheEvents:(id)a0;
- (void)evictCachedEvents;

@end
