@class NSString, BGNonRepeatingSystemTaskRequest, BGSystemTask, OS_os_log, HDCoalescedTaskPoolQuota, BGSystemTaskScheduler;

@interface HDOneShotBackgroundTask : NSObject <HDBackgroundSystemTask> {
    void /* function */ identifier;
    void /* function */ handler;
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic, readonly) BGSystemTask *currentTask;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) BGNonRepeatingSystemTaskRequest *defaultRequest;
@property (nonatomic, readonly) OS_os_log *loggingCategory;
@property (nonatomic, retain) BGSystemTask *_currentTask;
@property (nonatomic, readonly) BOOL shouldDefer;
@property (nonatomic) BOOL _shouldDefer;
@property (nonatomic) BOOL rescheduleWhileRunning;
@property (nonatomic, retain) HDCoalescedTaskPoolQuota *quota;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, retain) BGSystemTaskScheduler *scheduler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)launchTask;
- (void)addExpirationHandler:(id /* block */)a0;
- (BOOL)cancelRequestAndReturnError:(id *)a0;
- (id)initWithDefaultRequest:(id)a0 loggingCategory:(id)a1 scheduler:(id)a2 handler:(id /* block */)a3;
- (id)initWithName:(id)a0 loggingCategory:(id)a1 scheduler:(id)a2 handler:(id /* block */)a3;
- (BOOL)runImmediatelyAndReturnError:(id *)a0 completion:(id /* block */)a1;
- (BOOL)submitRequestWithMaximumDelay:(double)a0 error:(id *)a1 completion:(id /* block */)a2;
- (BOOL)submitRequest:(id)a0 error:(id *)a1 completion:(id /* block */)a2;
- (BOOL)submitRequestWithMaximumDelay:(double)a0 minimumDelay:(double)a1 error:(id *)a2 completion:(id /* block */)a3;

@end
