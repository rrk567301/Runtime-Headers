@class NSString, NSPreviewTargetWindow, NSXPCConnection;
@protocol NSISEngineDelegate;

@interface NSPreviewTargetViewController : NSViewController <NSVBXPCConnectionClient> {
    NSString *_previewIdentifier;
    NSPreviewTargetWindow *_window;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _retainReleaseLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _invalidationLock;
    long long _oldApplicationActivationPolicy;
    unsigned char _shouldRestoreActivationPolicy : 1;
    unsigned char _invalid : 1;
}

@property (weak) NSXPCConnection *nsxpcConnection;
@property (weak) id<NSISEngineDelegate> layoutEngineDelegate;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } hostViewFrame;
@property (readonly) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
+ (id)nsxpcInterface;
+ (id)nsxpcListenerEndpoint;
+ (id)previewTargetViewControllerForIdentifier:(id)a0;

- (oneway void)release;
- (void)dealloc;
- (id)retain;
- (void).cxx_destruct;
- (void)invalidate;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)setView:(id)a0;
- (void)loadView;
- (void)windowDidBecomeKey:(id)a0;
- (void)_afterSettingEventMaskOfWindow:(id)a0;
- (void)__vbSuperRelease;
- (void)ifValidPerform:(id /* block */)a0;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (void)_connectionInvalidated;
- (id)_invalidateDueToExceptionDuringIncomingIPC:(id)a0;
- (void)_sendEventMaskToHost:(unsigned int)a0;
- (unsigned int)_setEventMaskBasedOnWindow:(id)a0;
- (void)_whileHoldingInvalidationLockPerform:(id /* block */)a0;
- (id)asynchronousRemoteObjectProxy:(id)a0;
- (void)bootstrap:(struct { id x0; id x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; })a0 reply:(id /* block */)a1;
- (void)fauxSynchronousRemoteObjectProxy:(id)a0 block:(id /* block */)a1;
- (void)guaranteeSignal:(id)a0 after:(id /* block */)a1;
- (void)hostViewFrameInScreenCoordsDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)previewIdentifier;
- (id)previewTargetView;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;
- (void)windowWillBecomeKey:(id)a0;

@end
