@class NSArray, SearchUIResultsCollectionViewController, NSString;
@protocol SearchUIResultsSizingDelegate, SearchUICommandDelegate, SFFeedbackListener, SearchUICustomViewProvider, SearchUIResultsInteractionDelegate, SearchUIResultsAccessoryViewDelegate;

@interface SearchUIResultsViewController : NSViewController <SearchUICollectionViewInteractionDelegate, SearchUIResultsCollectionViewSizingDelegate, SearchUICollectionViewAccessoryViewDelegate>

@property (retain, nonatomic) SearchUIResultsCollectionViewController *controller;
@property (weak, nonatomic) id<SearchUICustomViewProvider> customViewProvider;
@property (readonly) BOOL isForAboveFilterBarResults;
@property BOOL isBelowVisibleFilterBar;
@property (copy, nonatomic) NSArray *sections;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (retain, nonatomic) NSString *queryString;
@property (nonatomic) BOOL hasSelection;
@property (weak, nonatomic) id<SearchUICommandDelegate> commandDelegate;
@property (nonatomic) BOOL userInteractionEnabled;
@property (weak, nonatomic) id<SearchUIResultsInteractionDelegate> interactionDelegate;
@property (weak, nonatomic) id<SearchUIResultsSizingDelegate> sizingDelegate;
@property (weak, nonatomic) id<SearchUIResultsAccessoryViewDelegate> accessoryViewDelegate;
@property (nonatomic) BOOL singleClickExecutesCommands;
@property (nonatomic) BOOL selectionShouldFillWidth;
@property (nonatomic) BOOL disableEmphasizedSelection;
@property (nonatomic) BOOL dragInteractionEnabled;
@property (nonatomic) BOOL scrollEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)doesIndexPathExist:(id)a0;
- (void)contentSizeDidChange:(struct CGSize { double x0; double x1; })a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)quickLookSelectedItem;
- (void)copySelectedItem;
- (void)purgeMemory;
- (void).cxx_destruct;
- (BOOL)selectResult:(id)a0 execute:(BOOL)a1;
- (void)selectFirstResult;
- (id)accessoryViewForRowModel:(id)a0;
- (void)collectionViewDidScroll;
- (void)deselectAllResults;
- (void)didUpdateKeyboardFocusToResult:(id)a0 cardSection:(id)a1;
- (BOOL)executeSecondaryCommandForSelectedResult;
- (BOOL)executeSelectedResult;
- (BOOL)forwardUnhandledKeyDown:(id)a0;
- (BOOL)getInfoForSelectedItem;
- (void)moveSelectionDown;
- (BOOL)removeFocusWithReason:(unsigned long long)a0;
- (BOOL)revealSelectedItem;
- (void)selectIndexPath:(id)a0;
- (id)testingObject;
- (BOOL)treatsFirstResultAsTopHit;
- (BOOL)willGetFocus;

@end
