@interface IMDBackgroundMessageProcessingController : NSObject {
    void /* unknown type, empty encoding */ workloadReporter;
    void /* unknown type, empty encoding */ executors;
    void /* unknown type, empty encoding */ executorStates;
    void /* unknown type, empty encoding */ criticalLimiter;
    void /* unknown type, empty encoding */ ptasksUpdatedDarwinNotifySubscription;
    void /* unknown type, empty encoding */ storageTimerFiredNotificationObserver;
    void /* unknown type, empty encoding */ throttleMonitor;
}

- (id)init;
- (id)_scheduler;
- (void).cxx_destruct;
- (void)addPersistentTaskExecutorMonitor:(id)a0 withID:(id)a1;
- (void)removePersistentTaskExecutorMonitorWithID:(id)a0;
- (void)resumeExecutorWithGroupName:(id)a0 lane:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)runExecutorWithTaskLimit:(long long)a0 groupName:(id)a1 lane:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)taskIdentifierForExecutorWithGroupName:(id)a0 lane:(unsigned long long)a1;

@end
