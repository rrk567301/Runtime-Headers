@interface UINSAppLifecycleStateTerminatingWaitingForBackgroundTasks : UINSAppLifecycleState

@property (nonatomic) char isActiveState;

- (id)init;
- (void)_checkForBackgroundTasksAfterDelay;
- (char)accelerateTerminationSchedule_InAction;
- (void)appKitDidActivate_InAction;
- (void)appKitDidForeground_InAction;
- (void)backgroundTasksCompleted_InAction;
- (void)backgroundTasksTimedOut_InAction;
- (void)stateEntry_InAction;
- (void)stateExit_InAction;

@end
