@interface UINSAppLifecycleStateTerminatingBackgroundingUIKit : UINSAppLifecycleState

- (id)init;
- (char)accelerateTerminationSchedule_InAction;
- (void)appKitDidForeground_InAction;
- (void)backgroundTasksCompleted_InAction;
- (void)didFinishForceBackgroundingScenes_InAction;
- (void)stateEntry_InAction;
- (void)stateExit_InAction;

@end
