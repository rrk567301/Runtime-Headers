@class AMSUIWebNavigationBarModel, NSString, AMSUIWebAppearance, NSDictionary, NSViewController, AMSUIWebClientContext, AMSUICommonNavigationItem;
@protocol AMSUIWebPresentationDelegate, AMSUIWebPagePresenter;

@interface AMSUIWebContainerViewController : AMSUICommonViewController <AMSUIWebPresentationDelegate>

@property (weak) AMSUIWebClientContext *context;
@property BOOL dismissCalled;
@property BOOL hasAppeared;
@property (retain) NSViewController *hiddenViewController;
@property (weak) AMSUICommonNavigationItem *lastNavigationItem;
@property long long lastNavigationStyle;
@property (retain) AMSUIWebNavigationBarModel *navigationBarModel;
@property struct CGPoint { double x; double y; } scrollPosition;
@property (readonly) unsigned long long activePresentationType;
@property (retain) AMSUIWebAppearance *appearance;
@property long long containerIndex;
@property (retain) NSViewController<AMSUIWebPagePresenter> *containedViewController;
@property long long disableReappearPlaceholder;
@property (weak) AMSUIWebContainerViewController<AMSUIWebPresentationDelegate> *modalPresentationDelegate;
@property (weak) AMSUIWebContainerViewController *nextContainer;
@property (retain) NSDictionary *pageInfo;
@property (weak) AMSUIWebContainerViewController<AMSUIWebPresentationDelegate> *pushPresentationDelegate;
@property BOOL shouldSkipInitialRefresh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (id)navigationItem;
- (void)_applyAppearance;
- (void)applyNavigationModel:(id)a0;
- (void)handleModalDismissal;
- (void)_postEvent:(id)a0;
- (void)_handlePushDismissal;
- (unsigned long long)_determineActivePresentationType;
- (void)_refreshForInitialAppear;
- (void)_setupNavBarAnimated:(BOOL)a0;
- (void)didDismissController:(id)a0;
- (void)_adjustWebViewScrollFor:(id)a0 completion:(id /* block */)a1;
- (void)_prepareToMoveWebViewToVC:(id)a0 completion:(id /* block */)a1;
- (void)replaceContentWithViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_scrollTo:(struct CGPoint { double x0; double x1; })a0 webView:(id)a1 completion:(id /* block */)a2;
- (id)_rightButtonModel;
- (void)_handleRightNavigationButton:(id)a0;
- (id)_customBarButtonItemWithModel:(id)a0 target:(id)a1 selector:(SEL)a2;
- (id)_barButtonItemForButtonModel:(id)a0;
- (id)_barButtonItemForAppViewModel:(id)a0;
- (id)_leftButtonModel;
- (id)_buttonModelForConditionalButtons:(id)a0;
- (void)_handleLeftNavigationButton:(id)a0;
- (id)_rightBarButtonItemWithNavigationModel:(id)a0;
- (id)initWithViewController:(id)a0 appearance:(id)a1 navigationBar:(id)a2 context:(id)a3;
- (void)cacheScrollViewPositionFor:(id)a0;

@end
