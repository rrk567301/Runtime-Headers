@class NSArray, NSString, NSXPCConnection, NSPreviewTargetWindow;

@interface NSPreviewTargetController : NSObject <NSXPCListenerDelegate, NSVBXPCConnectionClient> {
    NSPreviewTargetWindow *_window;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _retainReleaseLock;
    long long _oldApplicationActivationPolicy;
    unsigned char _hostWantsKeyboardFocus : 1;
    unsigned char _invalid : 1;
    unsigned char _shouldReleaseWindow : 1;
    unsigned char _didOrderWindowIn : 1;
}

@property (class, retain) NSArray *commandEquivalentsToWithholdFromHost;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSXPCConnection *nsxpcConnection;
@property long long desiredWindowLevel;
@property struct { unsigned char keyness; unsigned char mainness; } desiredWindowState;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } hostViewFrame;
@property (readonly) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
+ (id)window;
+ (id)_nsxpcListenerEndpoint;
+ (BOOL)_windowMayOrder:(id)a0;
+ (BOOL)currentEventHasModifierFlags:(unsigned long long)a0 butNotModiferFlags:(unsigned long long)a1;
+ (id)nsxpcInterface;
+ (id)windowWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;

- (oneway void)release;
- (void)dealloc;
- (id)retain;
- (void).cxx_destruct;
- (void)invalidate;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)_afterSettingEventMaskOfWindow:(id)a0;
- (void)__vbSuperRelease;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (void)_connectionInvalidated;
- (id)_invalidateDueToExceptionDuringIncomingIPC:(id)a0;
- (void)_maintainKeyboardFocusTheft;
- (void)_maintainWindowLevel;
- (void)_populateWithDemoViews;
- (void)_realizeRequestedWindowState;
- (void)_sendEventMaskToHost:(unsigned int)a0;
- (unsigned int)_setEventMaskBasedOnWindow:(id)a0;
- (void)_window:(id)a0 stateChanged:(id)a1;
- (void)_withholdDemoKeyboardEvents;
- (void)actuateIconButton:(id)a0;
- (void)actuatePopoverAnotherButton:(id)a0;
- (void)actuatePopoverDismissButton:(id)a0;
- (id)asynchronousRemoteObjectProxy:(id)a0;
- (void)bootstrap:(struct { long long x0; struct { unsigned char x0; unsigned char x1; } x1; long long x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; BOOL x4; })a0 reply:(id /* block */)a1;
- (void)fauxSynchronousRemoteObjectProxy:(id)a0 block:(id /* block */)a1;
- (void)guaranteeSignal:(id)a0 after:(id /* block */)a1;
- (BOOL)handleKeyEquivalent:(id)a0;
- (void)hostReleasedKeyboardFocusThefts:(id)a0;
- (void)hostViewFrameInScreenCoordsDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hostWantsKeyboardFocus:(BOOL)a0;
- (void)hostWindowEvent:(unsigned long long)a0;
- (void)hostWindowEventMouse:(unsigned long long)a0;
- (void)hostWindowLevelDidChange:(long long)a0;
- (void)realizeRequestedWindowState:(long long)a0;
- (void)requestWindowState:(struct { unsigned char x0; unsigned char x1; })a0 identifier:(long long)a1;
- (void)restoreActivationPolicy;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;
- (void)sendCursor:(id)a0;

@end
