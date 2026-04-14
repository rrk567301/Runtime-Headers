@class _NSFullScreenCreateTileDropTargetWindow, NSTimer, _NSFullScreenSpace, NSWindow;

@interface _NSFullScreenCreateTileDropTargetController : NSObject {
    BOOL _isRegisteredForNotifications;
    BOOL _isWindowDragging;
    NSTimer *_delayStartWindowCanJoinTimer;
    BOOL _hasQueriedCanDragForCurrentDrag;
    BOOL _waitingForDockQueryResponse;
    BOOL _canJoinSpace;
    NSWindow *_trackedWindow;
    _NSFullScreenCreateTileDropTargetWindow *_leftDropTargetWindow;
    _NSFullScreenCreateTileDropTargetWindow *_rightDropTargetWindow;
    BOOL _requestedJoinSpace;
}

@property (nonatomic) _NSFullScreenSpace *space;

- (void)dealloc;
- (id)init;
- (void)windowWillStartDraggingNotification:(id)a0;
- (void)windowDidEndDraggingNotification:(id)a0;
- (void)reshapeContents;
- (BOOL)dragWouldPerformDrop;
- (void)displayChanged;
- (id)backgroundWindowIDs;
- (void)resetState;
- (void)_registerForNotifications:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_leftDropRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_leftCollapsedRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rightDropRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rightCollapsedRect;
- (void)_stopTrackingWindowDrag;
- (void)_dismissDropTargets;
- (void)updateWindowDuringDragNotification:(id)a0;
- (void)_cleanUpLeftDropTargetIfNeeded;
- (void)_cleanUpRightDropTargetIfNeeded;
- (void)_dismissLeftDropTarget;
- (void)_dismissRightDropTarget;
- (void)_revealLeftDropTarget;
- (void)_revealRightDropTarget;
- (void)_startTrackingWindowDrag:(id)a0;
- (void)_performDropIntoPosition:(unsigned long long)a0;
- (BOOL)_handleWindowDropIfNecessary;
- (BOOL)acceptDropForTearOffTabWindow:(id)a0;

@end
