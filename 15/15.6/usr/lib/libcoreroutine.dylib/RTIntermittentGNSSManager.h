@class RTIntermittentGNSSManagerMetrics, NSDate, RTMotionActivityManager, RTVehicleLocationProvider, RTInvocationDispatcher, RTDefaultsManager, NSMutableArray, RTPlatform, RTTimerManager, RTWiFiManager, RTLearnedLocationManager, RTLocationManager, RTTimer, RTDistanceCalculator;

@interface RTIntermittentGNSSManager : RTService

@property (nonatomic) unsigned long long remoteStatusChecklist;
@property (retain, nonatomic) RTInvocationDispatcher *remoteStatusDispatcher;
@property (retain, nonatomic) RTTimer *remoteStatusTimeoutTimer;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTIntermittentGNSSManagerMetrics *metrics;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) RTVehicleLocationProvider *vehicleLocationProvider;
@property (retain, nonatomic) RTWiFiManager *wifiManager;
@property (retain, nonatomic) RTTimer *conditionCheckTimer;
@property (retain, nonatomic) RTTimer *wifiLocationStarvedTimer;
@property (retain, nonatomic) RTTimer *wifiScanTimer;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) NSDate *lastRegisteredForIntermittentGNSSVariableFlipDate;
@property (retain, nonatomic) NSDate *lastLOINearbyCheckDate;
@property (retain, nonatomic) NSDate *lastSettledStateChangeDate;
@property (retain, nonatomic) NSDate *lastWifiLocationDate;
@property (retain, nonatomic) NSDate *lastDenseWifiScanResultDate;
@property (nonatomic) char awayFromFrequentlyVisitedLOI;
@property (nonatomic) char motionActivityTypeSatisfied;
@property (nonatomic) char registeredForIntermittentGNSS;
@property (nonatomic) char settledStateLOIVerified;
@property (nonatomic) char signalEnvironmentAtRisk;
@property (nonatomic) char unsettled;
@property (nonatomic) char completedInitialWifiScan;
@property (nonatomic) char wifiLocationStarved;
@property (nonatomic) char activeWifiScan;
@property (nonatomic) double totalDailyDuration;
@property (nonatomic) int currentSignalEnvironment;
@property (retain, nonatomic) NSMutableArray *accessPoints;
@property (nonatomic) unsigned long long currentDominantMotionType;
@property (nonatomic) unsigned long long intermittentGNSSOverrideState;

+ (id)overrideStateToString:(unsigned long long)a0;
+ (char)validLocation:(id)a0;

- (void).cxx_destruct;
- (void)_setup;
- (void)_updateWifiLocationStarvedTimer;
- (void)_checkWifiDenseArea;
- (void)_completeRemoteStatusChecklistItem:(unsigned long long)a0;
- (void)_considerRegisteringForIntermittentGNSS;
- (char)_dutyCyclingConditionMet;
- (char)_frequentlyVisitedLocationOfInterest:(id)a0;
- (id)_initializeWifiLocationStarvedTimer;
- (id)_locationsOfInterestNearLocation:(id)a0 error:(id *)a1;
- (char)_motionActivityConditionsSatisifed:(id)a0;
- (void)_onLocationStarvedTimerExpiry;
- (void)_processWifiScanResults;
- (void)_registerForRhythmicNonWakingLocation;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_unregisterForRhythmicNonWakingLocation;
- (void)_updateLocationNearLOI:(id)a0;
- (void)_updateSignalEnvironmentRiskStatus:(int)a0;
- (void)_updateWifiLocationAvailabilityStatus:(id)a0;
- (char)_wifiDenseConditionsMet;
- (void)fetchIntermittentGNSSRegistrationStateWithHandler:(id /* block */)a0;
- (void)fetchRemoteStatusWithHandler:(id /* block */)a0;
- (id)initWithDefaultsManager:(id)a0 learnedLocationManager:(id)a1 locationManager:(id)a2 motionActivityManager:(id)a3 platform:(id)a4 timerManager:(id)a5 vehicleLocationProvider:(id)a6 wifiManager:(id)a7;
- (id)initWithDefaultsManager:(id)a0 learnedLocationManager:(id)a1 locationManager:(id)a2 motionActivityManager:(id)a3 platform:(id)a4 vehicleLocationProvider:(id)a5 wifiManager:(id)a6;
- (void)onDailyMetricsNotification:(id)a0;
- (void)onLeechedLocationNotification:(id)a0;
- (void)onMotionActivityManagerNotification:(id)a0;
- (void)onNoOpLocationNotification:(id)a0;
- (void)onVehicleEventNotification:(id)a0;
- (void)onWifiScanResultsNotification:(id)a0;
- (char)platformSupported;
- (void)updateIntermittentGNSSRegistrationOverrideState:(unsigned long long)a0 handler:(id /* block */)a1;

@end
