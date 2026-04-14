@interface CSVoiceTriggerAssetDownloadMonitor : CSEventMonitor {
    int _notifyToken;
    int _gibraltarMacNotifyToken;
    int _darwinNotifyToken;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_notifyObserver:(id)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_didInstalledNewVoiceTriggerAsset;
- (id)init;
- (const char *)_notificationKey;

@end
