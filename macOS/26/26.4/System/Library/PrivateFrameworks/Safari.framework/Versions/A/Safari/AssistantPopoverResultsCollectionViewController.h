@class AssistantPopoverResultsCollectionView, NSScrollView, NSArray, AssistantPopoverViewController, AssistantPopoverResultsCollectionViewLayout, NSCollectionViewDiffableDataSource, NSLayoutConstraint, NSIndexSet;
@protocol AssistantPopoverViewControllerDelegate;

@interface AssistantPopoverResultsCollectionViewController : NSViewController {
    NSCollectionViewDiffableDataSource *_resultsCollectionViewDataSource;
    AssistantPopoverResultsCollectionView *_resultsCollectionView;
    NSScrollView *_resultsScrollView;
    NSArray *_resultCollectionViewSections;
    NSLayoutConstraint *_resultsCollectionViewInitialHeight;
    AssistantPopoverResultsCollectionViewLayout *_resultsCollectionViewLayout;
    NSIndexSet *_rowActionCellTypes;
    NSIndexSet *_platteredCustomCellTypes;
    NSIndexSet *_nonPlatteredCustomCellTypes;
}

@property (weak, nonatomic) AssistantPopoverViewController *popoverController;
@property (weak, nonatomic) id<AssistantPopoverViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (id)_cellForAssistantResult:(id)a0 indexPath:(id)a1 collectionView:(id)a2;
- (void)_configureDataSource;
- (id)_firstCellInSection:(id)a0;
- (BOOL)_isLastItemInSection:(id)a0;
- (id)_itemForEntityResult:(id)a0 indexPath:(id)a1 collectionView:(id)a2;
- (id)_itemForPageMenuResult:(id)a0 indexPath:(id)a1 collectionView:(id)a2;
- (id)_layoutSectionForCollectionViewCells:(double)a0;
- (id)_layoutSectionForPageMenu:(unsigned long long)a0;
- (id)_resultsCollectionViewLayout;
- (void)_setupResultsCollectionView;
- (void)_setupResultsScrollView;
- (BOOL)isShowingSummaryPlaceholderInSection:(id)a0;
- (void)setReaderTextUsedForSummarizationForFeedbackInSection:(id)a0 readerTextUsedForSummarization:(id)a1;
- (void)showFinalSummary:(id)a0 inSection:(id)a1 footer:(id)a2;
- (void)showFinalSummary:(id)a0 inSection:(id)a1 readerTextUsedForSummarization:(id)a2 footer:(id)a3;
- (void)showSummaryPlaceholderInSection:(id)a0;
- (void)updateAssistantPopoverDimensions;
- (void)updateAssistantPopoverElasticity;
- (void)updateAssistantResultsForSections:(id)a0 animate:(BOOL)a1;
- (void)updateCellSpacingForSections:(id)a0;
- (void)updateSummaryCardInSection:(id)a0 text:(id)a1 header:(id)a2 symbol:(id)a3 footer:(id)a4;

@end
