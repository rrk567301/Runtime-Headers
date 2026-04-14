@class NSView, NSString, NSTimer, SafariWebBookmark, NSAnimation, MorphingDragImageView, NSImage, NSWindow, _TearOffTabWindow;
@protocol TabDraggingDestination, TabBarViewItem, MorphingDragImageControllerDragSource;

@interface MorphingDragImageController : NSObject <NSTearOffTabWindowDelegate> {
    NSImage *_tabDragImage;
    NSImage *_windowDragImage;
    struct CGSize { double width; double height; } _maxImageSize;
    struct CGSize { double width; double height; } _originalViewOffset;
    id<TabBarViewItem> _dragItem;
    id<MorphingDragImageControllerDragSource> _dragSource;
    NSView *_sourceView;
    MorphingDragImageView *_dragImageView;
    NSAnimation *_slideBackAnimation;
    struct CGPoint { double x; double y; } _slideBackStartTranslation;
    struct CGPoint { double x; double y; } _slideBackEndTranslation;
    BOOL _dragDone;
    NSWindow *_windowUnderMouse;
    id<TabDraggingDestination> _targetUnderMouse;
    NSTimer *_springTargetWindowToFrontTimer;
    NSTimer *_periodicEventTimer;
    BOOL _targetAcceptsDrag;
    BOOL _mouseOverSystemWindow;
    BOOL _canDetachTab;
    BOOL _sourceRespondsToShouldDetachDraggedTab;
    BOOL _isTabDetachedFromSource;
    NSImage *_pinnedTabDragImage;
    SafariWebBookmark *_bookmark;
    NSImage *_bookmarkImage;
}

@property (readonly, nonatomic) _TearOffTabWindow *dragWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)dragTabWithDraggingItem:(id)a0 tabButtonImage:(id)a1 pinnedTabButtonImage:(id)a2 windowImage:(id)a3 fromView:(id)a4 at:(struct CGPoint { double x0; double x1; })a5 source:(id)a6;
+ (void)dragTabWithDraggingItem:(id)a0 tabButtonImage:(id)a1 pinnedTabButtonImage:(id)a2 tabBookmarkImage:(id)a3 bookmark:(id)a4 windowImage:(id)a5 fromView:(id)a6 at:(struct CGPoint { double x0; double x1; })a7 source:(id)a8;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_prepareForDragWithImage:(id)a0;
- (void)_runDrag;
- (void)_dragComplete;
- (void)_applicationDidResignActive;
- (void)_handleMouseDragged;
- (void)_handleEvent:(id)a0;
- (void)_stopPeriodicEventTimer;
- (void)_handleFlagsChanged;
- (void)_handleMouseUp;
- (void)_findWindowUnderMouse:(id *)a0 level:(int *)a1 viewUnderMouse:(id *)a2;
- (id)_dragInfoForTargetUnderMouseInWindow:(id)a0;
- (void)_setWindowUnderMouse:(id)a0;
- (void)_setTargetUnderMouse:(id)a0;
- (void)_updateDragImageForCurrentDragState;
- (void)_sendMovedToPointOnScreenToDragSource;
- (id)_dragInfoForTargetUnderMouse;
- (id)_dragInfoForNoTargetUnderMouse;
- (void)_draggingDidExitTargetWindow;
- (void)_draggingDidEnterTargetWindow;
- (BOOL)_canPerformTabDrag;
- (BOOL)_didAcceptDrop;
- (BOOL)_dropTabOnScreenIfPossible;
- (void)_beginSlideBackAnimation;
- (void)_firePeriodicEvent:(id)a0;
- (void)_performSprintToFront:(id)a0;
- (void)_startPeriodicEventTimerIfNeeded;
- (void)_morphToDragImage:(id)a0;
- (id)detachWindowForTearOffTabWindow:(id)a0;
- (BOOL)_dropOpensNewWindow;
- (void)_dragTabWithDraggingItem:(id)a0 tabButtonImage:(id)a1 pinnedTabButtonImage:(id)a2 tabBookmarkImage:(id)a3 bookmark:(id)a4 windowImage:(id)a5 fromView:(id)a6 at:(struct CGPoint { double x0; double x1; })a7 source:(id)a8;
- (void)_checkDetachTabFromSource;
- (void)animateSlideBack;
- (void)_setupDraggingInfo:(id)a0;

@end
