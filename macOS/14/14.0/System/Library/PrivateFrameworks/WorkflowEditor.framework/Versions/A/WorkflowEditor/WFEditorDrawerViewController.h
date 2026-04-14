@class WFEditorDrawerHostingViewController, WFActionDrawerResultsController, NSString;
@protocol WFActionDrawerDelegate;

@interface WFEditorDrawerViewController : NSViewController <WFActionDrawerScrollViewObserver>

@property (readonly, nonatomic) WFEditorDrawerHostingViewController *hostingViewController;
@property (readonly, nonatomic) WFActionDrawerResultsController *resultsController;
@property (weak, nonatomic) id<WFActionDrawerDelegate> delegate;
@property (nonatomic) unsigned long long navigationStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)clearSearchBar;
- (void)focusSearchBar;
- (id)initWithResultsController:(id)a0;
- (void)performScrollingTest:(id)a0;

@end
