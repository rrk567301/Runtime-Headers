@interface CSSoftwareUpdateCheckingMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isSoftwareUpdateCheckingRunning;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)_checkSoftwareUpdateCheckingState;
- (void)_didReceiveSoftwareUpdateCheckingStateChanged:(BOOL)a0;
- (unsigned char)_softwareUpdateCheckingState;
- (void)_notifyObserver:(id)a0 withSoftwareUpdateCheckingRunning:(BOOL)a1;
- (BOOL)isSoftwareUpdateCheckingRunning;
- (void)_didReceiveSoftwareUpdateCheckingStateChangedInQueue:(BOOL)a0;

@end
