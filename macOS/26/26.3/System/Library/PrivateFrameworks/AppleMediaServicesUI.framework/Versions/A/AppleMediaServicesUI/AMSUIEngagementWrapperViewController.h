@class NSViewController;

@interface AMSUIEngagementWrapperViewController : AMSUICommonViewController

@property (copy) id /* block */ dismissBlock;
@property (readonly) NSViewController *viewController;

- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (id)initWithViewController:(id)a0;
- (void)_setup;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)viewDidAppear:(BOOL)a0;
- (void)_setupContentSize;
- (BOOL)isInViewServiceProcess;
- (void)updateContentOverlayInsetsOnTraitCollectionChange;

@end
