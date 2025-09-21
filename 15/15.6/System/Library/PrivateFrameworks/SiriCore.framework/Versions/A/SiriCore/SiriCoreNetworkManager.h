@class NSNumber, NSString, NSHashTable, NSObject, SiriCoreWiFiManagerClient;
@protocol OS_dispatch_queue, OS_nw_path_evaluator;

@interface SiriCoreNetworkManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
    NSObject<OS_nw_path_evaluator> *_pathEvaluator;
    int _pathStatus;
    char _pathUsesCellular;
    SiriCoreWiFiManagerClient *_wiFiManagerClient;
    char _hasSymptomsBasedInstantCellQuality;
    char _symptomsBasedInstantCellQualityIsGood;
    char _hasSymptomsBasedInstantWiFiQuality;
    char _symptomsBasedInstantWiFiQualityIsGood;
    char _hasSymptomsBasedHistoricalCellQuality;
    char _symptomsBasedHistoricalCellQualityIsGood;
    char _hasSymptomsBasedHistoricalWiFiQuality;
    char _symptomsBasedHistoricalWiFiQualityIsGood;
    char _lastFetchInProgress;
    double _lastSuccessfulSymptomsFetch;
    NSNumber *_lastSignalStrength;
    unsigned long long _subscriptionCount;
    NSString *_carrierName;
}

+ (id)sharedInstance;
+ (void)_ifnameTypeForName:(char *)a0 isWiFi:(char *)a1 isCellular:(char *)a2;
+ (void)acquireDormancySuspendAssertion:(const void **)a0;
+ (long long)connectionSubTypeForCellularInterface;
+ (long long)connectionTypeForInterface:(id)a0;
+ (id)connectionTypeForInterfaceName:(id)a0 isCellular:(char)a1;
+ (void)getCarrierName:(id *)a0 signalStrength:(id *)a1 subscriptionCount:(id *)a2;
+ (void)releaseDormancySuspendAssertion:(void *)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)_init;
- (void)addObserver:(id)a0;
- (char)_defaultBTLinkRecommendation;
- (char)_defaultWiFiLinkRecommendation;
- (void)_getCarrierName:(id *)a0;
- (char)_getConnectionSuccessRate:(id)a0 hasMetric:(char *)a1;
- (long long)_getConnectionTechnologyForCellularInterface;
- (void)_getNetworkPerformanceFeed;
- (void)_pathUpdated:(id)a0;
- (long long)_reportCellularHistoricalQuality;
- (long long)_reportCellularInstantQuality;
- (long long)_reportWiFiHistoricalQuality;
- (long long)_reportWiFiInstantQuality;
- (void)_stopMonitoringNetwork;
- (id)_wiFiManagerClient;
- (void)acquireWiFiAssertion:(long long)a0;
- (long long)anyNetworkQuality;
- (long long)cellularNetworkQuality;
- (void)forceFastDormancy;
- (void)getNetworkPerformanceFeed;
- (void)getQualityReport:(id /* block */)a0;
- (void)getSignalStrength:(id *)a0 subscriptionCount:(unsigned long long *)a1;
- (void)releaseWiFiAssertion;
- (void)startMonitoringNetworkForHost:(id)a0;
- (void)stopMonitoringNetwork;
- (long long)wifiNetworkQuality;

@end
