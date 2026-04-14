@class NSDictionary;

@interface CSUAFDownloadMonitor : CSEventMonitor {
    NSDictionary *_assetSetDict;
    id _observerToken;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)notifyAssets:(id)a0 onQueue:(id)a1;

@end
