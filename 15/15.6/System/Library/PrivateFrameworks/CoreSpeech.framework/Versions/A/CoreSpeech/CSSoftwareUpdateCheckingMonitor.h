@interface CSSoftwareUpdateCheckingMonitor : CSEventMonitor {
    int _notifyToken;
    char _isSoftwareUpdateCheckingRunning;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (char)isSoftwareUpdateCheckingRunning;
- (char)_checkSoftwareUpdateCheckingState;
- (void)_didReceiveSoftwareUpdateCheckingStateChanged:(char)a0;
- (void)_didReceiveSoftwareUpdateCheckingStateChangedInQueue:(char)a0;
- (void)_notifyObserver:(id)a0 withSoftwareUpdateCheckingRunning:(char)a1;
- (unsigned char)_softwareUpdateCheckingState;
- (void)_startMonitoringWithQueue:(id)a0;

@end
