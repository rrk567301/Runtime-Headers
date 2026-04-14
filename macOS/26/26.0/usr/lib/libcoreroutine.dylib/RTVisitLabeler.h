@class RTWiFiManager, RTTimer, RTPlaceInferenceManager, NSMutableArray, RTDefaultsManager, RTLocationManager, NSObject, RTTimerManager;
@protocol OS_dispatch_queue;

@interface RTVisitLabeler : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) RTPlaceInferenceManager *placeInferenceManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTWiFiManager *wifiManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *accessPoints;
@property (retain, nonatomic) RTTimer *wifiScanTimer;
@property (nonatomic) unsigned long long wifiScanTimerFireCount;
@property (nonatomic) BOOL registeredForWifiScan;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) RTTimer *wifiScanDelayTimer;
@property (nonatomic) BOOL collectingWiFiScans;

- (void)labelConstantMonitorVisit:(id)a0 clientIdentifier:(id)a1 policy:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)labelEventMonitorVisit:(id)a0 clientIdentifier:(id)a1 policy:(unsigned long long)a2 handler:(id /* block */)a3;
- (BOOL)labelVisit:(id)a0 clientIdentifier:(id)a1 policy:(unsigned long long)a2 error:(id *)a3;
- (void)_findPointOfInterestForVisit:(id)a0 clientIdentifier:(id)a1 handler:(id /* block */)a2;
- (void)_labelEventMonitorVisit:(id)a0 clientIdentifier:(id)a1 policy:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)findPointOfInterestForVisit:(id)a0 clientIdentifier:(id)a1 handler:(id /* block */)a2;
- (id)init;
- (void)onWiFiScanNotification:(id)a0;
- (void)_collectWiFiScansAndLabelVisit:(id)a0 clientIdentifier:(id)a1 policy:(unsigned long long)a2 maxRetries:(unsigned long long)a3 handler:(id /* block */)a4;
- (void)_labelConstantMonitorVisit:(id)a0 clientIdentifier:(id)a1 policy:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)labelVisit:(id)a0 clientIdentifier:(id)a1 policy:(unsigned long long)a2 handler:(id /* block */)a3;
- (id)initWithDefaultsManager:(id)a0 placeInferenceManager:(id)a1 locationManager:(id)a2 wifiManager:(id)a3;
- (void)startWiFiScanForLabelling:(id)a0 clientIdentifier:(id)a1 policy:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)_processVisit:(id)a0 clientIdentifier:(id)a1 policy:(unsigned long long)a2 handler:(id /* block */)a3;
- (void).cxx_destruct;

@end
