@class NSToolbarItem, NSString, NSTitlebarAccessoryViewController, UXViewController, UXToolbar;

@interface UXWindowController : NSWindowController <NSToolbarDelegate, _UXAccessoryBarContainer, NSWindowDelegate> {
    NSTitlebarAccessoryViewController *_titlebarAccessoryViewController;
    UXToolbar *_currentAccessoryToolbar;
}

@property (weak) NSToolbarItem *navigationBarToolbarItem;
@property (readonly, nonatomic) NSTitlebarAccessoryViewController *titlebarAccessoryViewController;
@property (retain, nonatomic) UXViewController *rootViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double _accessoryBarHeight;

+ (id)defaultWindow;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setWindow:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })window:(id)a0 willPositionSheet:(id)a1 usingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)windowWillEnterFullScreen:(id)a0;
- (void)windowWillExitFullScreen:(id)a0;
- (id)initWithWindow:(id)a0;
- (id)toolbar:(id)a0 itemForItemIdentifier:(id)a1 willBeInsertedIntoToolbar:(BOOL)a2;
- (id)toolbarDefaultItemIdentifiers:(id)a0;
- (id)toolbarAllowedItemIdentifiers:(id)a0;
- (id)initWithRootViewController:(id)a0;
- (void)_popoverWillShow:(id)a0;
- (void)_setAccessoryBarHidden:(BOOL)a0;
- (void)windowDidBecomeFirstResponder:(id)a0;
- (void)windowDidRecalculateKeyViewLoop:(id)a0;
- (void)windowWillRecalculateKeyViewLoop:(id)a0;
- (void)teardownViewControllerHierarchy;
- (void)_tearDownViewControllerHierarchyForViewController:(id)a0;
- (id)rootNavigationController;
- (void)_setupNavigationBarToolbarItem;
- (BOOL)_shouldUseToolbarViewForCentering;
- (void)_setupAccessoryBar;
- (void)_updateToolbarItem;
- (void)_updateAccessoryBar;
- (void)_updateFirstResponder;

@end
