@class AMSUIWebErrorPageModel, AMSUIErrorView, AMSUIWebClientContext, NSString, AMSUIWebAppearance;

@interface AMSUIWebErrorViewController : AMSUICommonViewController <AMSUIWebPagePresenter, AMSUIWebErrorPageModelDelegate>

@property (retain) AMSUIWebAppearance *appearance;
@property (retain) AMSUIWebClientContext *context;
@property (retain) AMSUIErrorView *errorView;
@property (retain) AMSUIWebErrorPageModel *model;
@property BOOL showingCancelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (id)initWithContext:(id)a0;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)networkRestored;
- (void)_applyAppearance;
- (void)_enqueuePageEventIfNeeded;
- (void)_runAction;
- (void)_showCancelButtonIfNeeded;
- (void)willPresentPageModel:(id)a0 appearance:(id)a1;

@end
