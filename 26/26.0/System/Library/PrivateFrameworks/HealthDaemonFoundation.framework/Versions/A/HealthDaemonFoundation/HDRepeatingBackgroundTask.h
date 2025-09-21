@class NSString, OS_os_log, BGSystemTask, BGSystemTaskScheduler, OS_dispatch_queue;
@protocol HDBackgroundTaskCondition;

@interface HDRepeatingBackgroundTask : NSObject <HDBackgroundSystemTask> {
    void /* function */ identifier;
    void /* unknown type, empty encoding */ _logger;
    void /* function */ handler;
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic, readonly) BGSystemTask *currentTask;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) OS_os_log *loggingCategory;
@property (nonatomic, retain) BGSystemTask *_currentTask;
@property (nonatomic, readonly) BOOL shouldDefer;
@property (nonatomic) double minimumRetryInterval;
@property (nonatomic) BOOL _shouldDefer;
@property (nonatomic, readonly) unsigned int errorCount;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, retain) BGSystemTaskScheduler *scheduler;
@property (nonatomic, retain) id<HDBackgroundTaskCondition> condition;
@property (nonatomic, retain) OS_dispatch_queue *dispatchQueue;

+ (void)registerDisabledTaskWithName:(id)a0 scheduler:(id)a1 loggingCategory:(id)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addExpirationHandler:(id /* block */)a0;
- (BOOL)cancelRequestAndReturnError:(id *)a0;
- (id)getRequest;
- (id)initWithName:(id)a0 loggingCategory:(id)a1 scheduler:(id)a2 handler:(id /* block */)a3 condition:(id)a4;
- (BOOL)submitRequest:(id)a0 error:(id *)a1;
- (BOOL)updateRequest:(id)a0 error:(id *)a1;

@end
