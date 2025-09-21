@class _NSFullScreenModalCollapsedTabWindow, NSString, NSTimer, NSWindow, _NSFullScreenModalDimmingWindow, _NSFullScreenSpace, NSWindowStackController;

@interface _NSFullScreenModalStackController : NSObject <_NSFullScreenModalDimmingWindowDelegate> {
    _NSFullScreenModalDimmingWindow *_dimmingWindow;
    char _isFrontWindowOrderedIn;
    NSTimer *_deferredDragStartTimer;
    id _showDragEffectEventMonitor;
    char _isFrontWindowDragging;
    char _dragShouldSnapBackForDropTarget;
    char _dragShouldSnapBackForMinimize;
    char _hasDragProhibitChangePoint;
    struct CGPoint { double x; double y; } _dragSnapBackForMinimizeProhibitChangePosition;
    char _dragShouldSnapBack;
    NSWindow *_frontWindow;
    char _isRegisteredForNotifications;
    char _invalid;
    NSString *_beforeStackedSavedWindowFrameString;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _windowDragStartFrame;
}

@property (nonatomic) _NSFullScreenSpace *space;
@property (readonly, nonatomic) NSWindowStackController *windowStackController;
@property (readonly, nonatomic) _NSFullScreenModalCollapsedTabWindow *collapsedTabWindow;
@property (readonly, nonatomic) char isPresentedModally;
@property (readonly, nonatomic) char isDragActive;
@property (nonatomic) char disableBeginPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)didDoTabbedOrderAboveForWindow:(id)a0;
- (void)tearDownAnyModalStateAnimating:(char)a0;
- (void)reshapeContents;
- (void)windowDidBecomeKeyNotification:(id)a0;
- (id)_activeWindow;
- (void)_actuallyBeginDraggingFrontWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustedSnapshotWindowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 basedOnImage:(struct CGImage { } *)a1;
- (void)_dragMoved;
- (void)_setFrontWindow:(id)a0;
- (void)_showModalWindowDragEffect;
- (void)applyWindowStateForModalStackGroupToWindow:(id)a0;
- (id)backgroundWindowIDs;
- (id)beforeStackedSavedWindowFrameString;
- (void)beginModalPresentationWithCompletionHandler:(id /* block */)a0 forCloseSpace:(char)a1;
- (void)beginModalPresentationWithCompletionHandler:(id /* block */)a0 forCloseSpace:(char)a1 waitUntilDone:(char)a2;
- (void)clearWindowStateForModalStackGroupToWindow:(id)a0;
- (char)createModalStackForWindow:(id)a0;
- (void)didDoTabbedOrderOutForWindow:(id)a0;
- (void)displayChanged;
- (char)dragShouldSnapBackForMinimize;
- (void)draggedWindowMovedToSpace:(unsigned long long)a0 repositionUnderMouseIfDetached:(char)a1;
- (void)endModalPresentationWithCompletionHandler:(id /* block */)a0;
- (void)endTilePresentation;
- (double)modalWindowWidth;
- (void)nonAnimatedBeginModalPresentationForTileJoin;
- (void)registerForNotifications:(char)a0;
- (void)reshapeFrontWindow;
- (id)selectedWindow;
- (void)tabBarWillSelectTab;
- (void)tearDownAnyModalState;
- (void)updateDraggingDimWindow;
- (void)windowDidEndDraggingNotification:(id)a0;
- (void)windowStackTabGroupDidChangeForWindow:(id)a0;
- (void)windowWillStartDraggingNotification:(id)a0;

@end
