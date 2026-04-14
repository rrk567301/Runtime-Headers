@class NSMutableDictionary, NSMapTable, NSMutableSet, NSString, _BGTaskIdentifierRegistry;
@protocol _DASActivityBackgroundTasksScheduler;

@interface BGTaskScheduler : NSObject <_DASActivityBackgroundTasksSchedulerDelegate>

@property (class, readonly) BGTaskScheduler *sharedScheduler;
@property (class, readonly) long long supportedResources;

@property (retain, nonatomic, setter=_setScheduler:) id<_DASActivityBackgroundTasksScheduler> _scheduler;
@property (retain, nonatomic, setter=_setQueuedLaunchActivities:) NSMutableSet *_queuedLaunchActivities;
@property (retain, nonatomic, setter=_setQueuedExpiredLaunchActivities:) NSMutableSet *_queuedExpiredLaunchActivities;
@property (nonatomic, setter=_setLock:) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
@property (retain, nonatomic, setter=_setRegistrations:) NSMutableDictionary *_registrations;
@property (retain, nonatomic, setter=_setIdentifierRegistry:) _BGTaskIdentifierRegistry *_identifierRegistry;
@property (retain, nonatomic, setter=_setRunningTasksMap:) NSMapTable *_runningTasksMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;
+ (id)_log;
+ (void)initialize;
+ (BOOL)_isRunningInNonExtensionOrApplication;
+ (BOOL)_hasExtensionEntitlement;
+ (id)_sharedSchedulerIfExists;
+ (void)_applicationDidFinishLaunching:(id)a0;
+ (BOOL)_isNotApplication;
+ (BOOL)_isRunningInExtension;

- (id)_init;
- (BOOL)registerForTaskWithIdentifier:(id)a0 usingQueue:(id)a1 launchHandler:(id /* block */)a2;
- (void)_runTask:(id)a0 registration:(id)a1;
- (BOOL)_isRunningTaskOfClass:(Class)a0;
- (BOOL)_unsafe_submitTaskRequest:(id)a0 error:(id *)a1;
- (BOOL)submitTaskRequest:(id)a0 error:(id *)a1;
- (void)scheduler:(id)a0 handleLaunchForActivities:(id)a1;
- (void)scheduler:(id)a0 willExpireActivities:(id)a1;
- (id)init;
- (void)_simulateExpirationForTaskWithIdentifier:(id)a0;
- (void)_callExpirationHandlersForActivities:(id)a0 shouldQueue:(BOOL)a1;
- (id)_unsafe_registrationForIdentifier:(id)a0;
- (id)_runningTasks;
- (void)_callRegisteredHandlersForActivities:(id)a0;
- (void)_simulateLaunchForTaskWithIdentifier:(id)a0;
- (BOOL)_unsafe_registerForTaskWithIdentifier:(id)a0 usingQueue:(id)a1 launchHandler:(id /* block */)a2;
- (void)_handleAppLaunch;
- (void)cancelAllTaskRequests;
- (id)_queueForRegistration:(id)a0;
- (void)getPendingTaskRequestsWithCompletionHandler:(id /* block */)a0;
- (void)cancelTaskRequestWithIdentifier:(id)a0;
- (void)_handleSubmissionWithoutRegistrationForTaskRequest:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
