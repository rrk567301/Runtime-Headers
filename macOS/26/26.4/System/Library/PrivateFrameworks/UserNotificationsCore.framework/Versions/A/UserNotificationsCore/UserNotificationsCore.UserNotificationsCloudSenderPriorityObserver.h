@interface UserNotificationsCore.UserNotificationsCloudSenderPriorityObserver : NSObject <SWSystemSleepObserver> {
    void /* unknown type, empty encoding */ monitor;
    void /* unknown type, empty encoding */ consumer;
}

- (void).cxx_destruct;
- (id)init;
- (void)systemSleepMonitorDidWakeFromSleep:(id)a0;
- (void)systemSleepMonitor:(id)a0 prepareForSleepWithCompletion:(id /* block */)a1;

@end
