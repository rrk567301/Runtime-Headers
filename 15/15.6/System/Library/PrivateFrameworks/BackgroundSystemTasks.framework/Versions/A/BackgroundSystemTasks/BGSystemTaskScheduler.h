@class NSMutableDictionary, _DASScheduler, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BGSystemTaskScheduler : NSObject <BGSystemTaskDelegate>

@property (class, readonly) BGSystemTaskScheduler *sharedScheduler;

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSMutableDictionary *registrations;
@property (retain, nonatomic) NSMutableDictionary *preRunningTasksMap;
@property (retain, nonatomic) NSMutableDictionary *runningTasksMap;
@property (retain, nonatomic) NSMutableDictionary *pendingTaskRegistrationsMap;
@property (retain, nonatomic) _DASScheduler *scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)taskRequestForIdentifier:(id)a0;
- (char)deregisterTaskWithIdentifier:(id)a0;
- (char)registerForTaskWithIdentifier:(id)a0 usingQueue:(id)a1 launchHandler:(id /* block */)a2;
- (char)submitTaskRequest:(id)a0 error:(id *)a1;
- (char)updateTaskRequest:(id)a0 error:(id *)a1;
- (char)cancelTaskRequestWithIdentifier:(id)a0 error:(id *)a1;
- (char)canTaskRegistration:(id)a0 produceResultOfIdentifier:(id)a1;
- (void)expireTaskWithRegistration:(id)a0 withReason:(unsigned long long)a1;
- (void)getTaskStatusForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleDeniedTaskLaunch:(id)a0;
- (void)installEventStreamHandler;
- (void)installResubmissionHandler;
- (void)processEvent:(id)a0 forRegistration:(id)a1;
- (char)resumeScheduling:(id)a0 error:(id *)a1;
- (void)runTaskWithRegistration:(id)a0;
- (char)systemTask:(id)a0 canConsumeResultOfIdentifier:(id)a1;
- (char)systemTask:(id)a0 consumedResults:(id)a1 error:(id *)a2;
- (char)systemTask:(id)a0 producedResults:(id)a1 error:(id *)a2;
- (char)systemTask:(id)a0 resetResultsForIdentifier:(id)a1 error:(id *)a2;
- (char)taskStartedWithParameters:(id)a0 error:(id *)a1;
- (char)taskStoppedWithParameters:(id)a0 error:(id *)a1;

@end
