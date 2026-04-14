@class NSString;

@interface RTTripClusterWaypointDataStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicateForClusterID:(id)a0;

- (id)initWithPersistenceManager:(id)a0;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)_deleteTripClusterWaypointWithUUID:(id)a0 handler:(id /* block */)a1;
- (void)_fetchCountForClusterID:(id)a0 handler:(id /* block */)a1;
- (void)_fetchTripClusterWaypointWithContext:(id)a0 handler:(id /* block */)a1;
- (void)_fetchTripClusterWaypointWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_purgeTripClusterWaypointWithHandler:(id /* block */)a0;
- (void)_storeTripClusterWaypoint:(id)a0 handler:(id /* block */)a1;
- (BOOL)deleteTripClusterWaypointWithClusterID:(id)a0;
- (void)deleteTripClusterWaypointWithClusterID:(id)a0 handler:(id /* block */)a1;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2 inManagedObjectContext:(id)a3;
- (id)fetchRequestFromStoredTripClusterWaypointsOptions:(id)a0 inManagedObjectContext:(id)a1;
- (void)fetchTripClusterWaypointWithClusterID:(id)a0 handler:(id /* block */)a1;
- (void)fetchTripClusterWaypointWithOptions:(id)a0 handler:(id /* block */)a1;
- (unsigned long long)getTripClusterWaypointDataCountForClusterID:(id)a0;
- (id)getTripClusterWaypointWithOptions:(id)a0;
- (void)purgeTripClusterWaypointWithHandler:(id /* block */)a0;
- (BOOL)storeTripClusterWaypoint:(id)a0;
- (void)storeTripClusterWaypoint:(id)a0 handler:(id /* block */)a1;

@end
