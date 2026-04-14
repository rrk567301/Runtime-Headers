@interface CSVoiceTriggerAssetDownloadMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_didInstalledNewVoiceTriggerAsset;
- (const char *)_notificationKey;
- (void)_notifyObserver:(id)a0;
- (void)_startMonitoringWithQueue:(id)a0;

@end
