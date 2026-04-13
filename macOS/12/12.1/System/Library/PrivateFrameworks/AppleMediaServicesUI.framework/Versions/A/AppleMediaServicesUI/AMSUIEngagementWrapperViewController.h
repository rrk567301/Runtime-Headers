@class NSViewController;

@interface AMSUIEngagementWrapperViewController : AMSUICommonViewController

@property (copy) id /* block */ dismissBlock;
@property (readonly) NSViewController *viewController;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)_setup;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (id)initWithViewController:(id)a0;
- (void)_setupContentSize;

@end
