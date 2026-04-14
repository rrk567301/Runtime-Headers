@class NSViewController;

@interface AMSUIEngagementWrapperViewController : AMSUICommonViewController

@property (copy) id /* block */ dismissBlock;
@property (readonly) NSViewController *viewController;

- (void)viewDidAppear:(BOOL)a0;
- (void)loadView;
- (void)_setup;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (void)_setupContentSize;
- (BOOL)isInViewServiceProcess;
- (void)updateContentOverlayInsetsOnTraitCollectionChange;

@end
