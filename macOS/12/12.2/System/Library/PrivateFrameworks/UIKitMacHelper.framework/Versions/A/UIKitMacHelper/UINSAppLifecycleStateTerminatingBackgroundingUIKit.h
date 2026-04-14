@interface UINSAppLifecycleStateTerminatingBackgroundingUIKit : UINSAppLifecycleState

- (id)init;
- (void)stateEntry_InAction;
- (void)stateExit_InAction;
- (void)backgroundTasksCompleted_InAction;
- (void)appKitDidForeground_InAction;
- (BOOL)accelerateTerminationSchedule_InAction;
- (void)didFinishForceBackgroundingScenes_InAction;

@end
