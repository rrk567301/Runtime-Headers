@interface CSAVCallConnectedMonitor : CSEventMonitor {
    char _hasConnectedAVCall;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_handleCallActiveDidChangeNotification:(id)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_startObservingAVCallActiveChange;
- (void)_startObservingSystemControllerLifecycle;
- (void)_systemControllerDied:(id)a0;
- (char)hasConnectedAVCall;

@end
