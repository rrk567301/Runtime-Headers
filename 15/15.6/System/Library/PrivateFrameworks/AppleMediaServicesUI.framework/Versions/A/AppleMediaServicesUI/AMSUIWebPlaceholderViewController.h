@class NSUUID, NSView, AMSUIWebAppearance, NSString, AMSUIWebSnapshotView, AMSUIMessageLoadingViewController, AMSUIWebClientContext, AMSBinaryPromise, AMSUIWebLoadingPageModel, NSViewController;
@protocol AMSUIWebPagePresenter;

@interface AMSUIWebPlaceholderViewController : AMSUICommonViewController <AMSUIWebPagePresenter>

@property (retain) AMSUIWebClientContext *context;
@property char hasAppeared;
@property char isVisible;
@property (retain) AMSUIMessageLoadingViewController *loadingController;
@property char shouldSnapshot;
@property (retain) NSUUID *snapshotID;
@property (retain) AMSBinaryPromise *snapshotPromise;
@property (retain) AMSUIWebSnapshotView *snapshotView;
@property (retain) NSView *visibleView;
@property char animateFadeIn;
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
- (void)viewWillAppear:(char)a0;
- (void)viewDidAppear:(char)a0;
- (void)viewDidDisappear:(char)a0;
- (void)viewWillLayoutSubviews;
- (void)_animateTransition;
- (void)_applyAppearance;
- (void)_replacePrimaryViewWithView:(id)a0 animated:(char)a1;
- (void)_replacePrimaryViewWithViewController:(id)a0 animated:(char)a1;
- (void)_startReappearTransitionTimerAnimated:(char)a0;
- (void)_transitionToLoadingAnimated:(char)a0;
- (void)_transitionToSnapshot;
- (void)awaitSnapshotWithCompletion:(id /* block */)a0;
- (id)initWithModel:(id)a0 context:(id)a1 appearance:(id)a2;
- (id)initWithSnapshot:(id)a0 context:(id)a1 appearance:(id)a2;
- (id)removeSnapshot;
- (void)willAppearAfterDismiss;
- (void)willPresentPageModel:(id)a0 appearance:(id)a1;

@end
