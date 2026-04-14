@interface SCRKeyboardAccessInputManager : AXSSActionManager

@property (nonatomic) double _lastDefaultActionPressTime;
@property (nonatomic) double storedMaximumDelayUntilDoubleClick;
@property (nonatomic) BOOL shouldPerformDoubleTap;

- (void)performDefaultAction;
- (void)moveUp;
- (void)moveDown;
- (void)willPerformStandardCommandWithIdentifier:(id)a0;
- (void)didPerformStandardCommandWithIdentifier:(id)a0;
- (void)didSuppressCommand:(id)a0;
- (void)goToNextElementOfType:(unsigned long long)a0;
- (void)goToPreviousElementOfType:(unsigned long long)a0;
- (void)goToFirstElement;
- (void)goToLastElement;
- (void)goToNextSection;
- (void)goToPreviousSection;
- (void)moveLeft;
- (void)moveRight;
- (void)moveInsideNext;
- (void)moveInsidePrevious;
- (void)toggleHelp;
- (void)openContextualMenu;
- (void)toggleMenuBar;
- (void)toggleNotificationCenter;
- (void)toggleControlCenter;
- (void)toggleDock;
- (void)showAccessibilityActions;
- (void)performEscape;
- (void)activateTypeahead;
- (void)togglePassthroughMode;
- (void)toggleWindowList;
- (void)toggleApplicationList;
- (void)nextCheckbox;
- (void)previousCheckbox;
- (void)nextTable;
- (void)previousTable;
- (void)nextLink;
- (void)previousLink;
- (void)nextTextField;
- (void)previousTextField;
- (void)movePointerToFocus;

@end
