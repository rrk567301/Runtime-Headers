@interface CSVoiceTriggerAssetDownloadMonitor : CSEventMonitor {
    int _notifyToken;
    int _gibraltarMacNotifyToken;
    int _darwinNotifyToken;
}

+ (id)sharedInstance;

- (void)_didInstalledNewVoiceTriggerAsset;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (const char *)_notificationKey;
- (void)_notifyObserver:(id)a0;
- (void)_stopMonitoring;

@end
