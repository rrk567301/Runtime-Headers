@class WBTabGroup, NSString, NSArray, NSButton;
@protocol StartPageCollectionSectionProviderDelegate;

@interface StartPageRecentlyClosedTabsSectionProvider : NSObject <SingleLineStartPageViewItemDelegate, StartPageCollectionSectionTitleViewDelegate, StartPageCollectionSectionProvider> {
    NSButton *_showHistoryButton;
    NSButton *_clearAllRecentlyClosedTabsButton;
    WBTabGroup *_selectedTabGroup;
    BOOL _hideEmptyItemView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<StartPageCollectionSectionProviderDelegate> sectionProviderDelegate;
@property (nonatomic) BOOL usesPrivateBrowsing;
@property (readonly, nonatomic) BOOL usesCompactAppearance;
@property (readonly, copy, nonatomic) NSArray *draggedTypes;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reloadData;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (void)collectionView:(id)a0 willDisplayItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)_sectionIndex;
- (id)_sectionTitle;
- (void)_historyWasCleared:(id)a0;
- (void)startPageCollectionSectionTitleView:(id)a0 collapseSection:(BOOL)a1;
- (long long)columnTypeForLayoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (id)layoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (void)setUpReusableViewsUsingRegister:(id)a0;
- (void)highlightSectionAtIndex:(long long)a0;
- (void)unhighlightSectionAtIndex:(long long)a0;
- (id)accessibilityTitleForSection:(long long)a0;
- (id)accessibilityIdentifierForSection:(long long)a0;
- (id)initWithCompactAppearance:(BOOL)a0;
- (id)_browserWindowController;
- (struct TabPlacementHint { id x0; BOOL x1; })_tabPlacementHint;
- (id)_titleViewForSectionAtIndex:(long long)a0;
- (void)singleLineStartPageViewItem:(id)a0 didShowContextMenuWithEvent:(id)a1;
- (BOOL)_hasContentToDisplay;
- (BOOL)_canCollapseSection:(long long)a0;
- (BOOL)_isCollapsedSection:(long long)a0;
- (void)_updateTitleViewIfNeeded;
- (void)_recentlyClosedTabsDidChange:(id)a0;
- (void)_didUpdateStartPageRecentlyClosedTabsVisibility;
- (void)_clearAllRecentlyClosedTabs:(id)a0;
- (void)_showHistory:(id)a0;
- (void)navigateToRecentlyClosedTab:(id)a0;
- (id)_recentlyClosedTabStates;
- (id)_createButtonWithTitle:(id)a0 accessibilityLabel:(id)a1 image:(id)a2 action:(SEL)a3;
- (void)_createClearAllRecentlyClosedTabsButton;
- (void)_createShowHistoryButtonIfNeeded;
- (id)_contextMenuForTabGroupTab:(id)a0;

@end
