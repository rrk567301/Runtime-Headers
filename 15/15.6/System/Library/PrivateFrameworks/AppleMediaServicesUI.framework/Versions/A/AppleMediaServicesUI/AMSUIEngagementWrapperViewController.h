@class NSViewController;

@interface AMSUIEngagementWrapperViewController : AMSUICommonViewController

@property (copy) id /* block */ dismissBlock;
@property (readonly) NSViewController *viewController;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_setup;
- (void)loadView;
- (id)initWithViewController:(id)a0;
- (void)viewDidAppear:(char)a0;
- (void)viewDidDisappear:(char)a0;
- (void)viewWillDisappear:(char)a0;
- (void)viewWillLayoutSubviews;
- (void)_setupContentSize;
- (char)isInViewServiceProcess;
- (void)updateContentOverlayInsetsOnTraitCollectionChange;

@end
