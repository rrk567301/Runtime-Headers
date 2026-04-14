@class NSString;

@interface CSSpringboardStartMonitor : CSEventMonitor <CSSystemShellStartProviding> {
    int _notifyToken;
    BOOL _isSpringBoardStarted;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isSystemShellStarted;
- (id)init;
- (void)_didReceiveSpringboardStarted:(BOOL)a0;
- (void)_notifyObserver:(id)a0 withStarted:(BOOL)a1;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)_checkSpringBoardStarted;
- (BOOL)isSpringboardStarted;
- (void)_didReceiveSpringboardStartedInQueue:(BOOL)a0;
- (void)_stopMonitoring;

@end
