@class NSArray, SearchUIResultsCollectionViewController, NSString;
@protocol SearchUIResultsSizingDelegate, SearchUICommandDelegate, SFFeedbackListener, SearchUIResultsInteractionDelegate;

@interface SearchUIResultsViewController : NSViewController <SearchUICollectionViewInteractionDelegate, SearchUIResultsCollectionViewSizingDelegate>

@property (retain, nonatomic) SearchUIResultsCollectionViewController *controller;
@property (copy, nonatomic) NSArray *sections;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (retain, nonatomic) NSString *queryString;
@property (nonatomic) char hasSelection;
@property (weak, nonatomic) id<SearchUICommandDelegate> commandDelegate;
@property (nonatomic) char userInteractionEnabled;
@property (weak, nonatomic) id<SearchUIResultsInteractionDelegate> interactionDelegate;
@property (weak, nonatomic) id<SearchUIResultsSizingDelegate> sizingDelegate;
@property (nonatomic) char singleClickExecutesCommands;
@property (nonatomic) char selectionShouldFillWidth;
@property (nonatomic) char disableEmphasizedSelection;
@property (nonatomic) char dragInteractionEnabled;
@property (nonatomic) char scrollEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)contentSizeDidChange:(struct CGSize { double x0; double x1; })a0;
- (void)copySelectedItem;
- (void)deselectAllResults;
- (void)didUpdateKeyboardFocusToResult:(id)a0 cardSection:(id)a1;
- (char)doesIndexPathExist:(id)a0;
- (char)executeSelectedResult;
- (char)forwardUnhandledKeyDown:(id)a0;
- (char)getInfoForSelectedItem;
- (void)moveSelectionDown;
- (char)quickLookSelectedItem;
- (char)removeFocus;
- (char)revealSelectedItem;
- (void)selectFirstResult;
- (void)selectIndexPath:(id)a0;
- (char)selectResult:(id)a0 execute:(char)a1;
- (id)testingObject;

@end
