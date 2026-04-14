@class BookmarksUndoController, NSString, WindowControlShadowView;
@protocol BrowserWindowDelegate;

@interface BrowserWindow : Window {
    NSString *_title;
    BOOL _logAfterNextRedisplay;
    WindowControlShadowView *_windowControlShadowView;
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
@property (nonatomic) BOOL deferringLoadForSelectedTab;

+ (id)frontmostWindow;

- (void)replaceInOrderedTabViewItems:(id)a0 atIndex:(unsigned int)a1;
- (id)accessibilityTitle;
- (id)orderedTabViewItems;
- (void)becomeKeyWindow;
- (void)sendEvent:(id)a0;
- (void)removeFromOrderedTabViewItemsAtIndex:(unsigned int)a0;
- (id)delegate;
- (void)close;
- (void)setTitle:(id)a0;
- (void)setDelegate:(id)a0;
- (void)displayIfNeeded;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)insertInOrderedTabViewItems:(id)a0;
- (void)dealloc;
- (void)display;
- (id)title;
- (void)insertInOrderedTabViewItems:(id)a0 atIndex:(unsigned int)a1;
- (void).cxx_destruct;
- (void)keyDown:(id)a0;
- (void)__close;
- (void)runToolbarCustomizationPalette:(id)a0;
- (void)_commonAwake;
- (id)accessibilityChildren;
- (long long)animationBehavior;
- (void)awakeFromNib;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (void)endEditingFor:(id)a0;
- (void)enterFullScreenMode:(id)a0;
- (void)exitFullScreenMode:(id)a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (BOOL)makeFirstResponder:(id)a0;
- (void)makeKeyWindow;
- (void)orderFront:(id)a0;
- (void)orderWindow:(long long)a0 relativeTo:(long long)a1;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)setWindowController:(id)a0;
- (void)zoom:(id)a0;
- (void)updateTitle;
- (void)_startedMoving:(id)a0;
- (void)_handleLeftMouseUp:(id)a0;
- (void)_matchFrameWithOverrideRect;
- (BOOL)_shouldShowControlViewShadowsForAppearance:(id)a0;
- (id)currentTabViewItem;
- (void)logFirstPageLoaded;
- (void)logFirstPageLoadedAfterNextRedisplay;
- (void)logFirstWindowDrawnAfterNextRedisplay;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })overrideFrameToStaggerFrom;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })overrideWindowRect;
- (void)setCurrentTabViewItem:(id)a0;
- (void)setUpBrowserWindow;
- (void)tryToCloseNowThatWindowControllerIsReady;
- (void)updateCGSWindowTitle;
- (void)updateWindowControlAppearance:(id)a0;

@end
