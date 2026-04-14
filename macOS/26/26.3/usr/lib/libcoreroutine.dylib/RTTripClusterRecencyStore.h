@class NSString;

@interface RTTripClusterRecencyStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_predicateForClusterID:(id)a0;

- (id)initWithPersistenceManager:(id)a0;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)_deleteTripClusterRecencyPredating:(id)a0 handler:(id /* block */)a1;
- (void)_deleteTripClusterRecencyWithClusterID:(id)a0 handler:(id /* block */)a1;
- (void)_fetchClusterRecencyCountForClusterID:(id)a0 handler:(id /* block */)a1;
- (void)_fetchTripClusterRecencyWithContext:(id)a0 handler:(id /* block */)a1;
- (void)_fetchTripClusterRecencyWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_purgeTripClusterRecencyWithHandler:(id /* block */)a0;
- (void)_storeTripClusterRecency:(id)a0 handler:(id /* block */)a1;
- (BOOL)deleteTripClusterRecencyPredating:(id)a0;
- (void)deleteTripClusterRecencyPredating:(id)a0 handler:(id /* block */)a1;
- (BOOL)deleteTripClusterRecencyWithClusterID:(id)a0;
- (void)deleteTripClusterRecencyWithClusterID:(id)a0 handler:(id /* block */)a1;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2 inManagedObjectContext:(id)a3;
- (id)fetchRequestFromStoredTripClusterRecencyOptions:(id)a0 inManagedObjectContext:(id)a1;
- (void)fetchTripClusterRecencyWithContext:(id)a0 handler:(id /* block */)a1;
- (void)fetchTripClusterRecencyWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)getTripClusterRecencyWithOptions:(id)a0;
- (void)purgeTripClusterRecencyWithHandler:(id /* block */)a0;
- (void)storeTripClusterRecency:(id)a0;
- (void)storeTripClusterRecency:(id)a0 handler:(id /* block */)a1;

@end
