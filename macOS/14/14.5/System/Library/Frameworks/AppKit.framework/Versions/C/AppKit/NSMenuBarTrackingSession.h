@interface NSMenuBarTrackingSession : NSMenuTrackingSession {
    id _localEventMonitor;
    BOOL _didBeginTrackingOnPreviousMouseDown;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_mouseMovedDraggedEventHandler:(id)a0;
- (BOOL)_arrowDownKeyEventHandler:(long long)a0;
- (BOOL)_arrowLeftKeyEventHandler;
- (BOOL)_arrowLeftTabEventHandler;
- (BOOL)_arrowRightKeyEventHandler;
- (BOOL)_arrowRightTabEventHandler;
- (BOOL)_arrowUpKeyEventHandler:(long long)a0;
- (BOOL)_cancelPredictiveTrackingWithEvent:(id)a0;
- (BOOL)_defaultActionEventHandler:(id)a0;
- (BOOL)_highlightNextMenu;
- (BOOL)_highlightPreviousMenu;
- (void)_initShortcut;
- (BOOL)_mouseDownEventHandler:(id)a0;
- (BOOL)_mouseUpEventHandler:(id)a0;
- (void)_setupMenuTracking;
- (BOOL)_tabSelectsAdjacentMenu;
- (void)_tearDownMenuTracking;
- (BOOL)_updateTrackedControllerForMenuBar;
- (void)beginTrackingSession;
- (BOOL)handleEvent:(id)a0;
- (void)handleHelpSymbolicHotKey:(struct OpaqueEventRef { } *)a0;
- (void)handleMenuBarFocusSymbolicHotKey:(struct OpaqueEventRef { } *)a0;
- (id)initWithImpl:(id)a0;
- (BOOL)mouseExited:(id)a0;
- (void)startMonitoringEventsInMode:(long long)a0;

@end
