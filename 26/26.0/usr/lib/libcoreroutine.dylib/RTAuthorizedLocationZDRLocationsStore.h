@class NSString;

@interface RTAuthorizedLocationZDRLocationsStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicateForZDRLocation:(id)a0 zdrLocationDbEntryTimeCfatSec:(id)a1 zdrLocationType:(unsigned long long)a2 zdrLocationLatitudeDeg:(double)a3 zdrLocationLongitudeDeg:(double)a4 zdrLocationLastSeenTimeCfatSec:(id)a5;

- (id)initWithPersistenceManager:(id)a0;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)_deleteAllZDRLocation:(id /* block */)a0;
- (void)_deleteZDRLocation:(id)a0 handler:(id /* block */)a1;
- (void)_fetchZDRLocationWithContext:(id)a0 handler:(id /* block */)a1;
- (void)_fetchZDRLocationWithOptions:(id)a0 handler:(id /* block */)a1;
- (double)_getSecondsFromDate:(id)a0;
- (double)_getSecondsFromDateWithTimezoneAdjustment:(id)a0;
- (void)_storeZDRLocation:(id)a0 handler:(id /* block */)a1;
- (void)deleteAllZDRLocations:(id /* block */)a0;
- (void)deleteZDRLocation:(id)a0 handler:(id /* block */)a1;
- (void)fetchZDRLocationWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)storeZDRLocation:(id)a0 handler:(id /* block */)a1;

@end
