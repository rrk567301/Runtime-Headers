@class NSMenuItem;

@interface NSMenuBarImpl : NSCocoaMenuImpl {
    BOOL _isTrackingActive;
    BOOL _isContextUpdated;
    NSMenuItem *_appleMenu;
}

+ (void)prepareForMenuBar;
+ (void)setupForNoMenuBar;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_createViewRepresentationIfNeeded;
- (id)_inactiveMenuBarView;
- (void)_insertAppleMenuIfNeededTo:(id)a0;
- (id)_itemViewForMenuItem:(id)a0 andFilterQuery:(id)a1;
- (void)_lightDarkViews:(id /* block */)a0;
- (void)_menuDidRemoveAllItems:(id)a0;
- (id)_newMenuBarStackView;
- (void)_prepareForPresentation;
- (void)_selectionLayerDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectionLayerFrameForNenuItem:(id)a0;
- (void)_setFocused:(BOOL)a0 forMenuItemView:(id)a1;
- (BOOL)_shouldCancelViewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_viewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_viewRepresentation;
- (void)clearAsMainMenuBar;
- (id)createViewForMenuItemAtIndex:(long long)a0 withFilterQuery:(id)a1;
- (void)dismissSubmenuWithSender:(id)a0 animated:(BOOL)a1;
- (BOOL)highlightNextItemIfExists;
- (BOOL)highlightPreviousItemIfExists;
- (id)initWithMenu:(id)a0;
- (BOOL)isKey;
- (void)mouseDown:(id)a0;
- (void)performDefaultAction;
- (void)performDefaultActionWithCompletion:(id /* block */)a0;
- (void)removeManagedViewFromRepresentation:(id)a0;
- (void)setAsMainMenuBar;
- (void)setupMenuBar;
- (BOOL)shouldDismissOnMouseUp;
- (BOOL)shouldHighlightMenuItemView:(id)a0;
- (BOOL)shouldPresentAsPullDown;
- (id)viewAtCurrentMouseLocation;
- (void)viewDidLayout;

@end
