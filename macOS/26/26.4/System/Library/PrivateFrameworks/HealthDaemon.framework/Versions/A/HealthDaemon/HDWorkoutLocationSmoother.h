@class NSString, HDProfile, NSMutableSet, HDSmoothingTask, NSObject, CLLocationSmoother;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDWorkoutLocationSmoother : NSObject <CLLocationSmootherDelegate, HDDatabaseProtectedDataObserver, HDForegroundClientProcessObserver, HDDataObserver, HDProfileReadyObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    HDProfile *_profile;
    NSMutableSet *_pendingSmoothingTasks;
    HDSmoothingTask *_currentSmoothingTask;
    NSObject<OS_dispatch_source> *_timeoutSource;
    BOOL _needToCheckForLocationSeriesOnUnlock;
    BOOL _isFirstLaunchAndNotYetSmoothed;
    CLLocationSmoother *_queueCurrentSmoother;
}

@property (copy, nonatomic) id /* block */ didCompleteAllPendingSmoothingTasksHandler;
@property (copy, nonatomic) id /* block */ unitTest_wilTriggerSmoothing;
@property (copy, nonatomic) id /* block */ unitTest_didSmoothActivityForTask;
@property (copy, nonatomic) id /* block */ unitTest_didSaveSmoothedRouteForActivityAndTask;
@property (copy, nonatomic) id /* block */ unitTest_smootherCompletionHandlerDidReturn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_saveNewRouteSeriesWithProfile:(id)a0 sourceEntity:(id)a1 forWorkout:(id)a2 locations:(id)a3 routes:(id)a4 associateWithWorkout:(BOOL)a5 usingMetadata:(BOOL)a6 error:(id *)a7;

- (id)initWithProfile:(id)a0;
- (void)profileDidBecomeReady:(id)a0;
- (void)_associationsSyncedForWorkout:(id)a0;
- (void).cxx_destruct;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)foregroundClientProcessesDidChange:(id)a0 previouslyForegroundBundleIdentifiers:(id)a1;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)smoothRouteWithWorkoutUUID:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;

@end
