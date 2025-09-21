@class NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriInCallEnabledMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isEnabled;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (BOOL)isEnabled;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (BOOL)_checkSiriInCallEnabled;
- (void)_didReceiveSiriInCallChangedInQueue:(BOOL)a0;
- (void)_siriInCallEnabledDidChangeEnabledDidChange;

@end
