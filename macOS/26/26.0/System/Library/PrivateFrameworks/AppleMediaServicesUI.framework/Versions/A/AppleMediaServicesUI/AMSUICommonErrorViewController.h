@class AMSUIErrorView, NSDictionary, NSString, NSError;
@protocol AMSBagProtocol;

@interface AMSUICommonErrorViewController : AMSUICommonViewController

@property (retain) id<AMSBagProtocol> bag;
@property (copy) id /* block */ cancelAction;
@property (retain) NSError *error;
@property (retain) AMSUIErrorView *errorView;
@property (copy) id /* block */ retryAction;
@property (retain) NSDictionary *engagementMetrics;
@property (retain) NSString *logKey;

- (void)viewDidLoad;
- (void)loadView;
- (void)_setup;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)_cancelButtonAction;
- (void)_enqueuePageEventIfNeeded;
- (void)_setupNavigationItem;
- (void)_showCancelButton;
- (id)initWithError:(id)a0 logKey:(id)a1 bag:(id)a2 retryAction:(id /* block */)a3 cancelAction:(id /* block */)a4;
- (id)navigationItem;

@end
