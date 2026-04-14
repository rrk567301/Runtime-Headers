@class PFCameraViewfinderSessionWatcher, NSString, PLXPCTransaction, PLDelayedActionTimer, NSObject;
@protocol OS_dispatch_queue;

@interface PLCameraCaptureTaskConstraintCoordinator : NSObject <PFCameraViewfinderSessionWatcherDelegate> {
    NSString *_name;
    NSString *_creationDateString;
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

+ (BOOL)_shouldUseFailsafeTimerForRole:(long long)a0;
+ (id)taskConstraintStatus;
+ (BOOL)_shouldWatchCameraViewfinderForRole:(long long)a0;

- (void)activateCameraSessionTaskConstraints;
- (void)cameraWatcherDidChangeState:(id)a0;
- (void)invalidate;
- (void)_invalidateTransactionAndStopConstrainingTasksWithDelayedDeactivation:(BOOL)a0;
- (void)_activateCameraSessionTaskConstraints;
- (void)deactivateCameraSessionTaskConstraints;
- (void)_startSessionFailsafeTimer;
- (void)_startWatchingCameraActivity;
- (void)_deactivateCameraSessionTaskConstraintsAfterDelay:(double)a0;
- (id)sessionStatusDescription;
- (void)_cancelSessionFailsafeTimer;
- (id)initWithTaskContstraintRole:(long long)a0 name:(id)a1;
- (void).cxx_destruct;

@end
