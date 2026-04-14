@class NSString, VisualTabPickerViewController, FlippedView, VisualTabPickerLayoutEngine, NSMutableArray, NSMapTable;
@protocol VisualTabPickerGridViewDataSource, VisualTabPickerGridViewDelegate;

@interface VisualTabPickerGridView : NSView <VisualTabPickerTileContainerDataSource, VisualTabPickerTileContainerDelegate, VisualTabPickerLayoutEngineInputProvider> {
    FlippedView *_gridContainerView;
    NSMutableArray *_tileContainerViews;
    NSMutableArray *_tabViewItems;
    VisualTabPickerLayoutEngine *_layoutEngine;
    BOOL _didStartEntryAnimation;
    NSMapTable *_webViewThumbnailViewReuseDictionary;
}

@property (weak, nonatomic) id<VisualTabPickerGridViewDataSource> dataSource;
@property (weak, nonatomic) id<VisualTabPickerGridViewDelegate> delegate;
@property (weak, nonatomic) VisualTabPickerViewController *visualTabPickerViewController;
@property (readonly, nonatomic) BOOL gridAnimationInProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentifier;
- (void)reloadGridView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfSelectedTile;
- (void)startGridAnimation:(long long)a0 completionHandler:(id /* block */)a1;
- (void)updateGridViewLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 visualTabPickerViewController:(id)a1;
- (double)gridViewContentHeight;
- (void)_reloadGridView;
- (void)reloadTabViewItem:(id)a0;
- (void)removeTabViewItem:(id)a0;
- (void)addTabViewItem:(id)a0 atIndex:(unsigned long long)a1;
- (void)hideCloseButtons;
- (void)_setUpGridContainer;
- (void)_resetGridView;
- (void)_setUpContainerViews;
- (unsigned long long)_indexForContainerView:(id)a0;
- (void)_startGridAnimation:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_willStartExitAnimation;
- (void)_unhideAllTiles;
- (unsigned long long)_indexOfContainerForTabViewItem:(id)a0;
- (unsigned long long)_numberOfTilesInGridView;
- (void)_hideTilesNotVisibleDuringExitAnimation;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfVisibleTiles;
- (BOOL)_shouldDisplayNewTabContainer;
- (void)_computeArrayOfTabItemsPerContainer;
- (void)_addCreateNewTabContainerView;
- (unsigned long long)numberOfTilesForLayoutEngine:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForLayoutEngine:(id)a0;
- (double)tileHeightToWidthRatioForLayoutEngine:(id)a0;
- (BOOL)layoutEngineShouldLayOutRightToLeft:(id)a0;
- (void)_updateVisibilityOfTileContainerViews;
- (void)reloadGridViewClearingReuseCache:(BOOL)a0;
- (void)_addContainerViewAtIndex:(unsigned long long)a0 isVisible:(BOOL)a1 isFocused:(BOOL)a2;
- (id)_containerViewForTabItem:(id)a0;
- (id)_tabViewItemForContainerView:(id)a0;
- (long long)_muteButtonStateForMutableMediaState:(unsigned long long)a0 audioMuted:(BOOL)a1 mediaCaptureMuted:(BOOL)a2;
- (id)titleForVisualTabPickerTileContainerView:(id)a0;
- (id)tileViewForVisualTabPickerTileContainerView:(id)a0 lowResolution:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleBoundsForVisualTabPickerTileContainerView:(id)a0;
- (BOOL)visualTabPickerTileContainerViewShouldShowMuteButton:(id)a0;
- (long long)muteButtonStateForVisualTabPickerTileContainerView:(id)a0;
- (id)siteIconForVisualTabPickerTileContainerView:(id)a0;
- (BOOL)visualTabPickerTileContainerViewCanClose:(id)a0;
- (void)visualTabPickerTileContainerViewDidClose:(id)a0;
- (void)visualTabPickerTileContainerViewDidSelect:(id)a0;
- (void)visualTabPickerTileContainerViewDidRequestNewTab:(id)a0;
- (void)visualTabPickerTileContainerViewDidToggleMuteButton:(id)a0;
- (void)updateMuteButtonForTab:(id)a0;
- (void)updateIconForTab:(id)a0;
- (id)_destinationTileContainerView;
- (double)_toolbarHeight;
- (void)visibleBoundsDidChange;

@end
