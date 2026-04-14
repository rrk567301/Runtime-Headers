@class NSObject;
@protocol OS_dispatch_queue;

@interface CSMXSessionMonitor : CSEventMonitor {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
+ (id)GetCurrentlyActiveSessionCategory;
+ (id)GetCurrentlyActiveSessionMode;

- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)_systemControllerDied:(id)a0;
- (void)_handleSomeClientIsActiveDidChangeNotification:(id)a0;
- (void)_querySomeClientIsActive;
- (void)_startObservingAVSystemControllerLifecycle;
- (void)_startObservingSomeClientIsActive;

@end
