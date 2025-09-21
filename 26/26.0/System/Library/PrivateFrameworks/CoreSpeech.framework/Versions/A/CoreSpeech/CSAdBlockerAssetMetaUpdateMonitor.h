@interface CSAdBlockerAssetMetaUpdateMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_didReceiveNewAdBlockerAssetMetaData;
- (const char *)_asssetMetaUpdatedKey;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0;
- (void)_stopMonitoring;

@end
