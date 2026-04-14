@class NSString;

@interface RTTripClusterScheduleStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_predicateForClusterAndTimeID:(id)a0 timeID:(int)a1;
+ (id)_predicateForClusterID:(id)a0;

- (id)initWithPersistenceManager:(id)a0;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)_deleteTripClusterScheduleWithClusterID:(id)a0 handler:(id /* block */)a1;
- (void)_fetchClusterScheduleForClusterID:(id)a0 handler:(id /* block */)a1;
- (void)_fetchCountForClusterID:(id)a0 timeID:(int)a1 handler:(id /* block */)a2;
- (void)_fetchTripClusterScheduleWithContext:(id)a0 handler:(id /* block */)a1;
- (void)_fetchTripClusterScheduleWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_purgeTripClusterScheduleWithHandler:(id /* block */)a0;
- (void)_storeTripClusterSchedule:(id)a0 handler:(id /* block */)a1;
- (void)_updateTripClusterScheduleWithPredicate:(id)a0 tripClusterSchedule:(id)a1 handler:(id /* block */)a2;
- (BOOL)deleteTripClusterScheduleWithClusterID:(id)a0;
- (void)deleteTripClusterScheduleWithClusterID:(id)a0 handler:(id /* block */)a1;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2 inManagedObjectContext:(id)a3;
- (id)fetchRequestFromStoredTripClusterScheduleOptions:(id)a0 inManagedObjectContext:(id)a1;
- (void)fetchTripClusterScheduleWithContext:(id)a0 handler:(id /* block */)a1;
- (void)fetchTripClusterScheduleWithOptions:(id)a0 handler:(id /* block */)a1;
- (long long)getCountForClusterID:(id)a0 timeID:(int)a1;
- (id)getTripClusterScheduleWithOptions:(id)a0;
- (void)purgeTripClusterScheduleWithHandler:(id /* block */)a0;
- (void)storeTripClusterSchedule:(id)a0;
- (void)storeTripClusterSchedule:(id)a0 handler:(id /* block */)a1;
- (void)updateTripClusterSchedule:(id)a0 handler:(id /* block */)a1;

@end
