@interface CSAlwaysOnProcessorStateMonitor : CSEventMonitor {
    BOOL _isListeningEnabled;
    int _notifyToken;
}

+ (id)sharedInstance;

- (BOOL)isEnabled;
- (id)init;
- (void)_didReceiveAOPListeningStateChange:(BOOL)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (void)_stopMonitoring;

@end
