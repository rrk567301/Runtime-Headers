@class NSMutableDictionary, NSSet, NSMutableSet, NSMapTable, NSString;
@protocol _DASActivityBackgroundTasksScheduler;

@interface BGTaskScheduler : NSObject <_DASActivityBackgroundTasksSchedulerDelegate>

@property (class, readonly) BGTaskScheduler *sharedScheduler;

@property (retain, nonatomic, setter=_setScheduler:) id<_DASActivityBackgroundTasksScheduler> _scheduler;
@property (retain, nonatomic, setter=_setQueuedLaunchActivities:) NSMutableSet *_queuedLaunchActivities;
@property (retain, nonatomic, setter=_setQueuedExpiredLaunchActivities:) NSMutableSet *_queuedExpiredLaunchActivities;
@property (nonatomic, setter=_setLock:) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
@property (retain, nonatomic, setter=_setRegistrations:) NSMutableDictionary *_registrations;
@property (retain, nonatomic, setter=_setPermittedIdentifiers:) NSSet *_permittedIdentifiers;
@property (retain, nonatomic, setter=_setRunningTasksMap:) NSMapTable *_runningTasksMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)load;
+ (id)_log;
+ (void)_applicationDidFinishLaunching:(id)a0;
+ (char)_hasExtensionEntitlement;
+ (char)_isNotApplication;
+ (char)_isRunningInExtension;
+ (char)_isRunningInNonExtensionOrApplication;
+ (id)_sharedSchedulerIfExists;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (char)registerForTaskWithIdentifier:(id)a0 usingQueue:(id)a1 launchHandler:(id /* block */)a2;
- (char)submitTaskRequest:(id)a0 error:(id *)a1;
- (void)scheduler:(id)a0 willExpireActivities:(id)a1;
- (void)cancelAllTaskRequests;
- (void)cancelTaskRequestWithIdentifier:(id)a0;
- (void)getPendingTaskRequestsWithCompletionHandler:(id /* block */)a0;
- (void)scheduler:(id)a0 handleLaunchForActivities:(id)a1;
- (char)_unsafe_registerForTaskWithIdentifier:(id)a0 usingQueue:(id)a1 launchHandler:(id /* block */)a2;
- (void)_callExpirationHandlersForActivities:(id)a0 shouldQueue:(char)a1;
- (void)_callRegisteredHandlersForActivities:(id)a0;
- (void)_handleAppLaunch;
- (char)_isRunningTaskOfClass:(Class)a0;
- (id)_queueForRegistration:(id)a0;
- (void)_runTask:(id)a0 registration:(id)a1;
- (id)_runningTasks;
- (void)_simulateExpirationForTaskWithIdentifier:(id)a0;
- (void)_simulateLaunchForTaskWithIdentifier:(id)a0;
- (id)_unsafe_registrationForIdentifier:(id)a0;
- (char)_unsafe_submitTaskRequest:(id)a0 error:(id *)a1;

@end
