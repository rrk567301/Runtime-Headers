@class NSString, NSMutableDictionary, NSMenuItemView;

@interface NSMenuBarImpl : NSCocoaMenuImpl {
    NSMutableDictionary *_displayIDToRepresentationView;
    NSMenuItemView *_additionalHighlightedMenuItemView;
    NSMenuItemView *_lastHighlightedMenuItemView;
    NSString *_customizedAppMenuTitle;
    BOOL _isTrackingActive;
    BOOL _isGroupingLayoutChanges;
    BOOL _hasPendingLayoutChanges;
    BOOL _isImmediateLayoutClean;
}

@property (readonly, copy) NSString *customizedAppMenuTitle;

+ (id)appleMenuItem;
+ (void)prepareForMenuBar;
+ (void)setupForNoMenuBar;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_isMenuBarReady;
- (id)highlightedView;
- (id)trackingSession;
- (long long)predominantAxis;
- (void)_dismissSecondarySubmenuAnimated:(BOOL)a0;
- (void)_finishSettingUpMenuBar;
- (void)_highlightSecondaryItemView:(id)a0 openingSubmenu:(BOOL)a1;
- (BOOL)_highlightVisibleItemAtIndex:(long long)a0 direction:(long long)a1 allowingDisabledItems:(BOOL)a2;
- (long long)_indexOfHighlightedViewInMenu;
- (void)_initTrackingSessionIfNeeded;
- (void)_insertAppleMenuIfNeededTo:(id)a0 withAppearance:(id)a1;
- (BOOL)_isTrackingAlreadyActive;
- (id)_itemViewForMenuItem:(id)a0 filterQuery:(id)a1 appearanceOverride:(id)a2;
- (id)_makeItemViewForMenuItem:(id)a0 filterQuery:(id)a1 appearanceOverride:(id)a2;
- (void)_menuDidChangeFontFrom:(id)a0 to:(id)a1;
- (void)_menuDidChangeTitleFrom:(id)a0 to:(id)a1;
- (void)_menuItem:(id)a0 atIndex:(unsigned long long)a1 didChangeFontFrom:(id)a2 to:(id)a3;
- (void)_menuItem:(id)a0 atIndex:(unsigned long long)a1 didChangeHiddenFrom:(BOOL)a2 to:(BOOL)a3;
- (void)_menuItem:(id)a0 atIndex:(unsigned long long)a1 didChangeImageFrom:(id)a2 to:(id)a3;
- (void)_menuItem:(id)a0 atIndex:(unsigned long long)a1 didChangeSubmenuFrom:(id)a2 to:(id)a3;
- (void)_menuItem:(id)a0 atIndex:(unsigned long long)a1 didChangeTitleFrom:(id)a2 to:(id)a3;
- (id)_newMenuBarStackViewWithAppearance:(id)a0;
- (BOOL)_openSubmenuFromView:(id)a0 highlightingFirstItem:(BOOL)a1 withDelay:(BOOL)a2;
- (BOOL)_prefersSyncRendering;
- (void)_prepareForPresentation;
- (BOOL)_removeAuxiliaryHighlightIfNeeded;
- (void)_removeHighlightForView:(id)a0;
- (void)_selectionLayerDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectionLayerFrameForView:(id)a0;
- (BOOL)_shouldTrackingBeActive;
- (id)_viewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_viewRepresentationForDisplayID:(unsigned int)a0;
- (id)activeRepresentationView;
- (id)backingViewForDisplayIDIfExists:(unsigned int)a0;
- (void)backingViewsForDisplayID:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (void)beginGroupingLayoutChanges;
- (void)clearAsMainMenuBar;
- (BOOL)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)dismissSubmenuAnimated:(BOOL)a0;
- (void)endGroupingLayoutChanges;
- (void)ensureRepresentationViewForDisplayID:(unsigned int)a0;
- (void)forEachRepresentationViewDo:(id /* block */)a0;
- (void)highlightItemAtIndex:(long long)a0;
- (BOOL)highlightNextVisibleItemIfExists;
- (BOOL)highlightPreviousVisibleItemIfExists;
- (void)highlightSecondaryItemAtIndex:(long long)a0 openingSubmenu:(BOOL)a1;
- (id)highlightedTitles;
- (id)initWithMenu:(id)a0;
- (BOOL)isEventTargetingCustomMenuItemView:(id)a0;
- (BOOL)isKey;
- (void)layoutAllMenuBarsImmediately:(BOOL)a0;
- (void)mouseDown:(id)a0;
- (void)performDefaultAction;
- (void)performDefaultAction:(id)a0 completion:(id /* block */)a1;
- (void)removeManagedViewFromRepresentation:(id)a0;
- (void)representationDidMoveFromDisplayID:(unsigned int)a0 toDisplayID:(unsigned int)a1;
- (void)setAsMainMenuBar;
- (void)setHighlightedView:(id)a0;
- (void)setupMenuBar;
- (BOOL)shouldPresentAsPullDown;
- (void)unhighlightItemIfNeeded;
- (void)updateFontInAllMenuBars;
- (id)viewAtCurrentMouseLocation;
- (id)viewAtCurrentMouseLocation:(id)a0;
- (void)viewDidLayout;

@end
