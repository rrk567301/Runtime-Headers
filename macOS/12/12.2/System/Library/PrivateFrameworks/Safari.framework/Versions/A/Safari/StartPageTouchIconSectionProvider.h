@class NSString, WBSSiteMetadataManager, NSArray, NSMapTable, StartPageCollectionSectionTitleView;
@protocol StartPageCollectionSectionProviderDelegate;

@interface StartPageTouchIconSectionProvider : NSObject <SiriSuggestionsStartPageLinkRecommendationDelegate, StartPageCollectionSectionProvider, StartPageCollectionSectionTitleViewDelegate> {
    NSMapTable *_recommendationMetadataTokens;
}

@property (readonly, nonatomic) WBSSiteMetadataManager *siteMetadataManager;
@property (readonly, nonatomic) BOOL usesCompactAppearance;
@property (nonatomic) BOOL usesPrivateBrowsing;
@property (readonly, nonatomic) BOOL _canCollapse;
@property (readonly, nonatomic) BOOL _isCollapsed;
@property (readonly, nonatomic) StartPageCollectionSectionTitleView *_titleView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } _collectionViewItemSize;
@property (readonly, nonatomic) long long _maximumNumberOfColumns;
@property (readonly, nonatomic) double _interitemSpacing;
@property (readonly, nonatomic) NSString *_sectionTitle;
@property (readonly, nonatomic) BOOL _hasContentToDisplay;
@property (readonly, nonatomic) long long _numberOfRowsToShowWhenCollapsed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<StartPageCollectionSectionProviderDelegate> sectionProviderDelegate;
@property (readonly, copy, nonatomic) NSArray *draggedTypes;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reloadData;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (long long)_numberOfItems;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 didEndDisplayingItem:(id)a1 forRepresentedObjectAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingSupplementaryView:(id)a1 forElementOfKind:(id)a2 atIndexPath:(id)a3;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)_sectionIndex;
- (void)willReuseItem:(id)a0;
- (id)_titleViewForSectionAtIndex:(long long)a0;
- (void)startPageCollectionSectionTitleView:(id)a0 collapseSection:(BOOL)a1;
- (long long)columnTypeForLayoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (id)layoutSectionAtIndex:(long long)a0 withLayoutEnvironment:(id)a1;
- (void)setUpReusableViewsUsingRegister:(id)a0;
- (void)highlightSectionAtIndex:(long long)a0;
- (void)unhighlightSectionAtIndex:(long long)a0;
- (void)viewDidLayoutWithFirstSectionIndex:(long long)a0;
- (id)initWithSiteMetadataManager:(id)a0 usesCompactAppearance:(BOOL)a1;
- (id)_contentItemAtIndex:(unsigned long long)a0;
- (void)_cancelPendingMetadataRequests;
- (void)_cancelTouchIconRequestForCollectionViewItem:(id)a0;
- (id)_metadataRequestForContentItem:(id)a0;
- (id)_enqueuedSiteMetadataRequestForRecommendationItem:(id)a0;
- (void)_addRecommendationMetadataToken:(id)a0 item:(id)a1;

@end
