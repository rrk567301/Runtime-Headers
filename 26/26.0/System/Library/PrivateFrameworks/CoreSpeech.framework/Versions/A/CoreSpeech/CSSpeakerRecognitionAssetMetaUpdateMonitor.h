@interface CSSpeakerRecognitionAssetMetaUpdateMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (const char *)_asssetMetaUpdatedKey;
- (void)_didReceiveSpeakerRecognitionAssetMetaData;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0;
- (void)_stopMonitoring;

@end
