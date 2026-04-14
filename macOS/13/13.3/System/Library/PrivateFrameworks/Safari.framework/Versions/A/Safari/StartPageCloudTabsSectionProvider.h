@class NSString, NSArray, NSButton;
@protocol StartPageCollectionSectionProviderDelegate, WBSCloudTabDeviceProvider, WBSCloudTabProvider;

@interface StartPageCloudTabsSectionProvider : NSObject <SingleLineStartPageViewItemDelegate, StartPageCollectionSectionTitleViewDelegate, StartPageCollectionSectionProvider> {
    id<WBSCloudTabDeviceProvider> _cloudTabStore;
    NSArray *_cachedCloudTabDevices;
    id<WBSCloudTabProvider> _selectedCloudTabDevice;
    NSButton *_deviceButton;
    BOOL _isStandaloneCloudTabsStartPage;
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
- (long long)_sectionIndex;
- (void)collectionView:(id)a0 didEndDisplayingItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)reloadData;
- (id)_makeDeviceMenu;
- (id)_browserWindowController;
- (BOOL)_canCollapseSection:(long long)a0;
- (void)_changeSelectedTabItem:(id)a0;
- (void)_cloudTabsItemsDidChange:(id)a0;
- (id)_contextMenuForCloudTab:(id)a0;
- (id /* block */)_deviceButtonAction;
- (BOOL)_isCollapsedSection:(long long)a0;
- (id)_sectionTitleForSelectedTabDevice;
- (id)_sectionTitleForTabDeviceForSection:(long long)a0;
- (void)_showDeviceMenu:(id)a0;
- (id)_tabPlacementHint;
- (id)_titleViewForSectionAtIndex:(long long)a0;
- (void)_updateTitleViewIfNeeded;
- (id)accessibilityIdentifierForSection:(long long)a0;
- (id)accessibilityTitleForSection:(long long)a0;
- (long long)columnTypeForLayoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (void)highlightSectionAtIndex:(long long)a0;
- (id)initWithCompactAppearance:(BOOL)a0 forStandaloneStartPage:(BOOL)a1;
- (id)layoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (void)navigateToCloudTab:(id)a0;
- (void)setUpReusableViewsUsingRegister:(id)a0;
- (void)singleLineStartPageViewItem:(id)a0 didShowContextMenuWithEvent:(id)a1;
- (void)startPageCollectionSectionTitleView:(id)a0 collapseSection:(BOOL)a1;
- (void)unhighlightSectionAtIndex:(long long)a0;
- (void)viewDidLayoutWithFirstSectionIndex:(long long)a0;

@end
