@class PLBackgroundJobLibraryCoordinator, NSString, PFCoalescer, NSDictionary, PFCameraViewfinderSessionWatcher, NSObject, PLBackgroundJobStatusCenter, NSPointerArray;
@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_source;

@interface PLBackgroundJobService : NSObject <PFCameraViewfinderSessionWatcherDelegate, PLBackgroundJobLibraryCoordinatorDelegate> {
    NSObject<OS_xpc_object> *_xpcActivity;
    unsigned long long _state;
    PLBackgroundJobStatusCenter *_statusCenter;
    PLBackgroundJobLibraryCoordinator *_libraryCoordinator;
    PFCoalescer *_registrationCoalescer;
    PFCameraViewfinderSessionWatcher *_cameraWatcher;
    double _registrationCoalescerPushBackTimeInterval;
    NSDictionary *_libraryInvalidationCompletionHandlerByLibraryURL;
    NSDictionary *_bundlesToProcessByPriority;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bundlesToProcessByPriorityLock;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_source> *_xpcActivityDeferTimer;
    BOOL _deferringService;
    BOOL _simulateXpcActivityDeferring;
    BOOL _cameraForeground;
}

@property (retain, nonatomic) NSPointerArray *observers;
@property (readonly) NSDictionary *statusCenterDump;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_stateIsReadyForRegistration:(unsigned long long)a0;
+ (BOOL)_stateIsInRunningState:(unsigned long long)a0;
+ (BOOL)verifyStateTransitionFromState:(unsigned long long)a0 toState:(unsigned long long)a1;
+ (id)_activityIdentifierForPriority:(long long)a0;
+ (BOOL)_activityIdentifier:(id)a0 matchesPriority:(long long)a1;
+ (id)_criteriaForActivityPriority:(long long)a0;
+ (BOOL)_stateIsReadyToRun:(unsigned long long)a0;
+ (BOOL)_stateIsInPausedState:(unsigned long long)a0;
+ (void)_removeAllBundlesFromUserDefaultsWithoutLocking;

- (id)init;
- (void).cxx_destruct;
- (void)_shutdown;
- (void)signalBackgroundProcessingNeededOnLibrary:(id)a0;
- (void)cameraWatcherDidChangeState:(id)a0;
- (void)signalBackgroundProcessingNeededOnBundle:(id)a0;
- (id)initWithLibraryCoordinator:(id)a0 statusCenter:(id)a1;
- (void)_loadBundleRecordsDictionaryFromUserDefaults;
- (unsigned long long)_getServiceState;
- (void)_registerActivityIfNecessaryOnBundles:(id)a0;
- (void)_setServiceState:(unsigned long long)a0;
- (void)_stopPollingForActivityStatus;
- (void)_unregisterActivityIfNeededShouldConsiderDeferring:(BOOL)a0;
- (id)_getBundleRecordsFromProcessingSetForPriority:(long long)a0;
- (void)_removeBundleRecordFromProcessingSet:(id)a0 priority:(long long)a1;
- (void)_stopRunningBackgroundJobs;
- (unsigned long long)_getServiceStateAlreadyLocked;
- (void)_setServiceStateAlreadyLocked:(unsigned long long)a0;
- (void)_appendBundleRecordsToProcessingSet:(id)a0 priority:(long long)a1;
- (void)_registerActivityWithPriority:(long long)a0;
- (void)_removeAllBundlesFromProcessingSet;
- (void)_startPollingForActivityStatus;
- (void)_startRunningBackgroundJobsWithPriorityAlreadyLocked:(long long)a0;
- (void)_stopRunningBackgroundJobsAndTearDownXPCDeferTimers;
- (id)_bundlesToProcessByPriorityAsPathStrings;
- (void)_persistBundleRecordsDictionaryToUserDefaults;
- (id)_getBundleRecordsFromProcessingSetForAllPriorites;
- (void)_updateCameraForegroundState:(BOOL)a0;
- (void)libraryCoordinatorFinishedJobsOnSubmittedBundle:(id)a0 priority:(long long)a1;
- (void)libraryCoordinatorFinishedJobsOnAllSubmittedBundles;
- (id)initWithLibraryCoordinator:(id)a0;
- (void)_simulateXPCShouldDefer;
- (void)invalidateLibraryBundle:(id)a0 completion:(id /* block */)a1;
- (void)_registerActivityWithoutCoalescingIfNecessaryOnBundle:(id)a0;
- (void)_unregisterActivityIfNeededShouldConsiderDeferring_enqueue:(BOOL)a0;
- (void)_startRunningBackgroundJobsWithPriority:(long long)a0;
- (id)_getBundlePathsToProcess;

@end
