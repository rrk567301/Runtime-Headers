@class NSView, NSVBAccessoryWindowBackstopResponder, NSRemoteView, NSEvent;

@interface NSVBAccessoryWindow : NSWindow {
    NSView *_view;
    NSVBAccessoryWindowBackstopResponder *_backstopResponder;
    NSEvent *_unhandledKeyEvent;
    unsigned char _willUpdateAccessibilityChildren : 1;
    unsigned long long _setFrameInProgress;
    unsigned long long _orderingInProgress;
    id /* block */ _restoreAfterResize;
}

@property unsigned char notificationsRegistered : 1;
@property (readonly, nonatomic) NSRemoteView *remoteView;

- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)invalidate;
- (id)view;
- (void)setView:(id)a0;
- (void)_accessoryViewFrameDidChange:(id)a0;
- (void)_hierarchyDidChangeInView:(id)a0;
- (BOOL)_keyViewLoopsMayCrossWindows;
- (id)_orderedDrawerAndWindowKeyLoopGroupingViews;
- (BOOL)_runningDocModal;
- (void)_setFrameCommon:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1 stashSize:(BOOL)a2;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityParentAttribute;
- (BOOL)canBecomeKeyWindow;
- (void)keyDown:(id)a0;
- (BOOL)makeFirstResponder:(id)a0;
- (id)nextResponder;
- (void)orderWindow:(long long)a0 relativeTo:(long long)a1;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)updateConstraintsIfNeeded;
- (void)clearUnhandledKeyEvent;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forRemoteView:(id)a1;
- (void)maintainAccessoryViewNotifications:(BOOL)a0;
- (id)unhandledKeyEvent;

@end
