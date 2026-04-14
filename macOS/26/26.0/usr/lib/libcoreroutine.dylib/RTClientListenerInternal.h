@class RTMapServiceManager, RTLocationManager, RTBuildingPolygonManager, RTAccountManager, RTUserCurationManager, RTLocationStore, RTDeviceLocationPredictor, RTScenarioTriggerManager, RTEventModelProvider, RTVehicleLocationProvider, SMSafetyCacheStore, RTAuthorizationManager, RTLearnedLocationManager, RTDiagnostics, RTPurgeManager, RTPlatform, RTLearnedLocationStore, RTVisitManager, RTWiFiManager, RTWorkoutScheduler, RTIntermittentGNSSManager, RTMotionActivityManager, RTPredictedContextManager, RTBluePOITileManager, RTEventAgentManager, RTAssetManager, RTWorkoutRouteManager, RTPersistenceManager, RTPointOfInterestSampler, RTAuthorizedLocationManager, NSString, RTPlaceInferenceQueryStore, RTHintManager, RTFingerprintManager, RTPeopleDiscoveryProvider;

@interface RTClientListenerInternal : RTXPCListener <NSXPCListenerDelegate>

@property (retain, nonatomic) RTAccountManager *accountManager;
@property (retain, nonatomic) RTAssetManager *assetManager;
@property (retain, nonatomic) RTAuthorizationManager *authorizationManager;
@property (retain, nonatomic) RTBluePOITileManager *bluePOITileManager;
@property (retain, nonatomic) RTBuildingPolygonManager *buildingPolygonManager;
@property (retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor;
@property (retain, nonatomic) RTDiagnostics *diagnostics;
@property (retain, nonatomic) RTEventAgentManager *eventAgentManager;
@property (retain, nonatomic) RTEventModelProvider *eventModelProvider;
@property (retain, nonatomic) RTAuthorizedLocationManager *authorizedLocationManager;
@property (retain, nonatomic) RTFingerprintManager *fingerprintManager;
@property (retain, nonatomic) RTHintManager *hintManager;
@property (retain, nonatomic) RTIntermittentGNSSManager *intermittentGNSSManager;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTLocationStore *locationStore;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) RTPersistenceManager *persistenceManager;
@property (retain, nonatomic) RTPeopleDiscoveryProvider *peopleDiscoveryProvider;
@property (retain, nonatomic) RTPlaceInferenceQueryStore *placeInferenceQueryStore;
@property (retain, nonatomic) RTPointOfInterestSampler *pointOfInterestSampler;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) RTPredictedContextManager *predictedContextManager;
@property (retain, nonatomic) RTPurgeManager *purgeManager;
@property (retain, nonatomic) RTScenarioTriggerManager *scenarioTriggerManager;
@property (retain, nonatomic) RTUserCurationManager *userCurationManager;
@property (retain, nonatomic) RTVehicleLocationProvider *vehicleLocationProvider;
@property (retain, nonatomic) RTVisitManager *visitManager;
@property (retain, nonatomic) RTWiFiManager *wifiManager;
@property (retain, nonatomic) RTWorkoutRouteManager *workoutRouteManager;
@property (retain, nonatomic) RTWorkoutScheduler *workoutScheduler;
@property (retain, nonatomic) SMSafetyCacheStore *safetyCacheStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)handleClientConnection:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAccountManager:(id)a0 assetManager:(id)a1 authorizationManager:(id)a2 bluePOITileManager:(id)a3 buildingPolygonManager:(id)a4 deviceLocationPredictor:(id)a5 diagnostics:(id)a6 eventAgentManager:(id)a7 eventModelProvider:(id)a8 authorizedLocationManager:(id)a9 fingerprintManager:(id)a10 hintManager:(id)a11 intermittentGNSSManager:(id)a12 learnedLocationManager:(id)a13 learnedLocationStore:(id)a14 locationManager:(id)a15 locationStore:(id)a16 mapServiceManager:(id)a17 motionActivityManager:(id)a18 peopleDiscoveryProvider:(id)a19 persistenceManager:(id)a20 placeInferenceQueryStore:(id)a21 platform:(id)a22 pointOfInterestSampler:(id)a23 predictedContextManager:(id)a24 purgeManager:(id)a25 safetyCacheStore:(id)a26 scenarioTriggerManager:(id)a27 userCurationManager:(id)a28 vehicleLocationProvider:(id)a29 visitManager:(id)a30 workoutRouteManager:(id)a31 workoutScheduler:(id)a32;

@end
