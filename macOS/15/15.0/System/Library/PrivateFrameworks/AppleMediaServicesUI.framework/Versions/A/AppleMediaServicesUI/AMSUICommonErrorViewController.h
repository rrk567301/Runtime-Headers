@class NSError, AMSUIErrorView, NSString;
@protocol AMSBagProtocol;

@interface AMSUICommonErrorViewController : AMSUICommonViewController

@property (retain) id<AMSBagProtocol> bag;
@property (copy) id /* block */ cancelAction;
@property (retain) NSError *error;
@property (retain) AMSUIErrorView *errorView;
@property (copy) id /* block */ retryAction;
@property (retain) NSString *logKey;

- (void).cxx_destruct;
- (void)_cancelButtonAction;
- (void)_setup;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)navigationItem;
- (void)_showCancelButton;
- (void)_setupNavigationItem;
- (id)initWithError:(id)a0 logKey:(id)a1 bag:(id)a2 retryAction:(id /* block */)a3 cancelAction:(id /* block */)a4;

@end
