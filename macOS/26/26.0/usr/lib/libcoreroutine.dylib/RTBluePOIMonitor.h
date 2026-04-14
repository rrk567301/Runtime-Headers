@class RTDistanceCalculator, RTMapItemManager, RTLocalBluePOIResult, NSDate, RTBluePOIAggregator, RTMapServiceManager, RTDefaultsManager, NSMutableArray, RTPlatform, RTFingerprintManager, RTWiFiManager, RTLocationManager, RTBluePOITileManager, RTBluePOIMetricManager, RTBluePOIMonitorEnabler;

@interface RTBluePOIMonitor : RTService

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTBluePOIAggregator *bluePOIAggregator;
@property (retain, nonatomic) RTBluePOIMetricManager *bluePOIMetricManager;
@property (retain, nonatomic) RTBluePOIMonitorEnabler *bluePOIMonitorEnabler;
@property (retain, nonatomic) RTBluePOITileManager *bluePOITileManager;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTFingerprintManager *fingerprintManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTMapItemManager *mapItemManager;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (readonly, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) RTWiFiManager *wifiManager;
@property (retain, nonatomic) NSMutableArray *scanResultBuffer;
@property (retain, nonatomic) NSDate *lastInferredScanResultDate;
@property (retain, nonatomic) RTLocalBluePOIResult *lastPostedBluePOIEstimate;

- (id)init;
- (void).cxx_destruct;
- (id)_fetchLocalMapItemsFromReferenceLocation:(id)a0 locations:(id)a1 accessPoints:(id)a2 signalEnv:(int)a3 skipAggregation:(BOOL)a4 collectMetrics:(BOOL)a5 error:(id *)a6;
- (void)_processScanResultBuffer;
- (void)_processWifiScanResults:(id)a0;
- (void)_updateLocalMapItemsFromReferenceLocation:(id)a0 locations:(id)a1 accessPoints:(id)a2 signalEnv:(int)a3 error:(id *)a4;
- (id)fetchLocalMapItemsFromReferenceLocation:(id)a0 locations:(id)a1 accessPoints:(id)a2 signalEnv:(int)a3 skipAggregation:(BOOL)a4 collectMetrics:(BOOL)a5 error:(id *)a6;
- (id)initWithDefaultsManager:(id)a0 bluePOIMetricManager:(id)a1 bluePOIMonitorEnabler:(id)a2 bluePOITileManager:(id)a3 distanceCalculator:(id)a4 fingerprintManager:(id)a5 locationManager:(id)a6 mapItemManager:(id)a7 mapServiceManager:(id)a8 platform:(id)a9 wifiManager:(id)a10;
- (BOOL)isSignificantConfidenceUpdateFromConfidence:(double)a0 toConfidence:(double)a1;
- (id)localBluePOIResultForReferenceLocation:(id)a0 locations:(id)a1 accessPoints:(id)a2 signalEnv:(int)a3 tileRequestPriority:(unsigned long long)a4 collectMetrics:(BOOL)a5 error:(id *)a6;
- (void)logLocalBluePOIResult:(id)a0 aggregatedPOIEstimate:(id)a1;
- (void)onLeechWifiScanResultsNotification:(id)a0;
- (BOOL)shouldPostUpdateOnPOIEstimate:(id)a0 fromPOIEstimate:(id)a1;

@end
