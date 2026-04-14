@class WFEditorDrawerHostingViewController, WFContextualActionSuggester, WFWorkflow, NSString, HMHome;
@protocol WFActionDrawerDelegate;

@interface WFEditorDrawerViewController : NSViewController <WFActionDrawerScrollViewObserver>

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic) WFContextualActionSuggester *actionSuggester;
@property (readonly, nonatomic) WFEditorDrawerHostingViewController *hostingViewController;
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
- (id)initWithHome:(id)a0 workflow:(id)a1 actionSuggester:(id)a2;
- (void)performScrollingTest:(id)a0;

@end
