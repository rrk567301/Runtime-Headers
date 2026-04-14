@interface UINSAppLifecycleStateTerminatingPastPointOfNoReturn : UINSAppLifecycleState

@property (nonatomic) double stateEntryTime;

- (id)init;
- (void)stateEntry_InAction;
- (void)stateExit_InAction;
- (void)uiAppDidForeground_InAction;
- (void)backgroundTasksCompleted_InAction;
- (void)appKitDidForeground_InAction;
- (BOOL)accelerateTerminationSchedule_InAction;
- (void)uiAppWouldHaveExitedProcess_InAction;
- (void)backgroundTasksTimedOut_InAction;

@end
