@class NSArray, PXPeopleSuggestionManager, NSTimer, NSString, PXPeopleBootstrapContext;
@protocol PXPeopleFlowViewControllerActionDelegate;

@interface PXPeopleBootstrapConfirmationViewController : UXCollectionViewController <PXPeopleSuggestionManagerDelegate, PXPeopleFlowViewController>

@property (readonly, nonatomic) PXPeopleSuggestionManager *suggestionManager;
@property (readonly, nonatomic) NSArray *presentationStatuses;
@property (retain, nonatomic) NSArray *currentSuggestions;
@property (retain, nonatomic) NSTimer *loadingDelayTimer;
@property (nonatomic) BOOL suggestionsPresented;
@property (nonatomic) unsigned long long viewState;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL willAppear;
@property (nonatomic) struct CGSize { double width; double height; } lastSize;
@property (nonatomic) BOOL hasSelectionEverChanged;
@property (nonatomic) BOOL useLowMemoryMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXPeopleBootstrapContext *bootstrapContext;
@property (readonly, nonatomic) BOOL wantsCancelButton;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredSize;
@property (weak, nonatomic) id<PXPeopleFlowViewControllerActionDelegate> actionDelegate;
@property (readonly, nonatomic) BOOL shouldConfirmAdvancement;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewDidLoad;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_sectionInsets;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)suggestionManager:(id)a0 hasNewSuggestionsAvailable:(id)a1;
- (void)noMoreSuggestionsAvailableForSuggestionManager:(id)a0;
- (void)willLoadMoreSuggestionsForSuggestionManager:(id)a0;
- (void)willTransitionToNextInFlow;
- (void)_updateNavigationBarForCurrentTraitCollection;
- (id)_localizedPromptString;
- (void)keyFaceUpdated:(id)a0;
- (id)initWithContext:(id)a0 dataSource:(id)a1;
- (void)_updateViewWithViewState:(unsigned long long)a0;
- (void)_finishedPresentingSuggestions;
- (void)_evaluateIfSuggestionPresentationFinished;
- (void)_markSkippedSuggestions;
- (void)_noSuggestionsFound;
- (void)_toggleConfirmedForCollectionViewCell:(id)a0 atIndex:(unsigned long long)a1;
- (void)_startLoadingTimer;
- (void)_updateHeaderContent;
- (double)_wonkyAutomaticContentOffset;
- (void)_badgeLoadingCells;
- (id)_sortedIndexPathsForVisibleCells;
- (void)_cacheCurrentSuggestions;
- (id)_descriptionForFooterView;
- (id)_titleForHeaderView;
- (void)updateImageForCell:(id)a0 withPerson:(id)a1;

@end
