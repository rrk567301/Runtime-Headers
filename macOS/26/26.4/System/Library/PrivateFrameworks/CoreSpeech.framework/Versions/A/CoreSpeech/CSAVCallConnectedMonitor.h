@interface CSAVCallConnectedMonitor : CSEventMonitor {
    BOOL _hasConnectedAVCall;
}

+ (id)sharedInstance;

- (void)_startObservingSystemControllerLifecycle;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (void)_systemControllerDied:(id)a0;
- (void)_handleCallActiveDidChangeNotification:(id)a0;
- (void)_startObservingAVCallActiveChange;
- (BOOL)hasConnectedAVCall;

@end
