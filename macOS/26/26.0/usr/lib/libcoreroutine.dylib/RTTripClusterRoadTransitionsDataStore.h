@class NSString;

@interface RTTripClusterRoadTransitionsDataStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicateForClusterID:(id)a0;

- (id)initWithPersistenceManager:(id)a0;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)_deleteTripClusterRoadTransitionsWithUUID:(id)a0 handler:(id /* block */)a1;
- (void)_fetchTripClusterRoadTransitionsWithContext:(id)a0 handler:(id /* block */)a1;
- (void)_fetchTripClusterRoadTransitionsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_purgeTripClusterRoadTransitionsWithHandler:(id /* block */)a0;
- (void)_storeTripClusterRoadTransitions:(id)a0 handler:(id /* block */)a1;
- (BOOL)deleteTripClusterRoadTransitionsWithUUID:(id)a0;
- (void)deleteTripClusterRoadTransitionsWithUUID:(id)a0 handler:(id /* block */)a1;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2 inManagedObjectContext:(id)a3;
- (id)fetchRequestFromStoredTripClusterRoadTransitionsOptions:(id)a0 inManagedObjectContext:(id)a1;
- (void)fetchTripClusterRoadTransitionsWithClusterID:(id)a0 handler:(id /* block */)a1;
- (void)fetchTripClusterRoadTransitionsWithContext:(id)a0 handler:(id /* block */)a1;
- (void)fetchTripClusterRoadTransitionsWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)getRoadTransitionsWithID:(id)a0;
- (void)purgeTripClusterRoadTransitionsWithHandler:(id /* block */)a0;
- (BOOL)storeTripClusterRoadTransitions:(id)a0;
- (void)storeTripClusterRoadTransitions:(id)a0 handler:(id /* block */)a1;

@end
