@class NSArray, SearchUIResultsCollectionViewController, NSString;
@protocol SearchUIResultsSizingDelegate, SearchUICommandDelegate, SFFeedbackListener, SearchUICustomViewProvider, SearchUIResultsInteractionDelegate, SearchUIResultsAccessoryViewDelegate;

@interface SearchUIResultsViewController : NSViewController <SearchUICollectionViewInteractionDelegate, SearchUIResultsCollectionViewSizingDelegate, SearchUICollectionViewAccessoryViewDelegate>

@property (retain, nonatomic) SearchUIResultsCollectionViewController *controller;
@property (weak, nonatomic) id<SearchUICustomViewProvider> customViewProvider;
@property (readonly) BOOL isForAboveFilterBarResults;
@property BOOL isBelowVisibleFilterBar;
@property (readonly) BOOL collectionViewIsFirstResponder;
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

- (id)forwardingTargetForSelector:(SEL)a0;
- (void)purgeMemory;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)collectionView;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)selectResult:(id)a0 execute:(BOOL)a1;
- (void)contentSizeDidChange:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)accessoryViewForRowModel:(id)a0;
- (void)collectionViewDidScroll;
- (void)deselectAllResults;
- (void)didUpdateKeyboardFocusToResult:(id)a0 cardSection:(id)a1;
- (BOOL)getInfoForSelectedItem;
- (void)makeCollectionViewFirstResponder;
- (BOOL)refusesKeyView;
- (BOOL)revealSelectedItem;
- (id)testingObject;
- (BOOL)willGetFocus;

@end
