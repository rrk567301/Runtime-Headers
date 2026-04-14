@class NSString, OS_os_log, BGSystemTask, BGSystemTaskScheduler;

@interface HDFastPassBackgroundTask : NSObject <HDBackgroundSystemTask> {
    void /* function */ identifier;
    void /* function */ handler;
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic, readonly) BGSystemTask *currentTask;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) OS_os_log *loggingCategory;
@property (nonatomic, retain) BGSystemTask *_currentTask;
@property (nonatomic, readonly) BOOL shouldDefer;
@property (nonatomic) BOOL _shouldDefer;
@property (nonatomic, readonly) unsigned long long expirationReason;
@property (nonatomic) unsigned long long _expirationReason;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, retain) BGSystemTaskScheduler *scheduler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addExpirationHandler:(id /* block */)a0;
- (id)initWithName:(id)a0 loggingCategory:(id)a1 scheduler:(id)a2 handler:(id /* block */)a3;

@end
