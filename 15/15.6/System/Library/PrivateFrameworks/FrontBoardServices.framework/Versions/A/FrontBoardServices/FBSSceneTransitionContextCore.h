@class FBProcessExecutionContext, FBWatchdogTransitionContext, NSError, FBSSceneUpdate, NSSet, RBSProcessHandle, BKSAnimationFenceHandle, FBSceneUpdateContext, BSProcessHandle, BSAnimationSettings;

@interface FBSSceneTransitionContextCore : FBSCoreSettingsExtension <FBSSceneTransitionContext>

@property (copy, nonatomic) BSAnimationSettings *animationSettings;
@property (retain, nonatomic) BKSAnimationFenceHandle *animationFence;
@property (copy, nonatomic) NSSet *actions;
@property (retain, nonatomic) BSProcessHandle *originatingProcess;
@property (retain, nonatomic) FBSSceneUpdate *parentUpdate;
@property (retain, nonatomic) FBProcessExecutionContext *executionContext;
@property (retain, nonatomic) RBSProcessHandle *clientProcessHandle;
@property (retain, nonatomic) FBSceneUpdateContext *updateContext;
@property (retain, nonatomic) FBWatchdogTransitionContext *watchdogTransitionContext;
@property (nonatomic) char allowCPUThrottling;
@property (nonatomic, getter=isRunningBoardAssertionDisabled) char runningBoardAssertionDisabled;
@property (retain, nonatomic) NSError *error;

+ (id)protocol;

@end
