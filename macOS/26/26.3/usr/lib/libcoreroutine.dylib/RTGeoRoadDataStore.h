@class NSString;

@interface RTGeoRoadDataStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicateForCLRoadID:(unsigned long long)a0;

- (id)initWithPersistenceManager:(id)a0;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)_fetchGeoRoadDataWithContext:(id)a0 handler:(id /* block */)a1;
- (void)_fetchGeoRoadDataWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchTraversedCountForCLRoadID:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)_purgeGeoRoadDataWithHandler:(id /* block */)a0;
- (void)_storeGeoRoadData:(id)a0 handler:(id /* block */)a1;
- (void)_updateRoadDataWithPredicate:(id)a0 handler:(id /* block */)a1;
- (void)fetchGeoRoadDataWithContext:(id)a0 handler:(id /* block */)a1;
- (void)fetchGeoRoadDataWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)fetchRequestFromStoredGeoRoadDataOptions:(id)a0;
- (void)purgeGeoRoadDataWithHandler:(id /* block */)a0;
- (void)storeCLTripSegmentRoadData:(id)a0 handler:(id /* block */)a1;
- (void)storeGeoRoadData:(id)a0 handler:(id /* block */)a1;
- (void)updateRoadDataWithCLRoadID:(unsigned long long)a0 handler:(id /* block */)a1;

@end
