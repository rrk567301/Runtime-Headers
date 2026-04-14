@interface CSSpringboardStartMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isSpringBoardStarted;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_didReceiveSpringboardStartedInQueue:(BOOL)a0;
- (void)_didReceiveSpringboardStarted:(BOOL)a0;
- (void)_notifyObserver:(id)a0 withStarted:(BOOL)a1;
- (BOOL)isSpringboardStarted;
- (BOOL)_checkSpringBoardStarted;

@end
