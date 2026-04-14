@class RTPOIHarvestParameters, RTFingerprintManager, RTLocationManager, RTMotionActivityManager;

@interface RTPOIHarvester : NSObject

@property (retain, nonatomic) RTFingerprintManager *fingerprintManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (readonly, copy, nonatomic) RTPOIHarvestParameters *parameters;

+ (int)harvestTypeToPoiTriggerType:(unsigned long long)a0;
+ (id)harvestTypeToString:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_augmentedLocationsForAccessPoints:(id)a0 metrics:(id)a1 error:(id *)a2;
- (id)_fingerprintAccessPointsForSettledState:(unsigned long long)a0 withinInterval:(id)a1 metrics:(id)a2 error:(id *)a3;
- (id)_fingerprintAccessPointsWithinInterval:(id)a0 harvestType:(unsigned long long *)a1 metrics:(id)a2 error:(id *)a3;
- (BOOL)_harvestPOI:(id)a0 mapItemSource:(unsigned long long)a1 accessPointArrays:(id)a2 referenceLocations:(id)a3 harvestType:(unsigned long long)a4 metrics:(id)a5 error:(id *)a6;
- (id)_motionActivitiesWithinInterval:(id)a0 error:(id *)a1;
- (id)_poiHarvestForAccessPoints:(id)a0 mapItem:(id)a1 referenceLocations:(id)a2 harvestType:(unsigned long long)a3 metrics:(id)a4;
- (BOOL)_submitHarvest:(id)a0 error:(id *)a1;
- (BOOL)harvestPOI:(id)a0 mapItemSource:(unsigned long long)a1 visitLocations:(id)a2 visitEntryDate:(id)a3 visitExitDate:(id)a4 harvestType:(unsigned long long)a5 error:(id *)a6;
- (id)initWithDefaultsManager:(id)a0 fingerprintManager:(id)a1 locationManager:(id)a2 motionActivityManager:(id)a3;
- (id)initWithFingerprintManager:(id)a0 locationManager:(id)a1 motionActivityManager:(id)a2 parameters:(id)a3;

@end
