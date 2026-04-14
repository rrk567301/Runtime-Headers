@interface CSAlwaysOnProcessorStateMonitor : CSEventMonitor {
    BOOL _isListeningEnabled;
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (BOOL)isEnabled;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (void)_didReceiveAOPListeningStateChange:(BOOL)a0;

@end
