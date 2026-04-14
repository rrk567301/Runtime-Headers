@class PFCameraViewfinderSessionWatcher, NSString, PLXPCTransaction, PLDelayedActionTimer, NSObject;
@protocol OS_dispatch_queue;

@interface PLCameraCaptureTaskConstraintCoordinator : NSObject <PFCameraViewfinderSessionWatcherDelegate> {
    NSObject<OS_dispatch_queue> *_activationQueue;
    PLXPCTransaction *_transaction;
    BOOL _delayedDeactivationInProgress;
    PLDelayedActionTimer *_failsafeTimer;
    BOOL _failsafeTimerEnabled;
    PFCameraViewfinderSessionWatcher *_cameraWatcher;
    NSObject<OS_dispatch_queue> *_cameraWatcherQueue;
}

@property (readonly, nonatomic) long long role;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskConstraintStatus;
+ (BOOL)_shouldWatchCameraViewfinderForRole:(long long)a0;
+ (BOOL)_shouldUseFailsafeTimerForRole:(long long)a0;
+ (void)_stopConstrainingTasksWithCoordinator:(id)a0;
+ (void)_startConstrainingTasksWithCoordinator:(id)a0;
+ (void)_startConstrainingTasks;
+ (void)_stopConstrainingTasks;
+ (void)_disablePhotoStreams;
+ (void)_enablePhotoStreams;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cameraWatcherDidChangeState:(id)a0;
- (void)_startWatchingCameraActivity;
- (void)_activateCameraSessionTaskConstraints;
- (void)_deactivateCameraSessionTaskConstraintsAfterDelay:(double)a0;
- (void)_cancelSessionFailsafeTimer;
- (void)_startSessionFailsafeTimer;
- (void)_invalidateTransactionAndStopConstrainingTasksWithDelayedDeactivation:(BOOL)a0;
- (void)activateCameraSessionTaskConstraints;
- (void)deactivateCameraSessionTaskConstraints;
- (id)initWithTaskContstraintRole:(long long)a0;
- (id)sessionStatusDescription;
- (void)updateConstraintsForCameraRollViewVisible:(BOOL)a0;

@end
