@interface CLSPublicEventCache : CLSDBCache

+ (id)defaultCacheName;
+ (double)timeIntervalForDate:(id)a0;

- (id)dataModelName;
- (id)_fetchRequestForLatestServerVersionForEventSourceService:(long long)a0;
- (BOOL)_processQueryLocationsInContext:(id)a0 matchingPredicate:(id)a1 processingBlock:(id /* block */)a2 error:(id *)a3;
- (BOOL)_removeQueryLocationsForTimeLocationTuples:(id)a0 inContext:(id)a1 error:(id *)a2;
- (void)_updateManagedEvent:(id)a0 withEvent:(id)a1 inContext:(id)a2;
- (unsigned long long)eventCountForEventSourceService:(long long)a0 error:(id *)a1;
- (BOOL)getCachedServiceVersion:(id *)a0 forEventSourceService:(long long)a1 error:(id *)a2;
- (BOOL)getScheduledCacheInvalidationDate:(id *)a0 forEventSourceService:(long long)a1 error:(id *)a2;
- (BOOL)hasTimeLocationTuple:(id)a0;
- (BOOL)insertBatchesOfPublicEventsByTimeLocationIdentifier:(id)a0 forTimeLocationTuples:(id)a1;
- (BOOL)invalidateCacheItemsBeforeDateWithTimestamp:(double)a0 error:(id *)a1;
- (BOOL)invalidateCacheItemsWithTimeLocationTuples:(id)a0 error:(id *)a1;
- (unsigned long long)numberOftimeLocationTuplesForTimeLocationTuple:(id)a0;
- (id)predicateForTimeLocationTuple:(id)a0;
- (id)publicEventFromManagedObject:(id)a0;
- (id)publicEventsForMuid:(unsigned long long)a0;
- (id)publicEventsForTimeLocationTuple:(id)a0;
- (id)readAllEvents;
- (BOOL)setLatestVersionScheduledInvalidationDate:(id)a0 forEventSourceService:(long long)a1 error:(id *)a2;
- (BOOL)setNewCachedServiceVersion:(id)a0 forEventSourceService:(long long)a1 error:(id *)a2;
- (id)timeLocationTuplesFromCacheWithError:(id *)a0;
- (BOOL)updateTimeLocationTuples:(id)a0 withTimestamp:(double)a1 error:(id *)a2;

@end
