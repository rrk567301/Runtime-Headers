@interface UserNotificationsCore.UserNotificationsCloudSenderPriorityObserver : NSObject <SWSystemSleepObserver> {
    void /* unknown type, empty encoding */ monitor;
    void /* unknown type, empty encoding */ consumer;
}

- (id)init;
- (void).cxx_destruct;
- (void)systemSleepMonitorDidWakeFromSleep:(id)a0;
- (void)systemSleepMonitor:(id)a0 prepareForSleepWithCompletion:(id /* block */)a1;

@end
