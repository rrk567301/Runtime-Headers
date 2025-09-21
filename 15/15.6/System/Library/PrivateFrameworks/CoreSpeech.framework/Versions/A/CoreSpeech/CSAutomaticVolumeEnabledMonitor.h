@class NSUserDefaults, NSObject;
@protocol OS_dispatch_queue;

@interface CSAutomaticVolumeEnabledMonitor : CSEventMonitor {
    char _isAutomaticVolumeEnabled;
    NSUserDefaults *_defaults;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_stopMonitoring;
- (void)_didReceiveAutomaticVolumeToggled:(char)a0;
- (void)_notifyObserver:(id)a0 withEnabled:(char)a1;
- (void)_startMonitoringWithQueue:(id)a0;

@end
