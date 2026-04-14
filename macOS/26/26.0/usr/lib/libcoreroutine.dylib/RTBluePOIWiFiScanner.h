@class RTDefaultsManager, RTBluePOIMonitorEnabler, RTWiFiManager, RTBluePOIMetricManager, NSMutableDictionary, NSDate;

@interface RTBluePOIWiFiScanner : RTService {
    NSMutableDictionary *targettedChannelsLastSeenDates;
    NSDate *lastTargettedScan;
}

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) RTWiFiManager *wifiManager;
@property (readonly, nonatomic) RTBluePOIMonitorEnabler *bluePOIEnabler;
@property (readonly, nonatomic) RTBluePOIMetricManager *bluePOIMetricManager;

- (id)init;
- (void).cxx_destruct;
- (void)_processWifiScanResults:(id)a0;
- (void)_triggerScan;
- (id)initWithDefaultsManager:(id)a0 wifiManager:(id)a1 bluePOIEnabler:(id)a2 bluePOIMetricManager:(id)a3;
- (void)onLeechWifiScanResultsNotification:(id)a0;

@end
