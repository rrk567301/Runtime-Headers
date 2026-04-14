@interface CSAlwaysOnProcessorStateMonitor : CSEventMonitor {
    BOOL _isListeningEnabled;
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (void)_didReceiveAOPListeningStateChange:(BOOL)a0;
- (BOOL)isEnabled;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;

@end
