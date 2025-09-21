@class RTNextPredictedLocationsOfInterestCache, RTMapServiceManager, NSObject, RTDefaultsManager, NSMutableArray, RTPlatform, RTMetricManager, NSSet, NSString, RTLearnedLocationManager, NSArray, RTLocationManager, RTAuthorizationManager, RTDistanceCalculator;
@protocol OS_dispatch_source;

@interface RTDeviceLocationPredictor : RTService <RTPurgable>

@property (retain, nonatomic) RTAuthorizationManager *authorizationManager;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTMetricManager *metricManager;
@property (retain, nonatomic) RTPlatform *platform;
@property (nonatomic) char routineEnabled;
@property (retain, nonatomic) RTNextPredictedLocationsOfInterestCache *nextPredictedLocationsOfInterestCache;
@property (nonatomic) char encryptedDataAvailabilityNotificationNeeded;
@property (nonatomic) char pendingNextPredictedLocationsOfInterestRequest;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *nextPredictedLocationsOfInterestPollLocationTimer;
@property (retain, nonatomic) NSArray *nextPredictedLocationsOfInterest;
@property (nonatomic) double nextPredictedLocationsOfInterestProcessInterval;
@property (nonatomic) double nextPredictedLocationsOfInterestPollLocationInterval;
@property (retain, nonatomic) NSMutableArray *evalPredictedLocationsOfInterest;
@property (retain, nonatomic) NSMutableArray *evalPredictedExitDates;
@property (retain, nonatomic) NSSet *providers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)periodicPurgePolicy;

- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (void)_registerForNotifications;
- (void)_setup;
- (void)_unregisterForNotifications;
- (void)_updateEvalMode;
- (void)_clear;
- (id)_dedupePredictedLocationsOfInterest:(id)a0;
- (void)_fetchNextPredictedLocationsOfInterestFromLocation:(id)a0 startDate:(id)a1 timeInterval:(double)a2 clientIdentifier:(id)a3 handler:(id /* block */)a4;
- (void)_fetchPredictedExitDatesFromLocation:(id)a0 onDate:(id)a1 withHandler:(id /* block */)a2;
- (void)_fetchPredictedLocationsOfInterestBetweenStartDate:(id)a0 endDate:(id)a1 clientIdentifier:(id)a2 withHandler:(id /* block */)a3;
- (id)_mergePredictedLocationsOfInterest:(id)a0;
- (id)_mergedLocationOfInterest:(id)a0 otherLocationOfInterest:(id)a1;
- (void)_onAuthorizationNotification:(id)a0;
- (void)_onLearnedLocationManagerNotification:(id)a0;
- (void)_purgeWithReferenceDate:(id)a0;
- (void)_setupEvalMode;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (id)_sortAndDedupePredictedLocationsOfInterest:(id)a0;
- (id)_sortPredictedLocationsOfInterest:(id)a0;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)a0 startDate:(id)a1 timeInterval:(double)a2 clientIdentifier:(id)a3 handler:(id /* block */)a4;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)a0 startDate:(id)a1 timeInterval:(double)a2 handler:(id /* block */)a3;
- (void)fetchPredictedExitDatesFromLocation:(id)a0 onDate:(id)a1 withHandler:(id /* block */)a2;
- (void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)a0 endDate:(id)a1 clientIdentifier:(id)a2 withHandler:(id /* block */)a3;
- (void)fetchPredictedLocationsOfInterestOnDate:(id)a0 clientIdentifier:(id)a1 withHandler:(id /* block */)a2;
- (id)initWithQueue:(id)a0 authorizationManager:(id)a1 defaultsManager:(id)a2 distanceCalculator:(id)a3 learnedLocationManager:(id)a4 locationManager:(id)a5 mapServiceManager:(id)a6 metricManager:(id)a7 platform:(id)a8 providers:(id)a9;
- (void)onAuthorizationNotification:(id)a0;
- (void)onLearnedLocationManagerNotification:(id)a0;
- (void)performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (void)purgeWithReferenceDate:(id)a0;

@end
