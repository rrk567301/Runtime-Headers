@class AASystemStateMonitor, NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitor : CSEventMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    AASystemStateMonitor *_aaSystemStateMonitor;
    BOOL _isHearstHijackable;
    BOOL _shouldMonitorHearstHijackability;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (long long)hearstRouteStatus;
- (BOOL)jarvisConnected;
- (BOOL)carPlayConnected;
- (void)getHearstRouteStatus:(id /* block */)a0;
- (void)getJarvisConnected:(id /* block */)a0;
- (BOOL)isHearstHijackable;
- (long long)hearstOwnership;
- (void)_invalidateSystemStateMonitorIfNeeded;
- (void)_setupAudioAccessorySystemStateMonitoring;
- (void)_updateAndBroadcastHearstHijackability:(BOOL)a0 forReason:(long long)a1;
- (void)getHearstOwnershipStatus:(id /* block */)a0;
- (void)hearstHijackEligibilityUpdated;
- (void)routeIsDoAPSupportedWithRouteUID:(id)a0 withCompletion:(id /* block */)a1;
- (void)startMonitoringHearstHijackEligibility;
- (void)stopMonitoringHearstHijackEligibility;

@end
