@class NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriInCallEnabledMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isEnabled;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (BOOL)isEnabled;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (BOOL)_checkSiriInCallEnabled;
- (void)_didReceiveSiriInCallChangedInQueue:(BOOL)a0;
- (void)_siriInCallEnabledDidChangeEnabledDidChange;

@end
