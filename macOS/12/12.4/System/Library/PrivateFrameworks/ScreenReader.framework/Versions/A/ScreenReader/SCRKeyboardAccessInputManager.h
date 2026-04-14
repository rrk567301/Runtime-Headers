@interface SCRKeyboardAccessInputManager : AXSSActionManager

@property (nonatomic) double _lastDefaultActionPressTime;
@property (nonatomic) double storedMaximumDelayUntilDoubleClick;
@property (nonatomic) BOOL shouldPerformDoubleTap;

- (void)moveUp;
- (void)moveDown;
- (void)willPerformStandardCommandWithIdentifier:(id)a0;
- (void)goToNextElementOfType:(unsigned long long)a0;
- (void)didPerformStandardCommandWithIdentifier:(id)a0;
- (void)goToPreviousElementOfType:(unsigned long long)a0;
- (void)moveLeft;
- (void)goToFirstElement;
- (void)moveRight;
- (void)goToLastElement;
- (void)moveInsideNext;
- (void)moveInsidePrevious;
- (void)performDefaultAction;
- (void)openContextualMenu;
- (void)showAccessibilityActions;
- (void)toggleControlCenter;
- (void)toggleDock;
- (void)performEscape;
- (void)toggleNotificationCenter;
- (void)toggleMenuBar;
- (void)togglePassthroughMode;
- (void)toggleHelp;
- (void)didSuppressCommand:(id)a0;

@end
