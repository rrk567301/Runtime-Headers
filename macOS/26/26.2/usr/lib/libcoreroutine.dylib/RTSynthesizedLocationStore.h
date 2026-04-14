@class NSString;

@interface RTSynthesizedLocationStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)_storeLocations:(id)a0 handler:(id /* block */)a1;
- (id)fetchRequestFromStoredLocationOptions:(id)a0;
- (void)_fetchStoredLocationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)removeLocationsPredating:(id)a0 handler:(id /* block */)a1;
- (void)storeLocations:(id)a0 handler:(id /* block */)a1;
- (void)fetchStoredLocationsWithContext:(id)a0 handler:(id /* block */)a1;
- (void)_removeLocationsPredating:(id)a0 handler:(id /* block */)a1;
- (id)initWithPersistenceManager:(id)a0;
- (void)_fetchStoredLocationsWithContext:(id)a0 handler:(id /* block */)a1;
- (void)fetchStoredLocationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchStoredLocationsCountWithContext:(id)a0 handler:(id /* block */)a1;
- (void)_fetchStoredLocationsCountWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_removeLocationsOnDateInterval:(id)a0 handler:(id /* block */)a1;
- (void)_storeLocationsByBatches:(id)a0 handler:(id /* block */)a1;
- (void)_storeLocationsForBatch:(id)a0 batchNo:(unsigned long long)a1 batchSize:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)fetchStoredLocationsCountWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)removeLocationsOnDateInterval:(id)a0 handler:(id /* block */)a1;
- (BOOL)removeLocationsPredating:(id)a0;

@end
