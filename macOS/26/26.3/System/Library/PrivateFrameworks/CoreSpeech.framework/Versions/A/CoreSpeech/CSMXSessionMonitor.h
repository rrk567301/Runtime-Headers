@class NSObject;
@protocol OS_dispatch_queue;

@interface CSMXSessionMonitor : CSEventMonitor {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
+ (id)GetCurrentlyActiveSessionCategory;
+ (id)GetCurrentlyActiveSessionMode;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_systemControllerDied:(id)a0;
- (void)_handleSomeClientIsActiveDidChangeNotification:(id)a0;
- (void)_querySomeClientIsActive;
- (void)_startObservingAVSystemControllerLifecycle;
- (void)_startObservingSomeClientIsActive;

@end
