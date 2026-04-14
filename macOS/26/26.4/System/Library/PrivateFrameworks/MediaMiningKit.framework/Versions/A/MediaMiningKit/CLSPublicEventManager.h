@class CLSPublicEventCache, CPAnalytics;

@interface CLSPublicEventManager : NSObject {
    CPAnalytics *_analytics;
}

@property (nonatomic) double queryRadius;
@property (readonly, nonatomic) CLSPublicEventCache *cache;

- (id)initWithURL:(id)a0;
- (void)invalidateDiskCaches;
- (void).cxx_destruct;
- (void)invalidateMemoryCaches;
- (void)saveEventsForCacheInvalidation:(id)a0;
- (void)staleTuplesWithCompletionBlock:(id /* block */)a0;
- (BOOL)_invalidateStaleTimeLocationTuplesInResult:(id)a0 allCachedTimeLocationTuples:(id)a1 analyticsPayload:(id)a2 error:(id *)a3;
- (void)_removeEventsWithEventSourceService:(long long)a0;
- (id)cachedPublicEventsForMuid:(unsigned long long)a0;
- (BOOL)getCachedServiceVersion:(id *)a0 forEventSourceService:(long long)a1 error:(id *)a2;
- (BOOL)getScheduledCacheInvalidationDate:(id *)a0 forEventSourceService:(long long)a1 error:(id *)a2;
- (id)initWithURL:(id)a0 analytics:(id)a1;
- (void)invalidateAllCaches;
- (BOOL)invalidateAllTimeLocationTuplesWithError:(id *)a0;
- (BOOL)invalidateCacheItemsBeforeDateWithTimestamp:(double)a0 error:(id *)a1;
- (void)invalidateStaleCacheItemsUsingServiceWithCompletionBlock:(id /* block */)a0;
- (BOOL)invalidateTimeLocationTuplesBeforeDate:(id)a0 error:(id *)a1;
- (BOOL)invalidateTimeLocationTuplesFromTuples:(id)a0 error:(id *)a1;
- (id)loadInvalidationTokensAndInvalidateCachesIfNeeded;
- (id)publicEventsByTimeLocationTupleIdentifierForTimeLocationTuples:(id)a0 cachingOptions:(id)a1 progressBlock:(id /* block */)a2 error:(id *)a3;
- (void)removeEventSourcesFromCacheIfNecessary;
- (void)requestCurrentServiceVersionWithCompletionBlock:(id /* block */)a0;
- (BOOL)setLatestVersionScheduledInvalidationDate:(id)a0 forEventSourceService:(long long)a1 error:(id *)a2;
- (BOOL)setNewCachedServiceVersion:(id)a0 forEventSourceService:(long long)a1 error:(id *)a2;
- (BOOL)updateAllTimeLocationTuplesWithDate:(id)a0 error:(id *)a1;
- (id)urlForEventsForCacheInvalidation;

@end
