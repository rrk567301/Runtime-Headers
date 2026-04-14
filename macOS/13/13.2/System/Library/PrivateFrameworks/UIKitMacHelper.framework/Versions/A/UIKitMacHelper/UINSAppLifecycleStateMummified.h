@interface UINSAppLifecycleStateMummified : UINSAppLifecycleState

- (id)init;
- (void)stateEntry_InAction;
- (void)stateExit_InAction;
- (void)appKitWillTerminate_InAction;
- (void)appKitDidHide_InAction;
- (void)backgroundTasksCompleted_InAction;
- (void)appKitDidForeground_InAction;
- (void)didFinishForceBackgroundingScenes_InAction;

@end
