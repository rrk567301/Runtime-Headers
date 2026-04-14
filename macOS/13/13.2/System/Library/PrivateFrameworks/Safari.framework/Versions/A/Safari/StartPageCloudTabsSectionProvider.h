@class NSString, NSArray, WBSCloudTabDevice, NSButton;
@protocol StartPageCollectionSectionProviderDelegate;

@interface StartPageCloudTabsSectionProvider : NSObject <SingleLineStartPageViewItemDelegate, StartPageCollectionSectionTitleViewDelegate, StartPageCollectionSectionProvider> {
    NSArray *_cachedCloudTabDevices;
    WBSCloudTabDevice *_selectedCloudTabDevice;
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
- (void)reloadData;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (void)collectionView:(id)a0 didEndDisplayingItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)_sectionIndex;
- (void)startPageCollectionSectionTitleView:(id)a0 collapseSection:(BOOL)a1;
- (long long)columnTypeForLayoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (id)layoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (void)setUpReusableViewsUsingRegister:(id)a0;
- (void)highlightSectionAtIndex:(long long)a0;
- (void)unhighlightSectionAtIndex:(long long)a0;
- (void)viewDidLayoutWithFirstSectionIndex:(long long)a0;
- (id)accessibilityTitleForSection:(long long)a0;
- (id)accessibilityIdentifierForSection:(long long)a0;
- (id)_browserWindowController;
- (struct TabPlacementHint { id x0; BOOL x1; })_tabPlacementHint;
- (id)_titleViewForSectionAtIndex:(long long)a0;
- (void)singleLineStartPageViewItem:(id)a0 didShowContextMenuWithEvent:(id)a1;
- (void)_cloudTabsItemsDidChange:(id)a0;
- (void)_changeSelectedTabItem:(id)a0;
- (void)navigateToCloudTab:(id)a0;
- (id)initWithCompactAppearance:(BOOL)a0 forStandaloneStartPage:(BOOL)a1;
- (BOOL)_canCollapseSection:(long long)a0;
- (BOOL)_isCollapsedSection:(long long)a0;
- (id /* block */)_deviceButtonAction;
- (id)_makeDeviceMenu;
- (void)_updateTitleViewIfNeeded;
- (void)_showDeviceMenu:(id)a0;
- (id)_sectionTitleForSelectedTabDevice;
- (id)_sectionTitleForTabDeviceForSection:(long long)a0;
- (id)_contextMenuForCloudTab:(id)a0;

@end
