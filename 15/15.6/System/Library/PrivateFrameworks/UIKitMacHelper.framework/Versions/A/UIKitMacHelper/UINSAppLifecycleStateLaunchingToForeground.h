@interface UINSAppLifecycleStateLaunchingToForeground : UINSAppLifecycleState

@property (nonatomic) char encounteredUIKitAppForegrounding;
@property (nonatomic) char encounteredSceneStateRestorationCompletion;

- (id)init;
- (void)_moveToRunningStateIfReady;
- (char)accelerateTerminationSchedule_InAction;
- (void)allExpectedWindowsDidOpen_InAction;
- (void)appKitDidActivate_InAction;
- (void)backgroundTasksCompleted_InAction;
- (void)didFinishForceBackgroundingScenes_InAction;
- (void)didFinishRestoringSceneForegroundState_InAction;
- (void)stateEntry_InAction;
- (void)stateExit_InAction;
- (void)uiAppDidForeground_InAction;

@end
