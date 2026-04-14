@class BookmarksUndoController, NSString;
@protocol BrowserWindowDelegate;

@interface BrowserWindow : Window {
    NSString *_title;
    BOOL _logAfterNextRedisplay;
    id _mouseUpEventMonitor;
    BOOL _hasMoved;
    BOOL _isClosing;
}

@property (retain, nonatomic) BookmarksUndoController *bookmarksUndoController;
@property (nonatomic, getter=isLayerBacked) BOOL layerBacked;
@property (weak) id<BrowserWindowDelegate> delegate;
@property (readonly, nonatomic) BOOL isSendingEvent;
@property (nonatomic) BOOL ignoresOrderFront;
@property (nonatomic) BOOL shouldDeferSettingFirstResponderDueToScrubbing;

+ (id)frontmostWindow;

- (void)dealloc;
- (id)delegate;
- (void)close;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)title;
- (id)accessibilityChildren;
- (id)accessibilityTitle;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)enterFullScreenMode:(id)a0;
- (void)exitFullScreenMode:(id)a0;
- (void)setWindowController:(id)a0;
- (void)orderWindow:(long long)a0 relativeTo:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (void)keyDown:(id)a0;
- (void)_commonAwake;
- (void)sendEvent:(id)a0;
- (void)display;
- (void)orderFront:(id)a0;
- (BOOL)makeFirstResponder:(id)a0;
- (void)runToolbarCustomizationPalette:(id)a0;
- (id)contentViewController;
- (void)zoom:(id)a0;
- (void)displayIfNeeded;
- (void)endEditingFor:(id)a0;
- (void)__close;
- (void)updateTitle;
- (void)_startedMoving:(id)a0;
- (void)setUpBrowserWindow;
- (void)_handleLeftMouseUp:(id)a0;
- (void)updateCGSWindowTitle;
- (void)logFirstPageLoadedAfterNextRedisplay;
- (void)logFirstWindowDrawnAfterNextRedisplay;
- (void)logFirstPageLoaded;
- (void)tryToCloseNowThatWindowControllerIsReady;
- (id)currentTabViewItem;
- (void)setCurrentTabViewItem:(id)a0;
- (id)orderedTabViewItems;
- (void)insertInOrderedTabViewItems:(id)a0;
- (void)insertInOrderedTabViewItems:(id)a0 atIndex:(unsigned int)a1;
- (void)replaceInOrderedTabViewItems:(id)a0 atIndex:(unsigned int)a1;
- (void)removeFromOrderedTabViewItemsAtIndex:(unsigned int)a0;

@end
