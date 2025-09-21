@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAlarmMonitor : CSEventMonitor {
    long long _alarmFiringState;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (long long)alarmState;
- (void)initializeAlarmState;

@end
