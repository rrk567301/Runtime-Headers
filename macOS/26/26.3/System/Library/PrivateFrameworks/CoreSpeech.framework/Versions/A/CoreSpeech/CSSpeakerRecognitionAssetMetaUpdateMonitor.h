@interface CSSpeakerRecognitionAssetMetaUpdateMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_notifyObserver:(id)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (const char *)_asssetMetaUpdatedKey;
- (void)_didReceiveSpeakerRecognitionAssetMetaData;
- (id)init;

@end
