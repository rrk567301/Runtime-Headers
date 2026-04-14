@class NSHashTable, WFDialogPresentationManager, WFUserNotificationManager, NSString, WFLSApplicationStateObserver, NSMutableDictionary, WFUIPresenter, WFApplicationTerminationMonitor, NSObject, NSMutableSet, WFWorkflowRunQueue;
@protocol WFDatabaseProvider, OS_dispatch_queue;

@interface WFWorkflowRunCoordinator : NSObject <WFOutOfProcessWorkflowControllerDelegate, UNUserNotificationCenterDelegate>

@property (readonly, nonatomic) WFUIPresenter *userInterfacePresenter;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) WFWorkflowRunQueue *runRequestQueue;
@property (readonly, nonatomic) NSMutableDictionary *runningWorkflowCompletionHandlers;
@property (readonly, nonatomic) NSMutableDictionary *runningWorkflowControllers;
@property (readonly, nonatomic) NSMutableDictionary *runEvents;
@property (readonly, nonatomic) NSMutableDictionary *descriptors;
@property (readonly, nonatomic) NSMutableDictionary *runRequests;
@property (readonly, nonatomic) NSMutableSet *progressPresentingRuns;
@property (readonly, nonatomic) WFDialogPresentationManager *dialogPresentationManager;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableDictionary *parentRunningContexts;
@property (readonly, nonatomic) WFApplicationTerminationMonitor *terminationMonitor;
@property (readonly, nonatomic) WFLSApplicationStateObserver *applicationStateObserver;
@property (readonly, nonatomic) WFUserNotificationManager *userNotificationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)errorCategory;
+ (id)errorWithActionCategory;
+ (long long)outOfProcessWorkflowControllerPresentationModeFromVCShortcutPresentationMode:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)runWorkflowWithDescriptor:(id)a0 request:(id)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)stopRunningWorkflowWithRunningContext:(id)a0;
- (id)initWithUserNotificationManager:(id)a0 databaseProvider:(id)a1;
- (void)presentationManager:(id)a0 updateSmartPromptStateData:(id)a1 actionUUID:(id)a2 context:(id)a3 reference:(id)a4;
- (void)removeStaleNotifications;
- (void)outOfProcessWorkflowController:(id)a0 didFinishWithResult:(id)a1 dialogAttribution:(id)a2;
- (void)outOfProcessWorkflowController:(id)a0 didDecideRunningProgressIsAllowed:(BOOL)a1 dialogAttribution:(id)a2;
- (void)outOfProcessWorkflowController:(id)a0 presenterRequestedWorkflowPauseWithContext:(id)a1 dialogRequest:(id)a2;
- (id)contextForDialogPresentationForContext:(id)a0;
- (BOOL)shortcutShouldShowRunningProgress:(id)a0;
- (unsigned long long)queueTypeForDescriptor:(id)a0 runRequest:(id)a1;
- (BOOL)queue_shouldQueueDescriptor:(id)a0 runRequest:(id)a1 queueType:(unsigned long long *)a2;
- (void)runWorkflowWithDescriptor:(id)a0 request:(id)a1 context:(id)a2;
- (void)queue_runWorkflowWithDescriptor:(id)a0 request:(id)a1 context:(id)a2 error:(out id *)a3 completion:(id /* block */)a4;
- (void)resumeWorkflowFromContext:(id)a0 withRequest:(id)a1 presentationMode:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)showSingleStepCompletionWithWebClipMetadata:(id)a0 completion:(id /* block */)a1;
- (void)queue_runNextQueuedRequestWithType:(unsigned long long)a0 inQueue:(id)a1;
- (void)queue_startObservingAppStateIfNeededForRunRequest:(id)a0 context:(id)a1;
- (void)queue_stopObservingAppStateIfNeededForRunRequest:(id)a0 context:(id)a1;
- (void)queue_bringDialogsToFrontIfNeededForOriginatingBundleIdentifier:(id)a0;
- (void)returnFocusToOriginatingAppIfNeededForRunRequest:(id)a0 context:(id)a1;
- (void)outOfProcessWorkflowController:(id)a0 didStartFromWorkflowReference:(id)a1 dialogAttribution:(id)a2;
- (void)queue_finishWorkflowWithContext:(id)a0 result:(id)a1;
- (BOOL)queue_callWorkflowCompletionForContext:(id)a0 withResult:(id)a1;
- (void)queue_notifyObserversWorkflowDidFinishRunningWithResult:(id)a0 context:(id)a1;
- (BOOL)presentationManager:(id)a0 shouldPresentDialogRequest:(id)a1 withContext:(id)a2;
- (id)presentationManager:(id)a0 responseForDialogRequest:(id)a1 withContext:(id)a2;
- (id)unsupportedDialogResponseWithRequest:(id)a0;
- (id)presentationManager:(id)a0 runningContextForContext:(id)a1;
- (unsigned long long)presentationManager:(id)a0 dialogPresentationModeForRequest:(id)a1 withContext:(id)a2;
- (void)presentationManager:(id)a0 didEnqueueDialogRequest:(id)a1 withContext:(id)a2;
- (void)presentationManager:(id)a0 cancelExecutionOfWorkflowWithContext:(id)a1;
- (void)presentationManager:(id)a0 pauseExecutionOfWorkflowWithContext:(id)a1;
- (void)postNotificationAboutFailure:(id)a0 inWorkflow:(id)a1 dialogAttribution:(id)a2;
- (id)allRunningWorkflows;
- (BOOL)shortcutWithIdentifierIsRunning:(id)a0;
- (void)stopAllRunningWorkflows;
- (void)getCurrentProgressCompletedForContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)queue_workflowControllerWithContext:(id)a0;

@end
