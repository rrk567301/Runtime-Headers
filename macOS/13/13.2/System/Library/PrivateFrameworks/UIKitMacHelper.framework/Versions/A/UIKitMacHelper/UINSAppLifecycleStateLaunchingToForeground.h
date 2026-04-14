@interface UINSAppLifecycleStateLaunchingToForeground : UINSAppLifecycleState

@property (nonatomic) BOOL encounteredUIKitAppForegrounding;
@property (nonatomic) BOOL encounteredSceneStateRestorationCompletion;

- (id)init;
- (void)stateEntry_InAction;
- (void)stateExit_InAction;
- (void)appKitDidActivate_InAction;
- (void)uiAppDidForeground_InAction;
- (void)allExpectedWindowsDidOpen_InAction;
- (void)backgroundTasksCompleted_InAction;
- (BOOL)accelerateTerminationSchedule_InAction;
- (void)didFinishForceBackgroundingScenes_InAction;
- (void)didFinishRestoringSceneForegroundState_InAction;
- (void)_moveToRunningStateIfReady;

@end
