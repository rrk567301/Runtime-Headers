@interface CSVoiceTriggerAssetDownloadMonitor : CSEventMonitor {
    int _notifyToken;
    int _gibraltarMacNotifyToken;
    int _darwinNotifyToken;
}

+ (id)sharedInstance;

- (void)_notifyObserver:(id)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (const char *)_notificationKey;
- (void)_stopMonitoring;
- (id)init;
- (void)_didInstalledNewVoiceTriggerAsset;

@end
