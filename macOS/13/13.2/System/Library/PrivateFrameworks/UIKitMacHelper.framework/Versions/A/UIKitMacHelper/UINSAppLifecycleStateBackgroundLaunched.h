@interface UINSAppLifecycleStateBackgroundLaunched : UINSAppLifecycleState

- (id)init;
- (void)stateEntry_InAction;
- (void)stateExit_InAction;
- (void)appKitWillTerminate_InAction;
- (void)allExpectedWindowsDidOpen_InAction;
- (void)backgroundTasksCompleted_InAction;
- (void)appKitDidForeground_InAction;

@end
