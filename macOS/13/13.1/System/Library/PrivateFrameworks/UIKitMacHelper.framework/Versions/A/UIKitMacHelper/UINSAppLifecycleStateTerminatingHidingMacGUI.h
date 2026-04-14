@interface UINSAppLifecycleStateTerminatingHidingMacGUI : UINSAppLifecycleState

@property (nonatomic) BOOL appDidHide;
@property (nonatomic) BOOL appWentBackgroundOnly;
@property (nonatomic) BOOL wantWindowStateReset;
@property (nonatomic) BOOL didRequestDefaultWindowState;
@property (nonatomic) BOOL reachedDefaultWindowState;
@property (nonatomic) BOOL relaunchRequested;

- (id)init;
- (void)stateEntry_InAction;
- (void)stateExit_InAction;
- (void)appKitDidActivate_InAction;
- (void)appKitDidHide_InAction;
- (void)appKitDidBackground_InAction;
- (void)uiAppDidForeground_InAction;
- (void)allExpectedWindowsDidOpen_InAction;
- (void)lastWindowDidClose_InAction;
- (void)backgroundTasksCompleted_InAction;
- (void)appKitDidForeground_InAction;
- (BOOL)accelerateTerminationSchedule_InAction;
- (void)defaultWindowStateReached_InAction;
- (BOOL)_checkfixPrecludesWindowReset;
- (BOOL)_shouldResetWindowStateDuringTermination;
- (void)_continueToNextStateIfAppropriate;

@end
