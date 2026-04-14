@class NSString, NSArray, WBSCloudTabDevice, NSButton;
@protocol StartPageCollectionSectionProviderDelegate;

@interface StartPageCloudTabsSectionProvider : NSObject <CloudTabsStartPageViewItemDelegate, StartPageCollectionSectionTitleViewDelegate, StartPageCollectionSectionProvider> {
    NSArray *_cachedCloudTabDevices;
    WBSCloudTabDevice *_selectedCloudTabDevice;
    NSButton *_deviceButton;
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
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (void)collectionView:(id)a0 didEndDisplayingItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)_sectionIndex;
- (void)didPerformContextMenuShowingEventForItem:(id)a0 withEvent:(id)a1;
- (id)_browserWindowController;
- (id)_titleViewForSectionAtIndex:(long long)a0;
- (void)startPageCollectionSectionTitleView:(id)a0 collapseSection:(BOOL)a1;
- (long long)columnTypeForLayoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (id)layoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (void)setUpReusableViewsUsingRegister:(id)a0;
- (void)highlightSectionAtIndex:(long long)a0;
- (void)unhighlightSectionAtIndex:(long long)a0;
- (id)accessibilityTitleForSection:(long long)a0;
- (id)accessibilityIdentifierForSection:(long long)a0;
- (id)initWithCompactAppearance:(BOOL)a0;
- (struct TabPlacementHint { id x0; BOOL x1; })_tabPlacementHint;
- (void)_cloudTabsItemsDidChange:(id)a0;
- (void)_showDeviceMenu:(id)a0;
- (void)_changeSelectedTabItem:(id)a0;
- (BOOL)_canCollapseSection:(long long)a0;
- (BOOL)_isCollapsedSection:(long long)a0;
- (id)_makeDeviceMenu;
- (id)_sectionTitleForSelectedTabDevice;
- (void)_updateTitleViewIfNeeded;
- (void)navigateToCloudTab:(id)a0;
- (void)_updateDeviceButton;
- (id)_contextMenuForCloudTab:(id)a0;

@end
