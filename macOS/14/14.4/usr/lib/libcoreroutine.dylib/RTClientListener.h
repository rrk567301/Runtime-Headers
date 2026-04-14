@class RTMapServiceManager, RTLocationManager, RTMetricManager, RTAccountManager, RTLocationStore, RTDeviceLocationPredictor, RTScenarioTriggerManager, RTEventModelProvider, RTVehicleLocationProvider, RTAuthorizationManager, RTLearnedLocationManager, RTDiagnostics, RTPurgeManager, RTTimerManager, RTDefaultsManager, RTVehicleStore, RTLearnedLocationStore, RTVisitManager, RTWiFiManager, RTContactsManager, RTHealthKitManager, RTMotionActivityManager, RTElevationManager, RTEventAgentManager, RTAssetManager, NSMutableDictionary, RTTripSegmentManager, RTAuthorizedLocationManager, RTPlaceInferenceManager, NSString, RTHintManager, RTFingerprintManager, RTPeopleDiscoveryProvider, NSXPCInterface;

@interface RTClientListener : RTXPCListener <RTClientListenerProtocol, NSXPCListenerDelegate> {
    NSXPCInterface *_frameworkInterface;
    NSXPCInterface *_daemonInterface;
}

@property (retain, nonatomic) NSMutableDictionary *persistedClients;
@property (retain, nonatomic) RTScenarioTriggerManager *scenarioTriggerManager;
@property (retain, nonatomic) RTVehicleLocationProvider *vehicleLocationProvider;
@property (retain, nonatomic) RTVehicleStore *vehicleStore;
@property (retain, nonatomic) RTAuthorizationManager *authorizationManager;
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
@property (retain, nonatomic) RTEventAgentManager *eventAgentManager;
@property (retain, nonatomic) RTDiagnostics *diagnostics;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTPlaceInferenceManager *placeInferenceManager;
@property (retain, nonatomic) RTPeopleDiscoveryProvider *peopleDiscoveryProvider;
@property (retain, nonatomic) RTAccountManager *accountManager;
@property (retain, nonatomic) RTMetricManager *metricManager;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) RTFingerprintManager *fingerprintManager;
@property (retain, nonatomic) RTWiFiManager *wifiManager;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTContactsManager *contactsManager;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) RTElevationManager *elevationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)persistedClientsPath;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_setup;
- (void)_setupConnection:(id)a0 forClient:(id)a1;
- (id)handleClientConnection:(id)a0;
- (void)handleDisconnectionForDaemonClient:(id)a0;
- (id)handleRestorationForDaemonClient:(id)a0;
- (id)initWithAccountManager:(id)a0 assetManager:(id)a1 authorizationManager:(id)a2 contactsManager:(id)a3 defaultsManager:(id)a4 deviceLocationPredictor:(id)a5 diagnostics:(id)a6 elevationManager:(id)a7 eventAgentManager:(id)a8 eventModelProvider:(id)a9 authorizedLocationManager:(id)a10 fingerprintManager:(id)a11 healthKitManager:(id)a12 hintManager:(id)a13 learnedLocationManager:(id)a14 learnedLocationStore:(id)a15 locationManager:(id)a16 locationStore:(id)a17 mapServiceManager:(id)a18 metricManager:(id)a19 motionActivityManager:(id)a20 peopleDiscoveryProvider:(id)a21 placeInferenceManager:(id)a22 purgeManager:(id)a23 scenarioTriggerManager:(id)a24 timerManager:(id)a25 tripSegmentManager:(id)a26 vehicleLocationProvider:(id)a27 vehicleStore:(id)a28 visitManager:(id)a29 wifiManager:(id)a30;
- (void)saveDaemonClient:(id)a0;

@end
