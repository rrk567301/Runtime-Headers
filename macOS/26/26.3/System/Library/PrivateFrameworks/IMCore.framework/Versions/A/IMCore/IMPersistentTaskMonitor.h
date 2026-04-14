@interface IMPersistentTaskMonitor : NSObject <IMDaemonPersistentTaskExecutorMonitor> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ derivedState;
    void /* unknown type, empty encoding */ changeHandler;
    void /* unknown type, empty encoding */ notificationObserver;
}

@property (nonatomic, readonly) long long remainingChats;
@property (nonatomic, readonly) long long remainingMessages;

- (id)initWithChangeHandler:(id /* block */)a0;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)allExecutorStatusReportsUpdated:(id)a0;
- (void)executorStatusReportsUpdated:(id)a0;

@end
