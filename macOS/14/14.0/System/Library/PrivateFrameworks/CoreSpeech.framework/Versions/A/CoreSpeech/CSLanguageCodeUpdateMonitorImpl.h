@interface CSLanguageCodeUpdateMonitorImpl : CSLanguageCodeUpdateMonitor {
    int _notifyToken;
}

- (id)init;
- (void)_stopMonitoring;
- (void)_didReceiveLanguageCodeUpdate;
- (void)_notifyObserver:(id)a0 withLanguageCode:(id)a1;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isLanguageCodeCurrent:(id)a0;
- (void)notifySiriLanguageCodeChanged:(id)a0;

@end
