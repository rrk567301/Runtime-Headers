@interface UINSAppLifecycleStateTerminatingHidingMacGUI : UINSAppLifecycleState

@property (nonatomic) char appDidHide;
@property (nonatomic) char appWentBackgroundOnly;
@property (nonatomic) char wantWindowStateReset;
@property (nonatomic) char didRequestDefaultWindowState;
@property (nonatomic) char reachedDefaultWindowState;
@property (nonatomic) char relaunchRequested;
@property (nonatomic) char isActiveState;

- (id)init;
- (void)_continueToNextStateIfAppropriate;
- (char)_shouldResetWindowStateDuringTermination;
- (char)accelerateTerminationSchedule_InAction;
- (void)allExpectedWindowsDidOpen_InAction;
- (void)appKitDidActivate_InAction;
- (void)appKitDidBackground_InAction;
- (void)appKitDidForeground_InAction;
- (void)appKitDidHide_InAction;
- (void)backgroundTasksCompleted_InAction;
- (void)defaultWindowStateReached_InAction;
- (void)lastWindowDidClose_InAction;
- (void)stateEntry_InAction;
- (void)stateExit_InAction;
- (void)uiAppDidForeground_InAction;

@end
