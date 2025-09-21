@class NSTableCellView, NSString, NSBox, AssistantPopoverResultsCollectionViewController, NSView, NSNumber, SFSearchResult;
@protocol SearchUITableCellView;

@interface AssistantPopoverResultCollectionViewEntityItem : NSCollectionViewItem <SearchUIFeedbackDelegate> {
    NSTableCellView<SearchUITableCellView> *_searchUIView;
    NSView *_contentView;
    SFSearchResult *_currentSearchResult;
    NSView *_backgroundView;
    NSView *_selectionView;
}

@property (class, readonly, nonatomic) NSString *identifier;

@property (retain, nonatomic) NSBox *separator;
@property (retain, nonatomic) AssistantPopoverResultsCollectionViewController *resultsCollectionViewController;
@property (copy, nonatomic) NSString *webpageIdentifier;
@property (copy, nonatomic) NSNumber *componentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)loadView;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)didPerformCommand:(id)a0;
- (void).cxx_destruct;
- (void)setSearchResult:(id)a0;

@end
