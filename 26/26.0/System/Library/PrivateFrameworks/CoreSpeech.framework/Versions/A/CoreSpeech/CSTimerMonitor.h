@class NSObject;
@protocol OS_dispatch_queue;

@interface CSTimerMonitor : CSEventMonitor {
    long long _timerFiringState;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)initializeTimerState;
- (long long)timerState;

@end
