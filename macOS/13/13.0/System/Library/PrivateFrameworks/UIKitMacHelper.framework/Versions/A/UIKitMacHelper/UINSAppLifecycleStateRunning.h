@interface UINSAppLifecycleStateRunning : UINSAppLifecycleState

- (id)init;
- (void)stateEntry_InAction;
- (void)stateExit_InAction;
- (void)appKitWillTerminate_InAction;
- (void)appKitDidActivate_InAction;
- (void)appKitDidHide_InAction;
- (void)uiAppDidForeground_InAction;
- (void)allExpectedWindowsDidOpen_InAction;
- (void)lastWindowDidClose_InAction;
- (void)backgroundTasksCompleted_InAction;

@end
