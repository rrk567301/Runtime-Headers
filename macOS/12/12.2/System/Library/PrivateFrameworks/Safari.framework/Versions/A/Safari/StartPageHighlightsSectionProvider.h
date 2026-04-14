@class HighlightManager, NSString, NSArray, NSMutableSet, StartPageCollectionViewLayoutSection;
@protocol StartPageCollectionSectionProviderDelegate;

@interface StartPageHighlightsSectionProvider : NSObject <StartPageCollectionSectionTitleViewDelegate, StartPageHighlightViewItemDelegate, StartPageCollectionSectionProvider> {
    HighlightManager *_highlightManager;
    NSArray *_highlights;
    NSMutableSet *_highlightsIdentifierThatSentFeedback;
    StartPageCollectionViewLayoutSection *_cachedEmptyItemLayoutSection;
    BOOL _hideEmptyItemView;
    BOOL _showingSingleSection;
    BOOL _inPrivateBrowsing;
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

- (void).cxx_destruct;
- (void)reloadData;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (long long)_numberOfItems;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)_sectionIndex;
- (BOOL)_isCollapsed;
- (BOOL)_canCollapse;
- (id)_browserWindowController;
- (id)_titleViewForSectionAtIndex:(long long)a0;
- (void)startPageCollectionSectionTitleView:(id)a0 collapseSection:(BOOL)a1;
- (long long)columnTypeForLayoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (id)layoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (void)setUpReusableViewsUsingRegister:(id)a0;
- (void)highlightSectionAtIndex:(long long)a0;
- (void)unhighlightSectionAtIndex:(long long)a0;
- (void)viewDidLayoutWithFirstSectionIndex:(long long)a0;
- (id)accessibilityTitleForSection:(long long)a0;
- (id)accessibilityIdentifierForSection:(long long)a0;
- (struct TabPlacementHint { id x0; BOOL x1; })_tabPlacementHint;
- (void)startPageHighlightViewItem:(id)a0 sendFeedbackForHighlight:(id)a1;
- (void)didPerformContextMenuShowingEventForItem:(id)a0 socialMenuItems:(id)a1 event:(id)a2;
- (id)initWithCompactAppearance:(BOOL)a0 showingSingleSection:(BOOL)a1 inPrivateBrowsing:(BOOL)a2;
- (void)sendFeedbackForHighlight:(id)a0;
- (BOOL)_hasContentToDisplay;
- (void)_updateHighlights;
- (void)_didUpdateHighlightsVisibility;
- (long long)_highlightsCount;
- (void)_navigateToHighlightItem:(id)a0;
- (void)_navigateToItem:(id)a0 title:(id)a1 policy:(long long)a2;

@end
