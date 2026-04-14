@class OKTransition, NSString, NSArray, NSMapTable, OFPageViewController;

@interface OKNavigatorLinearViewController : OKNavigatorViewController <OFPageViewControllerDelegate, OFPageViewControllerDataSource, OKNavigatorViewControllerTransitionActionProtocol, OFViewControllerTransitioningDelegate> {
    NSArray *_transitions;
    OKTransition *_currentTransition;
    OFPageViewController *_pagesViewController;
    NSArray *_orderedPagesNames;
    NSMapTable *_registeredActionBindingTransitions;
}

@property (retain, nonatomic) OKTransition *defaultTransition;
@property (retain, nonatomic) OKTransition *overrideTransition;
@property (nonatomic) long long navigationOrientation;
@property (nonatomic) BOOL wraps;
@property (nonatomic) BOOL wantsPageControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (void)dealloc;
- (void)viewDidLoad;
- (void)commonInit;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)prepareForDisplay;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (id)pageViewController:(id)a0 viewControllerBeforeViewController:(id)a1;
- (id)pageViewController:(id)a0 viewControllerAfterViewController:(id)a1;
- (long long)presentationCountForPageViewController:(id)a0;
- (long long)presentationIndexForPageViewController:(id)a0;
- (void)pageViewController:(id)a0 willStartTransitioningToViewController:(id)a1 fromViewController:(id)a2 withDirection:(long long)a3;
- (void)pageViewController:(id)a0 didStartTransitioningToViewController:(id)a1 fromViewController:(id)a2;
- (void)pageViewController:(id)a0 willFinishTransitioningToViewController:(id)a1 fromViewController:(id)a2 transitionWillComplete:(BOOL)a3;
- (void)pageViewController:(id)a0 didFinishTransitioningToViewController:(id)a1 fromViewController:(id)a2 transitionCompleted:(BOOL)a3;
- (void)pageViewController:(id)a0 didUpdateTransitioningToViewController:(id)a1 fromViewController:(id)a2 withProgress:(double)a3 andVelocity:(double)a4;
- (id)navigationController:(id)a0 animationControllerForDirection:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (BOOL)pageViewController:(id)a0 canAutomaticallyHandleEvent:(id)a1;
- (void)applySettings;
- (void)navigatorWillAppear:(BOOL)a0;
- (BOOL)prepareForUnload;
- (void)navigateToPageWithName:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)gotoNext:(id)a0;
- (void)gotoPrevious:(id)a0;
- (void)reloadPagesViewController;
- (void)updatePagesViewController;
- (BOOL)prepareForWarmup;
- (id)nameForPageBeforePage:(id)a0;
- (id)nameForPageAfterPage:(id)a0;
- (id)transitionAfterPage:(id)a0;
- (id)transitionBeforePage:(id)a0;
- (void)prepareAdjacentPageViewControllers;
- (void)setCurrentPageToPageWithName:(id)a0 direction:(long long)a1 animated:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)_pageViewControllerForActionResponder:(id)a0;
- (void)registerActionBindingTransition:(id)a0;
- (void)unregisterActionBindingTransition:(id)a0;
- (void)setSettingDefaultTransition:(id)a0;
- (void)setSettingOverrideTransition:(id)a0;
- (void)setSettingOrientation:(long long)a0;
- (void)setSettingWraps:(BOOL)a0;
- (void)setSettingWantsPageControl:(BOOL)a0;
- (void)setSettingTransitions:(id)a0;
- (void)pageViewController:(id)a0 didFinishAnimating:(BOOL)a1 fromViewController:(id)a2 transitionCompleted:(BOOL)a3;
- (void)navigatorDidAppear:(BOOL)a0;
- (void)navigatorWillDisappear:(BOOL)a0;
- (void)navigatorDidDisappear:(BOOL)a0;
- (void)gotoPageWithName:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
