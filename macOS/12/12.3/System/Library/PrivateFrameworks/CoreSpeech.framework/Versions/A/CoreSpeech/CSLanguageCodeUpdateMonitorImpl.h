@interface CSLanguageCodeUpdateMonitorImpl : CSLanguageCodeUpdateMonitor {
    int _notifyToken;
}

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 withLanguageCode:(id)a1;
- (void)_didReceiveLanguageCodeUpdate;
- (void)notifySiriLanguageCodeChanged:(id)a0;

@end
