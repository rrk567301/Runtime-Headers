@class NSString, NSArray, NSMapTable;
@protocol StartPageCollectionSectionProviderDelegate;

@interface StartPageReadingListSectionProvider : NSObject <StartPageFullDescriptionViewItemDelegate, StartPageCollectionSectionTitleViewDelegate, StartPageCollectionSectionProvider> {
    NSArray *_cachedReadingListItems;
    NSMapTable *_itemViewsToTokens;
}

@property (nonatomic) BOOL usesPrivateBrowsing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<StartPageCollectionSectionProviderDelegate> sectionProviderDelegate;
@property (readonly, nonatomic) BOOL usesCompactAppearance;
@property (readonly, copy, nonatomic) NSArray *draggedTypes;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reloadData;
- (long long)_numberOfItems;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (void)collectionView:(id)a0 didEndDisplayingItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)_sectionIndex;
- (BOOL)_isCollapsed;
- (BOOL)_canCollapse;
- (void)startPageFullDescriptionViewItem:(id)a0 showContextMenuWithEvent:(id)a1;
- (void)_readingListItemsDidChange:(id)a0;
- (id)_browserWindowController;
- (void)_cancelRequestForItemView:(id)a0;
- (void)_navigateToReadingListItem:(id)a0 policy:(long long)a1;
- (void)navigateToReadingListItem:(id)a0;
- (id)_imageForReadingListItem:(id)a0 item:(id)a1 indexPath:(id)a2;
- (id)_titleViewForSectionAtIndex:(long long)a0;
- (void)_navigateToItem:(id)a0 inTabGroup:(id)a1 policy:(long long)a2;
- (void)_navigateToReadingListItem:(id)a0 inBrowserWindowController:(id)a1 browserViewController:(id)a2 policy:(long long)a3 shouldNavigateToItemInCurrentWebView:(BOOL)a4;
- (void)startPageCollectionSectionTitleView:(id)a0 collapseSection:(BOOL)a1;
- (long long)columnTypeForLayoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (id)layoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (void)setUpReusableViewsUsingRegister:(id)a0;
- (void)highlightSectionAtIndex:(long long)a0;
- (void)unhighlightSectionAtIndex:(long long)a0;
- (void)viewDidLayoutWithFirstSectionIndex:(long long)a0;
- (id)accessibilityTitleForSection:(long long)a0;
- (id)accessibilityIdentifierForSection:(long long)a0;
- (id)initWithCompactAppearance:(BOOL)a0;
- (struct TabPlacementHint { id x0; BOOL x1; })_tabPlacementHint;

@end
