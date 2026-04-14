@class NSDictionary, UAFAssetSetObserver;

@interface CSUAFDownloadMonitor : CSEventMonitor {
    NSDictionary *_assetSetDict;
    UAFAssetSetObserver *_observer;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)notifyAssets:(id)a0 onQueue:(id)a1;

@end
