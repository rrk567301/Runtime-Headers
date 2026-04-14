@class NSArray, SearchUIResultsCollectionViewController, NSString;
@protocol SearchUICommandDelegate, SearchUIResultsInteractionDelegate, SFFeedbackListener;

@interface SearchUIResultsViewController : NSViewController <SearchUICollectionViewInteractionDelegate>

@property (retain, nonatomic) SearchUIResultsCollectionViewController *controller;
@property (copy, nonatomic) NSArray *sections;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (retain, nonatomic) NSString *queryString;
@property (nonatomic) BOOL hasSelection;
@property (weak, nonatomic) id<SearchUICommandDelegate> commandDelegate;
@property (nonatomic) BOOL userInteractionEnabled;
@property (weak, nonatomic) id<SearchUIResultsInteractionDelegate> interactionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)copySelectedItem;
- (void)deselectAllResults;
- (void)didUpdateKeyboardFocusToResult:(id)a0 cardSection:(id)a1;
- (BOOL)doesIndexPathExist:(id)a0;
- (BOOL)executeSelectedResult;
- (BOOL)forwardUnhandledKeyDown:(id)a0;
- (BOOL)getInfoForSelectedItem;
- (void)moveSelectionDown;
- (BOOL)quickLookSelectedItem;
- (BOOL)removeFocus;
- (BOOL)revealSelectedItem;
- (void)selectFirstResult;
- (void)selectIndexPath:(id)a0;
- (BOOL)selectResult:(id)a0 execute:(BOOL)a1;
- (id)testingObject;

@end
