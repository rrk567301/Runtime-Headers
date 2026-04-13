@interface UINSAppLifecycleStateTerminatingWaitingForBackgroundTasks : UINSAppLifecycleState

@property (nonatomic) BOOL isActiveState;

- (id)init;
- (void)stateEntry_InAction;
- (void)stateExit_InAction;
- (void)backgroundTasksCompleted_InAction;
- (void)appKitDidForeground_InAction;
- (BOOL)accelerateTerminationSchedule_InAction;
- (void)backgroundTasksTimedOut_InAction;
- (void)_checkForBackgroundTasksAfterDelay;

@end
