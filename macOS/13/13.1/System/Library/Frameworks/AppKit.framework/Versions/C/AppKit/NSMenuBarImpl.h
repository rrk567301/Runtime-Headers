@class NSMenuItem;

@interface NSMenuBarImpl : NSCocoaMenuImpl {
    BOOL _isTrackingActive;
    BOOL _isContextUpdated;
    NSMenuItem *_appleMenu;
}

+ (void)setupForNoMenuBar;
+ (void)prepareForMenuBar;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidLayout;
- (void)mouseDown:(id)a0;
- (void)_menuDidRemoveAllItems:(id)a0;
- (void)_setFocused:(BOOL)a0 forMenuItemView:(id)a1;
- (BOOL)shouldDismissOnMouseUp;
- (id)createViewForMenuItemAtIndex:(long long)a0 withFilterQuery:(id)a1;
- (BOOL)isKey;
- (void)_prepareForPresentation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectionLayerFrameForNenuItem:(id)a0;
- (BOOL)highlightNextItemIfExists;
- (BOOL)highlightPreviousItemIfExists;
- (id)viewAtCurrentMouseLocation;
- (void)dismissSubmenuWithSender:(id)a0 animated:(BOOL)a1;
- (void)performDefaultAction;
- (void)performDefaultActionWithCompletion:(id /* block */)a0;
- (id)initWithMenu:(id)a0;
- (id)_itemViewForMenuItem:(id)a0 andFilterQuery:(id)a1;
- (BOOL)shouldPresentAsPullDown;
- (BOOL)shouldHighlightMenuItemView:(id)a0;
- (void)_selectionLayerDidChange;
- (BOOL)_shouldCancelViewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_viewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_insertAppleMenuIfNeededTo:(id)a0;
- (void)_createViewRepresentationIfNeeded;
- (id)_viewRepresentation;
- (void)_lightDarkViews:(id /* block */)a0;
- (void)removeManagedViewFromRepresentation:(id)a0;
- (id)_inactiveMenuBarView;
- (id)_newMenuBarStackView;
- (void)clearAsMainMenuBar;
- (void)setupMenuBar;
- (void)setAsMainMenuBar;

@end
