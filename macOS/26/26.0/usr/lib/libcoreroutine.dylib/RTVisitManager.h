@class RTDeviceLocationPredictor, RTHintManager, RTVisitMonitor, RTLocationAwarenessManager, RTMotionActivityManager, RTVisitStore, RTDefaultsManager, NSMutableArray, RTPlatform, RTMetricManager, NSString, RTPointOfInterestMonitor, RTXPCActivityManager, RTLearnedLocationManager, RTLocationManager, RTVisitLabeler, RTVisit;

@interface RTVisitManager : RTService <RTVisitMonitorDelegate, RTPurgable, RTStoreManager>

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor;
@property (retain, nonatomic) RTHintManager *hintManager;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTLocationAwarenessManager *locationAwarenessManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTMetricManager *metricManager;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) RTPointOfInterestMonitor *pointOfInterestMonitor;
@property (retain, nonatomic) RTVisitStore *visitStore;
@property (retain, nonatomic) RTXPCActivityManager *xpcActivityManager;
@property (nonatomic) BOOL spoofMode;
@property (retain, nonatomic) NSMutableArray *spoofVisitIncidentTokens;
@property (retain, nonatomic) RTVisitMonitor *visitMonitor;
@property (readonly, nonatomic) RTVisitLabeler *visitLabeler;
@property (retain, nonatomic) RTVisit *lastHighConfidenceVisit;
@property (nonatomic) BOOL findingPointOfInterest;
@property (nonatomic) BOOL pointOfInterestUpdateEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)vendedClasses;
+ (long long)periodicPurgePolicy;

- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)fetchEnumerableObjectsWithOptions:(id)a0 offset:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)fetchStoredVisitsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (void)_onPointOfInterestVisitNotification:(id)a0;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)onLowConfidenceVisitIncident:(id)a0 error:(id)a1;
- (void)_setup;
- (void)unregisterForSpoofVisitIncidentWithToken:(int)a0;
- (void)_fetchVisitsFromDate:(id)a0 toDate:(id)a1 handler:(id /* block */)a2;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)_unregisterXpcActivityFindPointOfInterest;
- (void)_updateStateForLowConfidenceVisitIncidents;
- (void)_updateStateForLeechedVisitIncidents;
- (void)_setupVisitMonitorWithHandler:(id /* block */)a0;
- (void)injectRealtimeVisit:(id)a0 handler:(id /* block */)a1;
- (void)_onVisitStoreNotification:(id)a0;
- (void)fetchVisitsFromDate:(id)a0 toDate:(id)a1 handler:(id /* block */)a2;
- (void)onPointOfInterestVisitNotification:(id)a0;
- (id)init;
- (void)_simulateVisit:(id)a0 handler:(id /* block */)a1;
- (void)_performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (void)_injectRealtimeVisit:(id)a0 handler:(id /* block */)a1;
- (void)onVisitIncident:(id)a0 error:(id)a1;
- (id)initWithDefaultsManager:(id)a0 deviceLocationPredictor:(id)a1 hintManager:(id)a2 learnedLocationManager:(id)a3 locationAwarenessManager:(id)a4 locationManager:(id)a5 metricManager:(id)a6 motionActivityManager:(id)a7 platform:(id)a8 pointOfInterestMonitor:(id)a9 visitLabeler:(id)a10 visitStore:(id)a11 xpcActivityManager:(id)a12;
- (BOOL)shouldFindPointOfInterestForVisit:(id)a0;
- (void)_onLowConfidenceVisitIncident:(id)a0 error:(id)a1;
- (void)simulateVisit:(id)a0 handler:(id /* block */)a1;
- (void)_updateStateForVisitIncidents;
- (void)_registerXpcActivityFindPointOfInterest;
- (void)injectSyncedVisitLocation:(id)a0;
- (void)onVisitStoreNotification:(id)a0;
- (id)registerForSpoofVisitIncidentOfCategory:(id)a0;
- (void).cxx_destruct;
- (void)_onVisitIncident:(id)a0 error:(id)a1;
- (void)_injectSyncedVisitLocation:(id)a0;

@end
