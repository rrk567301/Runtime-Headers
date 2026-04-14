@class NSString, NSTrackingArea, NSXPCConnection;
@protocol NSPreviewHostViewControllerDelegate;

@interface NSPreviewHostViewController : NSViewController <NSVBXPCConnectionClient, NSPreviewHostViewControllerProtocol> {
    NSString *_previewIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _retainReleaseLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _invalidationLock;
    id _localEventMonitor;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _mostRecentlyKnownViewFrameInScreenCoords;
    unsigned char _invalidationProgress;
    unsigned char _invalidationKind;
    NSXPCConnection *_connection;
    NSTrackingArea *_trackingArea;
}

@property (weak) id<NSPreviewHostViewControllerDelegate> delegate;
@property (readonly) NSString *previewIdentifier;
@property (readonly) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nsxpcInterface;

- (oneway void)release;
- (void)dealloc;
- (id)retain;
- (void).cxx_destruct;
- (void)invalidate;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)setView:(id)a0;
- (void)loadView;
- (void)setEventMask:(unsigned int)a0;
- (void)windowDidMove:(id)a0;
- (void)__vbSuperRelease;
- (void)ifValidPerform:(id /* block */)a0;
- (id)previewHostView;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (void)_invalidate:(unsigned char)a0;
- (void)_invalidateBegin;
- (void)_invalidateComplete;
- (void)_invalidateDisconnect;
- (id)_invalidateDueToExceptionDuringIncomingIPC:(id)a0;
- (void)_invalidateLocalEventMonitor:(const char *)a0;
- (void)_invalidateTrackingArea;
- (void)_whileHoldingInvalidationLockPerform:(id /* block */)a0;
- (void)reportHostViewFrameToTargetViewController:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)requestConnectionToTargetApp:(id)a0 completionHandler:(id /* block */)a1;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;
- (void)targetDidStealKeyboardFocus:(id /* block */)a0;
- (void)targetInvalidating:(id /* block */)a0;
- (void)targetWillStealKeyboardFocus:(id /* block */)a0;
- (void)view:(id)a0 willMoveToWindow:(id)a1;
- (void)viewDidRenewGState:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewFrameInScreenCoords;
- (void)viewFrameMayHaveChanged;

@end
