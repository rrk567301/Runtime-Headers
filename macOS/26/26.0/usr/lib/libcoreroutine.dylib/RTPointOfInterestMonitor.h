@class RTDefaultsManager, RTVisitStore, RTTimer, RTLocationManager, RTMapServiceManager, NSMutableArray, NSString, RTLearnedLocationManager, RTTimerManager, RTPlatform, RTLocation, RTPointOfInterestMonitorDailyMetrics, RTNavigationManager, RTBuildingPolygonManager, RTDistanceCalculator, RTAppClipManager, RTVisitLabeler, RTMotionActivityManager, RTPointOfInterestMonitorEventMetrics, NSDate, RTVehicleLocationProvider;

@interface RTPointOfInterestMonitor : RTService

@property (nonatomic) BOOL requestingHighAccuracyLocation;
@property (nonatomic) BOOL registeredForRegionEvents;
@property (retain, nonatomic) RTAppClipManager *appClipManager;
@property (retain, nonatomic) RTBuildingPolygonManager *buildingPolygonManager;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTPointOfInterestMonitorDailyMetrics *dailyMetrics;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTPointOfInterestMonitorEventMetrics *eventMetrics;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) NSDate *lastMonitoringDate;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTTimer *locationRequestTimer;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTTimer *metricsSubmissionTimer;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) RTLocation *navigationDestination;
@property (retain, nonatomic) RTNavigationManager *navigationManager;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) NSString *regionMonitoringClientIdentifer;
@property (retain, nonatomic) RTTimer *regionMonitorTimer;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) RTVehicleLocationProvider *vehicleLocationProvider;
@property (retain, nonatomic) RTVisitLabeler *visitLabeler;
@property (retain, nonatomic) RTVisitStore *visitStore;
@property (readonly, nonatomic) NSMutableArray *monitoringLocationDenyList;

- (void)onDailyMetricsNotification:(id)a0;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_shutdown;
- (void)_startEventMetricsSubmissionTimer;
- (BOOL)_startMonitoringLocation:(id)a0 error:(id *)a1;
- (void)_onNavigationNotification:(id)a0;
- (void)onLearnedLocationManagerNotification:(id)a0;
- (void)_registerForNotifications;
- (void)handlePolygonalRegionCallback:(long long)a0 region:(id)a1 clientIdentifier:(id)a2;
- (void)_setup;
- (void)onNavigationNotification:(id)a0;
- (BOOL)_exceedPowerBudget;
- (void)onActivityAlarmNotification:(id)a0;
- (BOOL)_shouldRequestHighAccuracyLocationsForMonitoringRegionLocations:(id)a0;
- (void)_stopMonitoringAllRegionsIfNeeded;
- (void)_onDailyMetricsNotification:(id)a0;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (id)_regionMonitoringLocationsForLocation:(id)a0 error:(id *)a1;
- (void)shutdownWithHandler:(id /* block */)a0;
- (void)_onLearnedLocationManagerNotification:(id)a0;
- (id)_polygonalRegionWithRegionIdentifier:(id)a0 polygon:(id)a1;
- (BOOL)_setupPolygonalRegionsForLocations:(id)a0 error:(id *)a1;
- (void)_startHighAccuracyLocationRequest;
- (BOOL)_shouldMonitorLocation:(id)a0;
- (id)init;
- (void)_updateMonitoringLocationDenyList;
- (id)initWithAppClipManager:(id)a0 buildingPolygonManager:(id)a1 dailyMetrics:(id)a2 defaultsManager:(id)a3 distanceCalculator:(id)a4 eventMetrics:(id)a5 learnedLocationManager:(id)a6 locationManager:(id)a7 mapServiceManager:(id)a8 motionActivityManager:(id)a9 navigationManager:(id)a10 platform:(id)a11 timerManager:(id)a12 vehicleLocationProvider:(id)a13 visitLabeler:(id)a14 visitStore:(id)a15;
- (void)_onVehicleEventNotification:(id)a0;
- (void)_unRegisterForNotifications;
- (id)initWithAppClipManager:(id)a0 buildingPolygonManager:(id)a1 defaultsManager:(id)a2 distanceCalculator:(id)a3 learnedLocationManager:(id)a4 locationManager:(id)a5 mapServiceManager:(id)a6 motionActivityManager:(id)a7 navigationManager:(id)a8 platform:(id)a9 vehicleLocationProvider:(id)a10 visitLabeler:(id)a11 visitStore:(id)a12;
- (void)onVehicleEventNotification:(id)a0;
- (void)_registerForPolygonalRegionEvents;
- (void)_stopHighAccuracyLocationRequest;
- (void)_onNoOpLocationNotification:(id)a0;
- (void)_unRegisterForPolygonalRegionEvents;
- (void)_onActivityAlarmNotification:(id)a0;
- (void).cxx_destruct;

@end
