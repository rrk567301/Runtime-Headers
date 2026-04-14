@class NSString;

@interface CSClarityboardStartMonitor : CSEventMonitor <CSSystemShellStartProviding> {
    int _notifyToken;
    BOOL _isClarityBoardStarted;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isSystemShellStarted;
- (id)init;
- (void)_notifyObserver:(id)a0 withStarted:(BOOL)a1;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (void)_didReceiveClarityboardStarted:(BOOL)a0;
- (BOOL)_checkClarityBoardStarted;
- (void)_didReceiveClarityboardStartedInQueue:(BOOL)a0;
- (BOOL)isClarityBoardStarted;

@end
