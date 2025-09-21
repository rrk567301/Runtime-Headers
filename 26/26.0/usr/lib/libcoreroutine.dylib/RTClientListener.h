@class RTMapServiceManager, RTLocationManager, RTMetricManager, RTAccountManager, RTBackgroundInertialOdometryManager, RTVisitConsolidator, RTUserCurationManager, RTLocationStore, RTDeviceLocationPredictor, RTScenarioTriggerManager, RTEventModelProvider, RTVehicleLocationProvider, RTAuthorizationManager, RTLearnedLocationManager, RTDiagnostics, RTPurgeManager, RTTimerManager, RTDefaultsManager, RTVehicleStore, RTLearnedLocationStore, RTVisitManager, RTWiFiManager, RTContactsManager, RTHealthKitManager, RTIntermittentGNSSManager, RTLocationContextManager, RTMotionActivityManager, RTPredictedContextManager, RTBluePOITileManager, RTElevationManager, RTEventAgentManager, RTAssetManager, NSMutableDictionary, RTTripSegmentManager, RTAuthorizedLocationManager, RTPlaceInferenceManager, NSString, RTHintManager, RTTripClusterManager, RTFingerprintManager, RTPeopleDiscoveryProvider, NSXPCInterface;

@interface RTClientListener : RTXPCListener <RTClientListenerProtocol, NSXPCListenerDelegate> {
    NSXPCInterface *_frameworkInterface;
    NSXPCInterface *_daemonInterface;
}

@property (retain, nonatomic) NSMutableDictionary *persistedClients;
@property (retain, nonatomic) RTScenarioTriggerManager *scenarioTriggerManager;
@property (retain, nonatomic) RTVehicleLocationProvider *vehicleLocationProvider;
@property (retain, nonatomic) RTVehicleStore *vehicleStore;
@property (retain, nonatomic) RTAuthorizationManager *authorizationManager;
@property (retain, nonatomic) RTBluePOITileManager *bluePOITileManager;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor;
@property (retain, nonatomic) RTHealthKitManager *healthKitManager;
@property (retain, nonatomic) RTPurgeManager *purgeManager;
@property (retain, nonatomic) RTEventModelProvider *eventModelProvider;
@property (retain, nonatomic) RTAuthorizedLocationManager *authorizedLocationManager;
@property (retain, nonatomic) RTVisitManager *visitManager;
@property (retain, nonatomic) RTTripSegmentManager *tripSegmentManager;
@property (retain, nonatomic) RTAssetManager *assetManager;
@property (retain, nonatomic) RTHintManager *hintManager;
@property (retain, nonatomic) RTLocationStore *locationStore;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTLocationContextManager *locationContextManager;
@property (retain, nonatomic) RTEventAgentManager *eventAgentManager;
@property (retain, nonatomic) RTDiagnostics *diagnostics;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTPlaceInferenceManager *placeInferenceManager;
@property (retain, nonatomic) RTPeopleDiscoveryProvider *peopleDiscoveryProvider;
@property (retain, nonatomic) RTPredictedContextManager *predictedContextManager;
@property (retain, nonatomic) RTAccountManager *accountManager;
@property (retain, nonatomic) RTMetricManager *metricManager;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) RTFingerprintManager *fingerprintManager;
@property (retain, nonatomic) RTWiFiManager *wifiManager;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTContactsManager *contactsManager;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) RTElevationManager *elevationManager;
@property (retain, nonatomic) RTBackgroundInertialOdometryManager *backgroundInertialOdometryManager;
@property (retain, nonatomic) RTIntermittentGNSSManager *intermittentGNSSManager;
@property (retain, nonatomic) RTTripClusterManager *tripClusterManager;
@property (retain, nonatomic) RTUserCurationManager *userCurationManager;
@property (retain, nonatomic) RTVisitConsolidator *visitConsolidator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)persistedClientsPath;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_setup;
- (void)saveDaemonClient:(id)a0;
- (id)handleClientConnection:(id)a0;
- (id)handleRestorationForDaemonClient:(id)a0;
- (id)init;
- (void)handleDisconnectionForDaemonClient:(id)a0;
- (void)_setupConnection:(id)a0 forClient:(id)a1;
- (id)initWithAccountManager:(id)a0 assetManager:(id)a1 authorizationManager:(id)a2 backgroundInertialOdometryManager:(id)a3 bluePOITileManager:(id)a4 contactsManager:(id)a5 defaultsManager:(id)a6 deviceLocationPredictor:(id)a7 diagnostics:(id)a8 elevationManager:(id)a9 eventAgentManager:(id)a10 eventModelProvider:(id)a11 authorizedLocationManager:(id)a12 fingerprintManager:(id)a13 healthKitManager:(id)a14 hintManager:(id)a15 intermittentGNSSManager:(id)a16 learnedLocationManager:(id)a17 learnedLocationStore:(id)a18 locationManager:(id)a19 locationContextManager:(id)a20 locationStore:(id)a21 mapServiceManager:(id)a22 metricManager:(id)a23 motionActivityManager:(id)a24 peopleDiscoveryProvider:(id)a25 placeInferenceManager:(id)a26 predictedContextManager:(id)a27 purgeManager:(id)a28 scenarioTriggerManager:(id)a29 timerManager:(id)a30 tripSegmentManager:(id)a31 userCurationManager:(id)a32 vehicleLocationProvider:(id)a33 vehicleStore:(id)a34 visitManager:(id)a35 wifiManager:(id)a36 tripClusterManager:(id)a37 visitConsolidator:(id)a38;
- (void).cxx_destruct;

@end
