@class FBProcessExecutionContext, NSError, FBWatchdogTransitionContext, FBSSceneUpdate, NSSet, BKSAnimationFenceHandle, RBSProcessHandle, FBSceneUpdateContext, NSArray, BSProcessHandle, NSString, BSAnimationSettings;

@interface FBSSceneTransitionContext : FBSSettings <FBSSceneTransitionContext, NSCopying, NSMutableCopying, FBSMutableSettings>

@property (copy, nonatomic) BSAnimationSettings *animationSettings;
@property (retain, nonatomic) BKSAnimationFenceHandle *animationFence;
@property (copy, nonatomic) NSSet *actions;
@property (retain, nonatomic) BSProcessHandle *originatingProcess;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=isBarrier) BOOL barrier;
@property (retain, nonatomic) FBSSceneUpdate *parentUpdate;
@property (retain, nonatomic) FBProcessExecutionContext *executionContext;
@property (retain, nonatomic) RBSProcessHandle *clientProcessHandle;
@property (retain, nonatomic) FBSceneUpdateContext *updateContext;
@property (retain, nonatomic) FBWatchdogTransitionContext *watchdogTransitionContext;
@property (nonatomic) BOOL allowCPUThrottling;
@property (nonatomic, getter=isRunningBoardAssertionDisabled) BOOL runningBoardAssertionDisabled;
@property (copy, nonatomic) NSArray *updateCompletions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transitionContext;
+ (Class)_mutableClass;
+ (Class)subclassExtension;
+ (id)_settingsExtensionsForSceneExtension:(Class)a0;
+ (Class)_baseClass;
+ (Class)mutableSubclass;
+ (Class)immutableSubclass;

- (id)initWithSettings:(id)a0;
- (void)addAction:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addActions:(id)a0;
- (void)addUpdateCompletion:(id /* block */)a0;
- (id)captureCompletions;
- (void)removeAction:(id)a0;
- (void)removeActions:(id)a0;
- (id)transientLocalClientSettings;

@end
