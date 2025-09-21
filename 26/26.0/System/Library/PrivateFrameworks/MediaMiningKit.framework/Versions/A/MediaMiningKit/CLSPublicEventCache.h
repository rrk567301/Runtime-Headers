@interface CLSPublicEventCache : CLSDBCache

+ (id)defaultCacheName;

- (id)dataModelName;
- (id)_fetchRequestForLatestServerVersionForEventSourceService:(long long)a0;
- (void)_updateManagedEvent:(id)a0 withEvent:(id)a1 inContext:(id)a2;
- (unsigned long long)eventCountForEventSourceService:(long long)a0 error:(id *)a1;
- (BOOL)getCachedServiceVersion:(id *)a0 forEventSourceService:(long long)a1 error:(id *)a2;
- (BOOL)getScheduledCacheInvalidationDate:(id *)a0 forEventSourceService:(long long)a1 error:(id *)a2;
- (BOOL)hasTimeLocationTuple:(id)a0;
- (BOOL)insertBatchesOfPublicEventsByTimeLocationIdentifier:(id)a0 forTimeLocationTuples:(id)a1;
- (void)invalidateCacheItemsBeforeDateWithTimestamp:(double)a0;
- (unsigned long long)numberOftimeLocationTuplesForTimeLocationTuple:(id)a0;
- (id)predicateForTimeLocationTuple:(id)a0;
- (id)publicEventFromManagedObject:(id)a0;
- (id)publicEventsForMuid:(unsigned long long)a0;
- (id)publicEventsForTimeLocationTuple:(id)a0;
- (id)readAllEvents;
- (BOOL)setLatestVersionScheduledInvalidationDate:(id)a0 forEventSourceService:(long long)a1 error:(id *)a2;
- (BOOL)setNewCachedServiceVersion:(id)a0 forEventSourceService:(long long)a1 error:(id *)a2;

@end
