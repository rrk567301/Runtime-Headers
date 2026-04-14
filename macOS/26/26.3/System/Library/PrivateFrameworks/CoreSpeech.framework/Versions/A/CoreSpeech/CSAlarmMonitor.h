@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAlarmMonitor : CSEventMonitor {
    long long _alarmFiringState;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)alarmState;
- (void)initializeAlarmState;

@end
