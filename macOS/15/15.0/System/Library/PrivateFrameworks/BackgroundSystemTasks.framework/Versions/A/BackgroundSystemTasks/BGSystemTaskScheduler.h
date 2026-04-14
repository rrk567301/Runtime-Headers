@class _DASScheduler, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BGSystemTaskScheduler : NSObject

@property (class, readonly) BGSystemTaskScheduler *sharedScheduler;

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSMutableDictionary *registrations;
@property (retain, nonatomic) NSMutableDictionary *preRunningTasksMap;
@property (retain, nonatomic) NSMutableDictionary *runningTasksMap;
@property (retain, nonatomic) NSMutableDictionary *pendingTaskRegistrationsMap;
@property (retain, nonatomic) _DASScheduler *scheduler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;

- (id)init;
- (void).cxx_destruct;
- (id)taskRequestForIdentifier:(id)a0;
- (BOOL)cancelTaskRequestWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)deregisterTaskWithIdentifier:(id)a0;
- (BOOL)registerForTaskWithIdentifier:(id)a0 usingQueue:(id)a1 launchHandler:(id /* block */)a2;
- (BOOL)submitTaskRequest:(id)a0 error:(id *)a1;
- (BOOL)updateTaskRequest:(id)a0 error:(id *)a1;
- (BOOL)canTaskRegistration:(id)a0 produceResultOfIdentifier:(id)a1;
- (BOOL)canTaskWithIdentifier:(id)a0 consumeResultOfIdentifier:(id)a1;
- (void)expireTaskWithRegistration:(id)a0 withReason:(unsigned long long)a1;
- (void)getTaskStatusForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleDeniedTaskLaunch:(id)a0;
- (void)installEventStreamHandler;
- (void)installResubmissionHandler;
- (void)processEvent:(id)a0 forRegistration:(id)a1;
- (BOOL)resetResultsForIdentifier:(id)a0 byTaskIdentifier:(id)a1 error:(id *)a2;
- (BOOL)resumeScheduling:(id)a0 error:(id *)a1;
- (void)runTaskWithRegistration:(id)a0;
- (BOOL)taskStartedWithParameters:(id)a0 error:(id *)a1;
- (BOOL)taskStoppedWithParameters:(id)a0 error:(id *)a1;
- (BOOL)validateTaskIdentifier:(id)a0 resultConsumption:(id)a1 error:(id *)a2;
- (BOOL)validateTaskIdentifier:(id)a0 resultProduction:(id)a1 error:(id *)a2;

@end
