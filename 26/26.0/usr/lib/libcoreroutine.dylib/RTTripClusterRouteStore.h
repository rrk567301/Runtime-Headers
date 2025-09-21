@class NSString;

@interface RTTripClusterRouteStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicateForClusterID:(id)a0;

- (id)initWithPersistenceManager:(id)a0;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (id)getTripClusterRouteWithOptions:(id)a0;
- (void)_storeTripClusterRoute:(id)a0 handler:(id /* block */)a1;
- (void)_deleteTripClusterRouteWithUUID:(id)a0 handler:(id /* block */)a1;
- (void)_fetchTripClusterRouteWithContext:(id)a0 handler:(id /* block */)a1;
- (void)_fetchTripClusterRouteWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_purgeTripClusterRouteWithHandler:(id /* block */)a0;
- (BOOL)deleteTripClusterRouteWithClusterID:(id)a0;
- (void)deleteTripClusterRouteWithClusterID:(id)a0 handler:(id /* block */)a1;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2 inManagedObjectContext:(id)a3;
- (id)fetchRequestFromStoredTripClusterLocationsOptions:(id)a0 inManagedObjectContext:(id)a1;
- (void)fetchTripClusterRouteWithClusterID:(id)a0 handler:(id /* block */)a1;
- (void)fetchTripClusterRouteWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)purgeTripClusterRouteWithHandler:(id /* block */)a0;
- (BOOL)storeTripClusterRoute:(id)a0;
- (void)storeTripClusterRoute:(id)a0 handler:(id /* block */)a1;

@end
