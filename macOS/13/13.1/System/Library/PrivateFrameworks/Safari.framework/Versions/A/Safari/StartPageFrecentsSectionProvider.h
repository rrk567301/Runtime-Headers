@class NSString, NSArray, NSMutableArray, StartPageCollectionViewLayoutSection;
@protocol StartPageFrecentsSectionProviderDelegate;

@interface StartPageFrecentsSectionProvider : StartPageTouchIconSectionProvider <FrecentsStartPageViewItemDelegate> {
    NSArray *_frequentlyVisitedSites;
    double _sectionWidth;
    NSMutableArray *_frequentlyVisitedSitesWithSnapshots;
    StartPageCollectionViewLayoutSection *_cachedEmptyItemLayoutSection;
    BOOL _hideEmptyItemView;
    BOOL _usingSnapshots;
}

@property (weak, nonatomic) id<StartPageFrecentsSectionProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reloadData;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (long long)_numberOfItems;
- (id)draggedTypes;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 canDragItemsAtIndexPaths:(id)a1 withEvent:(id)a2;
- (id)collectionView:(id)a0 pasteboardWriterForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 draggingSession:(id)a1 willBeginAtPoint:(struct CGPoint { double x0; double x1; })a2 forItemsAtIndexPaths:(id)a3;
- (void)collectionView:(id)a0 draggingSession:(id)a1 endedAtPoint:(struct CGPoint { double x0; double x1; })a2 dragOperation:(unsigned long long)a3;
- (void)collectionView:(id)a0 didEndDisplayingItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (id)_sectionTitle;
- (long long)_maximumNumberOfColumns;
- (void)didPerformContextMenuShowingEventForItem:(id)a0 withEvent:(id)a1;
- (void)didSelectItem:(id)a0 withEvent:(id)a1;
- (void)collectionViewPlus:(id)a0 draggingSession:(id)a1 movedToPoint:(struct CGPoint { double x0; double x1; })a2;
- (long long)columnTypeForLayoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (id)layoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (void)setUpReusableViewsUsingRegister:(id)a0;
- (id)accessibilityTitleForSection:(long long)a0;
- (id)accessibilityIdentifierForSection:(long long)a0;
- (id)_browserWindowController;
- (struct TabPlacementHint { id x0; BOOL x1; })_tabPlacementHint;
- (id)initWithSiteMetadataManager:(id)a0 usesCompactAppearance:(BOOL)a1;
- (void)_reloadContent;
- (id)_contentItemAtIndex:(unsigned long long)a0;
- (id)_metadataRequestForContentItem:(id)a0;
- (BOOL)_hasContentToDisplay;
- (long long)_numberOfRowsToShowWhenCollapsed;
- (void)_didUpdateFrecentsVisibility;
- (void)_didUpdateShowFrecentsAsSnapshots;
- (void)_updateRecommendationsWithNotification:(id)a0;
- (id)_enqueuedSiteMetadataRequestForRecommendationItem:(id)a0;
- (void)_pruneAndQueueSnapshots;
- (long long)_frecentsCount;
- (id)_contextMenuForFrecent:(id)a0;
- (id)_metadataRequestForURL:(id)a0;
- (BOOL)_hasPinnedTopSites;
- (void)_enqueuedSiteMetadataRequestForURL:(id)a0;
- (BOOL)_isScreenPointOverACollectionView:(struct CGPoint { double x0; double x1; })a0 inWindow:(id)a1;
- (BOOL)_shouldUseSnapshots;

@end
