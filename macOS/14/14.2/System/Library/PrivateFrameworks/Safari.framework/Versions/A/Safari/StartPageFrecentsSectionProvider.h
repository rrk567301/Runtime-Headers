@class _SnapshotCache, NSString, NSArray, NSMutableArray, StartPageCollectionViewLayoutSection;
@protocol StartPageFrecentsSectionProviderDelegate;

@interface StartPageFrecentsSectionProvider : StartPageTouchIconSectionProvider <FrecentsStartPageViewItemDelegate> {
    NSArray *_frequentlyVisitedSites;
    double _sectionWidth;
    NSMutableArray *_frequentlyVisitedSitesWithSnapshots;
    StartPageCollectionViewLayoutSection *_cachedEmptyItemLayoutSection;
    BOOL _hideEmptyItemView;
    _SnapshotCache *_snapshotCache;
    BOOL _usingSnapshots;
}

@property (weak, nonatomic) id<StartPageFrecentsSectionProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)_numberOfItems;
- (BOOL)collectionView:(id)a0 canDragItemsAtIndexPaths:(id)a1 withEvent:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 draggingSession:(id)a1 endedAtPoint:(struct CGPoint { double x0; double x1; })a2 dragOperation:(unsigned long long)a3;
- (void)collectionView:(id)a0 draggingSession:(id)a1 willBeginAtPoint:(struct CGPoint { double x0; double x1; })a2 forItemsAtIndexPaths:(id)a3;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 pasteboardWriterForItemAtIndexPath:(id)a1;
- (id)draggedTypes;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)a0;
- (void)reloadData;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (id)_sectionTitle;
- (long long)_maximumNumberOfColumns;
- (void)_pruneSnapshots;
- (id)_metadataRequestForContentItem:(id)a0;
- (BOOL)_shouldReserveSpaceForSnapshots;
- (id)_browserWindowController;
- (id)_contentItemAtIndex:(unsigned long long)a0;
- (id)_contextMenuForFrecent:(id)a0;
- (void)_didUpdateFrecentsVisibility;
- (void)_didUpdateShowFrecentsAsSnapshots;
- (id)_enqueuedSiteMetadataRequestForRecommendationItem:(id)a0;
- (void)_enqueuedSiteMetadataRequestForURL:(id)a0;
- (long long)_frecentsCount;
- (id)_frequentlyVisitedSitesToDisplay;
- (BOOL)_hasContentToDisplay;
- (BOOL)_hasPinnedTopSites;
- (BOOL)_isScreenPointOverACollectionView:(struct CGPoint { double x0; double x1; })a0 inWindow:(id)a1;
- (id)_metadataRequestForURL:(id)a0;
- (long long)_numberOfRowsToShowWhenCollapsed;
- (void)_pruneAndQueueSnapshots;
- (void)_reloadContent;
- (BOOL)_shouldUseSnapshots;
- (id)_tabPlacementHint;
- (void)_updateFrecentSnapshotWithNotification:(id)a0;
- (void)_updateRecommendationsWithNotification:(id)a0;
- (void)_updateSnapshotForURL:(id)a0;
- (id)accessibilityIdentifierForSection:(long long)a0;
- (id)accessibilityTitleForSection:(long long)a0;
- (void)collectionViewPlus:(id)a0 draggingSession:(id)a1 movedToPoint:(struct CGPoint { double x0; double x1; })a2;
- (long long)columnTypeForLayoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (void)didPerformContextMenuShowingEventForItem:(id)a0 withEvent:(id)a1;
- (void)didSelectItem:(id)a0 withEvent:(id)a1;
- (id)initWithSiteMetadataManager:(id)a0 usesCompactAppearance:(BOOL)a1;
- (id)layoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (void)setUpReusableViewsUsingRegister:(id)a0;
- (id)snapshotCache;

@end
