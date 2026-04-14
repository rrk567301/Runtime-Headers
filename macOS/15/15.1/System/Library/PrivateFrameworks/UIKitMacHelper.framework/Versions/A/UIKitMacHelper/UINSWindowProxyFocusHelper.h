@class UINSWindowProxy;

@interface UINSWindowProxyFocusHelper : NSObject {
    struct { unsigned char windowVisible : 1; unsigned char didSendInitialNotifications : 1; unsigned char lastSentWindowVisible : 1; unsigned char lastKnownTrueKeyStatus : 1; unsigned char lastKnownAppearsKeyStatus : 1; unsigned char isUpdatingKeyWindowsAndResponders : 1; } _flags;
    UINSWindowProxy *_windowProxyIvar;
}

- (void).cxx_destruct;
- (void)applicationDidChangeActive:(id)a0;
- (void)windowDidBecomeKey:(id)a0;
- (void)windowDidChangeOcclusionState:(id)a0;
- (void)windowDidResignKey:(id)a0;
- (void)__notifyWindowVisibilityChanged;
- (void)inputViewResignedFirstResponder;
- (void)_notifyWindowVisibilityChanged;
- (id)_parentWindowOfResponder:(id)a0;
- (void)_postWindowNotificationName:(id)a0;
- (void)_updateAndNotifyIfAppearsKeyChanged;
- (void)_updateIfTrueAppKitKeyWindowChanged;
- (void)_updateIfUIKitKeyWindowOrFirstResponderChanged;
- (void)activeSpaceDidChange:(id)a0;
- (void)applicationDidChangeHidden:(id)a0;
- (id)initWithWindowProxy:(id)a0;
- (void)inputViewFinishedBecomeFirstResponder:(BOOL)a0;
- (void)inputViewStartedBecomeFirstResponder;
- (void)notifyWindowVisibilityChanged;
- (void)sendInitialWindowVisibilityChangedNotifications;
- (void)setupWindowObservations:(id)a0;
- (void)teardownWindowObservations:(id)a0;
- (void)uiWindowDidBecomeApplicationKey:(id)a0;
- (void)uiWindowFirstResponderDidChange:(id)a0;
- (void)updateAndNotifyIfAppearsKeyChanged;
- (void)updateIfTrueAppKitKeyWindowChanged;
- (void)updateIfUIKitKeyWindowOrFirstResponderChanged;
- (void)windowItselfBecameFirstResponder;

@end
