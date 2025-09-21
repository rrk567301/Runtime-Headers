@class CMWorkoutManager, NSString, CMWorkout, CMWorkoutMets, NSUUID, NSObject, CMWorkoutOverview, HDAssertionManager;
@protocol OS_dispatch_queue;

@interface HDCoreMotionWorkoutInterface : NSObject <HDAssertionObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    CMWorkoutManager *_cmWorkoutManager;
    CMWorkoutMets *_cmWorkoutMets;
    HDAssertionManager *_assertionManager;
    CMWorkout *_currentCMWorkout;
    CMWorkoutOverview *_cmWorkoutOverview;
    NSUUID *_currentSessionUUID;
    NSString *_appIdentifier;
}

@property (readonly, nonatomic) CMWorkoutManager *cmWorkoutManager;
@property (readonly, nonatomic) CMWorkout *currentWorkout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (void)averageMETsForWorkoutSessionUUID:(id)a0 completion:(id /* block */)a1;
- (void)pauseWorkoutForWorkoutSessionUUID:(id)a0;
- (void)resumeWorkoutForWorkoutSessionUUID:(id)a0;
- (void)setCurrentActivity:(id)a0 isManualTransition:(char)a1;
- (id)takeCMWorkoutAssertionForOwnerIdentifier:(id)a0 sessionUUID:(id)a1 workoutConfiguration:(id)a2 activityConfigurations:(id)a3 enableWorkoutChangeDetection:(char)a4;
- (void)unitTest_addCoreMotionAssertionObserver:(id)a0;
- (void)unitTest_setCMWorkoutManager:(id)a0;

@end
