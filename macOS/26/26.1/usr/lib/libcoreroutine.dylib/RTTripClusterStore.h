@class NSString;

@interface RTTripClusterStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_predicateForClusterID:(id)a0;
+ (id)_predicateForCommuteID:(id)a0;

- (id)initWithPersistenceManager:(id)a0;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (BOOL)deleteTripClusterWithCommuteID:(id)a0;
- (void)_deleteTripClusterWithCommuteID:(id)a0 handler:(id /* block */)a1;
- (void)_deleteTripClusterWithUUID:(id)a0 handler:(id /* block */)a1;
- (void)_fetchTraversedCountForClusterID:(id)a0 handler:(id /* block */)a1;
- (void)_fetchTripClustersWithContext:(id)a0 handler:(id /* block */)a1;
- (void)_fetchTripClustersWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)_predicateForEndVisitLocation:(double)a0 endLongitude:(double)a1;
- (id)_predicateForMinCountOfTraversal:(unsigned short)a0;
- (id)_predicateForStartVisitLocation:(double)a0 startLongitude:(double)a1;
- (id)_predicateForVisitLocation:(double)a0 longitude:(double)a1 entityNameLatitude:(id)a2 entityNameLongitude:(id)a3;
- (void)_purgeTripClustersWithHandler:(id /* block */)a0;
- (void)_storeTripCluster:(id)a0 handler:(id /* block */)a1;
- (void)_updateTripClusterLockStatusWithPredicate:(id)a0 isLocked:(BOOL)a1 handler:(id /* block */)a2;
- (void)_updateTripClusterWithPredicate:(id)a0 tripCluster:(id)a1 handler:(id /* block */)a2;
- (void)deleteTripClusterWithCommuteID:(id)a0 handler:(id /* block */)a1;
- (BOOL)deleteTripClusterWithUUID:(id)a0;
- (void)deleteTripClusterWithUUID:(id)a0 handler:(id /* block */)a1;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2 inManagedObjectContext:(id)a3;
- (id)fetchRequestFromStoredTripClustersOptions:(id)a0 inManagedObjectContext:(id)a1;
- (void)fetchTripClustersWithContext:(id)a0 handler:(id /* block */)a1;
- (void)fetchTripClustersWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)getTripClustersWithOptions:(id)a0;
- (void)purgeTripClustersWithHandler:(id /* block */)a0;
- (void)storeTripClusters:(id)a0;
- (void)storeTripClusters:(id)a0 handler:(id /* block */)a1;
- (void)updateLockStatusForClusterId:(id)a0 isLocked:(BOOL)a1;
- (void)updateLockStatusForClusterId:(id)a0 isLocked:(BOOL)a1 handler:(id /* block */)a2;
- (void)updateTripCluster:(id)a0 handler:(id /* block */)a1;

@end
