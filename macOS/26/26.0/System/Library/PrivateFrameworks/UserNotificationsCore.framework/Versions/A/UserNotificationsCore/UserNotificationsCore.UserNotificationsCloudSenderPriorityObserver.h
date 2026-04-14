@interface UserNotificationsCore.UserNotificationsCloudSenderPriorityObserver : NSObject <SWSystemSleepObserver> {
    void /* unknown type, empty encoding */ monitor;
    void /* unknown type, empty encoding */ consumer;
}

- (id)init;
- (void)systemSleepMonitorDidWakeFromSleep:(id)a0;
- (void).cxx_destruct;
- (void)systemSleepMonitor:(id)a0 prepareForSleepWithCompletion:(id /* block */)a1;

@end
