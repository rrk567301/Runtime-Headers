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
- (BOOL)_isCollapsed;
- (long long)_numberOfItems;
- (long long)_sectionIndex;
- (void)collectionView:(id)a0 didEndDisplayingItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)reloadData;
- (BOOL)_canCollapse;
- (id)_browserWindowController;
- (void)_cancelRequestForItemView:(id)a0;
- (id)_imageForReadingListItem:(id)a0 item:(id)a1 indexPath:(id)a2;
- (void)_navigateToItem:(id)a0 inTabGroup:(id)a1 policy:(long long)a2;
- (void)_navigateToReadingListItem:(id)a0 inBrowserWindowController:(id)a1 browserViewController:(id)a2 policy:(long long)a3 shouldNavigateToItemInCurrentWebView:(BOOL)a4;
- (void)_navigateToReadingListItem:(id)a0 policy:(long long)a1;
- (void)_readingListItemsDidChange:(id)a0;
- (id)_tabPlacementHint;
- (id)_titleViewForSectionAtIndex:(long long)a0;
- (id)accessibilityIdentifierForSection:(long long)a0;
- (id)accessibilityTitleForSection:(long long)a0;
- (long long)columnTypeForLayoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (void)highlightSectionAtIndex:(long long)a0;
- (id)initWithCompactAppearance:(BOOL)a0;
- (id)layoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (void)navigateToReadingListItem:(id)a0;
- (void)setUpReusableViewsUsingRegister:(id)a0;
- (void)startPageCollectionSectionTitleView:(id)a0 collapseSection:(BOOL)a1;
- (void)startPageFullDescriptionViewItem:(id)a0 showContextMenuWithEvent:(id)a1;
- (void)unhighlightSectionAtIndex:(long long)a0;
- (void)viewDidLayoutWithFirstSectionIndex:(long long)a0;

@end
