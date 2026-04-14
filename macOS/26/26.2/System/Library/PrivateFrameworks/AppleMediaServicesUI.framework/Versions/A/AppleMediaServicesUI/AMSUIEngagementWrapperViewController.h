@class NSViewController;

@interface AMSUIEngagementWrapperViewController : AMSUICommonViewController

@property (copy) id /* block */ dismissBlock;
@property (readonly) NSViewController *viewController;

- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)loadView;
- (id)initWithViewController:(id)a0;
- (void)_setup;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_setupContentSize;
- (BOOL)isInViewServiceProcess;
- (void)updateContentOverlayInsetsOnTraitCollectionChange;

@end
