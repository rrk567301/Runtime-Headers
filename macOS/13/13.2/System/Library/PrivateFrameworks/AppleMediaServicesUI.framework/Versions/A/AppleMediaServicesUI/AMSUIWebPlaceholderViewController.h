@class NSView, NSString, AMSUIWebAppearance, AMSUILoadingView, AMSUIWebLoadingPageModel, AMSBinaryPromise, NSViewController, AMSUIWebClientContext;
@protocol AMSUIWebPagePresenter;

@interface AMSUIWebPlaceholderViewController : AMSUICommonViewController <AMSUIWebPagePresenter>

@property (retain) AMSUIWebClientContext *context;
@property BOOL hasAppeared;
@property BOOL isVisible;
@property (retain) AMSUILoadingView *loadingView;
@property BOOL shouldSnapshot;
@property (retain) AMSBinaryPromise *snapshotPromise;
@property (retain) NSView *snapshotView;
@property (retain) NSView *visibleView;
@property BOOL animateFadeIn;
@property (retain) AMSUIWebAppearance *appearance;
@property (retain) AMSUIWebLoadingPageModel *model;
@property (retain) NSViewController<AMSUIWebPagePresenter> *originalViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)willPresentPageModel:(id)a0 appearance:(id)a1;
- (void)_applyAppearance;
- (id)initWithModel:(id)a0 context:(id)a1 appearance:(id)a2;
- (id)initWithSnapshot:(id)a0 context:(id)a1 appearance:(id)a2;
- (void)awaitSnapshotWithCompletion:(id /* block */)a0;
- (void)willAppearAfterDismiss;
- (void)_startReappearTransitionTimerAnimated:(BOOL)a0;
- (void)_replacePrimaryViewWithView:(id)a0 animated:(BOOL)a1;
- (void)_transitionToLoadingAnimated:(BOOL)a0;
- (void)_transitionToSnapshot;

@end
