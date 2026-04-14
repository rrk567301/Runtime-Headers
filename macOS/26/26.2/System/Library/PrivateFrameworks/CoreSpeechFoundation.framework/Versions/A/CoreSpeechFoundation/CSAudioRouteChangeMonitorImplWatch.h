@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImplWatch : CSAudioRouteChangeMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    long long _hearstRouteStatus;
    NSMutableSet *_notifications;
}

- (void)_systemControllerDied:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (long long)hearstRouteStatus;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (BOOL)jarvisConnected;
- (BOOL)carPlayConnected;
- (void)getHearstRouteStatus:(id /* block */)a0;
- (void)getJarvisConnected:(id /* block */)a0;
- (void)_startObservingAudioRouteChange;
- (long long)hearstOwnership;
- (void)_fetchAndNotifyHearstRouteStatus;
- (void)_fetchHearstRouteStatusWithCompletion:(id /* block */)a0;
- (BOOL)_isHearstConnectedButNotRouted;
- (void)_notifyHearstRouteStatus:(long long)a0;
- (void)_updateMonitoringForHearstHijackability;
- (void)activeAudioRouteDidChange:(id)a0;
- (void)getHearstOwnershipStatus:(id /* block */)a0;
- (void)hearstHijackEligibilityUpdated;
- (void)pickableRoutesDidChange:(id)a0;

@end
