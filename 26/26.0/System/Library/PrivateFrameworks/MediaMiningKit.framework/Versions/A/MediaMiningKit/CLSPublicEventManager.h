@class CLSPublicEventCache, CPAnalytics;

@interface CLSPublicEventManager : NSObject {
    CPAnalytics *_analytics;
}

@property (nonatomic) double queryRadius;
@property (readonly, nonatomic) CLSPublicEventCache *cache;

- (void)invalidateDiskCaches;
- (void)invalidateMemoryCaches;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)saveEventsForCacheInvalidation:(id)a0;
- (void)_removeEventsWithEventSourceService:(long long)a0;
- (id)cachedPublicEventsForMuid:(unsigned long long)a0;
- (BOOL)getCachedServiceVersion:(id *)a0 forEventSourceService:(long long)a1 error:(id *)a2;
- (BOOL)getScheduledCacheInvalidationDate:(id *)a0 forEventSourceService:(long long)a1 error:(id *)a2;
- (id)initWithURL:(id)a0 analytics:(id)a1;
- (void)invalidateCacheItemsBeforeDateWithTimestamp:(double)a0;
- (id)loadInvalidationTokensAndInvalidateCachesIfNeeded;
- (id)publicEventsByTimeLocationTupleIdentifierForTimeLocationTuples:(id)a0 cachingOptions:(id)a1 progressBlock:(id /* block */)a2 error:(id *)a3;
- (void)removeEventSourcesFromCacheIfNecessary;
- (void)requestCurrentServiceVersionWithCompletionBlock:(id /* block */)a0;
- (BOOL)setLatestVersionScheduledInvalidationDate:(id)a0 forEventSourceService:(long long)a1 error:(id *)a2;
- (BOOL)setNewCachedServiceVersion:(id)a0 forEventSourceService:(long long)a1 error:(id *)a2;
- (id)urlForEventsForCacheInvalidation;

@end
