@interface CSAlwaysOnProcessorStateMonitor : CSEventMonitor {
    char _isListeningEnabled;
    int _notifyToken;
}

+ (id)sharedInstance;

- (id)init;
- (char)isEnabled;
- (void)_stopMonitoring;
- (void)_notifyObserver:(id)a0 withEnabled:(char)a1;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_didReceiveAOPListeningStateChange:(char)a0;

@end
