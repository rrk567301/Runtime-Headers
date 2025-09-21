@interface NSMenuBarTrackingSession : NSMenuTrackingSession {
    id _localEventMonitor;
    char _didBeginTrackingOnPreviousMouseDown;
}

@property char expectFirstMouseUp;

- (void)dealloc;
- (void).cxx_destruct;
- (char)_mouseMovedDraggedEventHandler:(id)a0;
- (char)_arrowDownKeyEventHandler:(long long)a0;
- (char)_arrowLeftKeyEventHandler;
- (char)_arrowLeftTabEventHandler;
- (char)_arrowRightKeyEventHandler;
- (char)_arrowRightTabEventHandler;
- (char)_arrowUpKeyEventHandler:(long long)a0;
- (char)_cancelPredictiveTrackingWithEvent:(id)a0;
- (char)_defaultActionEventHandler:(id)a0;
- (char)_handleMonitorEvent:(id)a0;
- (char)_highlightNextMenu;
- (char)_highlightPreviousMenu;
- (void)_initShortcut;
- (char)_mouseDownEventHandler:(id)a0;
- (char)_mouseUpEventHandler:(id)a0;
- (void)_setupMenuTracking;
- (char)_tabSelectsAdjacentMenu;
- (void)_tearDownMenuTracking;
- (char)_updateTrackedControllerForMenuBar;
- (char)allowsTracking;
- (void)beginTrackingSession;
- (void)handleHelpSymbolicHotKey:(id)a0;
- (void)handleMenuBarFocusSymbolicHotKey:(id)a0;
- (id)initWithImpl:(id)a0;
- (char)mouseExited:(id)a0;

@end
