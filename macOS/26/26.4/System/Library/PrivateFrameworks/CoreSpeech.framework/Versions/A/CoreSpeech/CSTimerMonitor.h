@class NSObject;
@protocol OS_dispatch_queue;

@interface CSTimerMonitor : CSEventMonitor {
    long long _timerFiringState;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)initializeTimerState;
- (long long)timerState;

@end
