@class _NSFullScreenCreateTileDropTargetWindow, NSTimer, _NSFullScreenSpace, NSWindow;

@interface _NSFullScreenCreateTileDropTargetController : NSObject {
    char _isRegisteredForNotifications;
    char _isWindowDragging;
    NSTimer *_delayStartWindowCanJoinTimer;
    char _hasQueriedCanDragForCurrentDrag;
    char _waitingForDockQueryResponse;
    char _canJoinSpace;
    NSWindow *_trackedWindow;
    _NSFullScreenCreateTileDropTargetWindow *_leftDropTargetWindow;
    _NSFullScreenCreateTileDropTargetWindow *_rightDropTargetWindow;
    char _requestedJoinSpace;
}

@property (nonatomic) _NSFullScreenSpace *space;

- (void)dealloc;
- (id)init;
- (void)_cleanUpRightDropTargetIfNeeded;
- (void)reshapeContents;
- (void)_cleanUpLeftDropTargetIfNeeded;
- (void)_dismissDropTargets;
- (void)_dismissLeftDropTarget;
- (void)_dismissRightDropTarget;
- (char)_handleWindowDropIfNecessary;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_leftCollapsedRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_leftDropRect;
- (void)_performDropIntoPosition:(unsigned long long)a0;
- (void)_registerForNotifications:(char)a0;
- (void)_revealLeftDropTarget;
- (void)_revealRightDropTarget;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rightCollapsedRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rightDropRect;
- (void)_startTrackingWindowDrag:(id)a0;
- (void)_stopTrackingWindowDrag;
- (char)acceptDropForTearOffTabWindow:(id)a0;
- (id)backgroundWindowIDs;
- (void)displayChanged;
- (char)dragWouldPerformDrop;
- (void)resetState;
- (void)updateWindowDuringDragNotification:(id)a0;
- (void)windowDidEndDraggingNotification:(id)a0;
- (void)windowWillStartDraggingNotification:(id)a0;

@end
