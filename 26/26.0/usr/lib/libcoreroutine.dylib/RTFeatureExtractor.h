@class RTMotionActivityManager, RTTripLocationPropagator, RTPredictedContextMetricsManager, RTNavigationManager, RTVehicleLocationProvider, RTMapsSupportManager, RTEventManager, RTLearnedLocationManager, RTVisitConsolidator, RTHomeKitManager, RTLocationManager, RTHealthKitManager, RTVisitManager;

@interface RTFeatureExtractor : RTService

@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTVisitManager *visitManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTEventManager *eventManager;
@property (retain, nonatomic) RTNavigationManager *navigationManager;
@property (retain, nonatomic) RTMapsSupportManager *mapsSupportManager;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) RTVehicleLocationProvider *vehicleLocationProvider;
@property (retain, nonatomic) RTVisitConsolidator *visitConsolidator;
@property (retain, nonatomic) RTHealthKitManager *healthKitManager;
@property (retain, nonatomic) RTHomeKitManager *homeKitManager;
@property (retain, nonatomic) RTTripLocationPropagator *tripLocationPropagator;
@property (retain, nonatomic) RTPredictedContextMetricsManager *metricsManager;

+ (id)countKeyForFeature:(id)a0;
+ (id)latencyKeyForFeature:(id)a0;
+ (void)logFeatureExtractionForFeature:(id)a0 stimulationDate:(id)a1 featureArray:(id)a2 success:(BOOL)a3 toDict:(id)a4;
+ (long long)metricCodeForFeatureExtractorOperationType:(unsigned long long)a0;
+ (id)successKeyForFeature:(id)a0;

- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_setup;
- (void).cxx_destruct;
- (void)onNotification:(id)a0;
- (void)_submitMetrics:(id)a0;
- (id)_extractFeatures:(unsigned long long)a0 operationType:(unsigned long long)a1 lookbackIntervals:(id)a2 outError:(id *)a3;
- (id)_fetchLocationOfInterestForMapItem:(id)a0 error:(id *)a1;
- (id)_getCalendarEventsWithDateInterval:(id)a0 outError:(id *)a1;
- (id)_getHomeKitHomesWithError:(id *)a0;
- (id)_getLocationHistoriesWithDateInterval:(id)a0 outError:(id *)a1;
- (id)_getLocationsOfInterestWithDateInterval:(id)a0 outError:(id *)a1;
- (id)_getMapsActiveNavigationWithError:(id *)a0;
- (id)_getMapsHistoricalNavigationsWithDateInterval:(id)a0 outError:(id *)a1;
- (id)_getMapsViewedPlacesWithDateInterval:(id)a0 outError:(id *)a1;
- (id)_getMotionActivitiesWithDateInterval:(id)a0 outError:(id *)a1;
- (id)_getParkedCarWithError:(id *)a0;
- (id)_getPropagatedLocationAtDistance:(double)a0;
- (id)_getTransitionsWithDateInterval:(id)a0 outError:(id *)a1;
- (id)_getVisitsWithDateInterval:(id)a0 outError:(id *)a1;
- (id)_getWorkoutsWithDateInterval:(id)a0 outError:(id *)a1;
- (id)extractFeaturesWithLookbackIntervals:(id)a0 operationType:(unsigned long long)a1 outError:(id *)a2;
- (id)initWithLearnedLocationManager:(id)a0 visitManager:(id)a1 locationManager:(id)a2 eventManager:(id)a3 navigationManager:(id)a4 mapsSupportManager:(id)a5 motionActivityManager:(id)a6 vehicleLocationProvider:(id)a7 visitConsolidator:(id)a8 healthKitManager:(id)a9 homeKitManager:(id)a10 tripLocationPropagator:(id)a11 metricsManager:(id)a12;

@end
