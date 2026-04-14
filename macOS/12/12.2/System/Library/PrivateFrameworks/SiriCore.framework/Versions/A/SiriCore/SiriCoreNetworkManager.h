@class NSNumber, NSHashTable, NSObject, SiriCoreWiFiManagerClient;
@protocol OS_dispatch_queue, OS_nw_path_evaluator;

@interface SiriCoreNetworkManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
    NSObject<OS_nw_path_evaluator> *_pathEvaluator;
    int _pathStatus;
    BOOL _pathUsesCellular;
    SiriCoreWiFiManagerClient *_wiFiManagerClient;
    BOOL _hasSymptomsBasedInstantCellQuality;
    BOOL _symptomsBasedInstantCellQualityIsGood;
    BOOL _hasSymptomsBasedInstantWiFiQuality;
    BOOL _symptomsBasedInstantWiFiQualityIsGood;
    BOOL _hasSymptomsBasedHistoricalCellQuality;
    BOOL _symptomsBasedHistoricalCellQualityIsGood;
    BOOL _hasSymptomsBasedHistoricalWiFiQuality;
    BOOL _symptomsBasedHistoricalWiFiQualityIsGood;
    BOOL _lastFetchInProgress;
    double _lastSuccessfulSymptomsFetch;
    NSNumber *_lastSignalStrength;
    unsigned long long _subscriptionCount;
}

+ (id)sharedInstance;
+ (long long)connectionSubTypeForCellularInterface;
+ (void)_ifnameTypeForName:(char *)a0 isWiFi:(BOOL *)a1 isCellular:(BOOL *)a2;
+ (void)getCarrierName:(id *)a0 signalStrength:(id *)a1 subscriptionCount:(id *)a2;
+ (id)connectionTypeForInterfaceName:(id)a0 isCellular:(BOOL)a1;
+ (long long)connectionTypeForInterface:(id)a0;
+ (void)acquireDormancySuspendAssertion:(const void **)a0;
+ (void)releaseDormancySuspendAssertion:(void *)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_init;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_stopMonitoringNetwork;
- (void)_pathUpdated:(id)a0;
- (void)_getNetworkPerformanceFeed;
- (long long)_reportCellularInstantQuality;
- (long long)_reportCellularHistoricalQuality;
- (long long)_reportWiFiInstantQuality;
- (long long)_reportWiFiHistoricalQuality;
- (void)releaseWiFiAssertion;
- (id)_wiFiManagerClient;
- (void)acquireWiFiAssertion:(long long)a0;
- (void)startMonitoringNetworkForHost:(id)a0;
- (void)stopMonitoringNetwork;
- (void)getNetworkPerformanceFeed;
- (long long)cellularNetworkQuality;
- (long long)wifiNetworkQuality;
- (long long)anyNetworkQuality;
- (void)getQualityReport:(id /* block */)a0;
- (void)getSignalStrength:(id *)a0 subscriptionCount:(unsigned long long *)a1;
- (void)forceFastDormancy;
- (BOOL)_defaultBTLinkRecommendation;
- (BOOL)_defaultWiFiLinkRecommendation;
- (BOOL)_getConnectionSuccessRate:(id)a0 hasMetric:(BOOL *)a1;

@end
