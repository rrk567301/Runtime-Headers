@interface CSVoiceTriggerAssetMetaUpdateMonitor : CSEventMonitor {
    int _notifyToken;
    int _gibraltarMacNotifyToken;
    int _darwinNotifyToken;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_notifyObserver:(id)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (const char *)_asssetMetaUpdatedKey;
- (id)init;
- (void)notifyNewVoiceTriggerAssetMetaDataUpdated;
- (void)_didReceiveNewVoiceTriggerAssetMetaData;

@end
