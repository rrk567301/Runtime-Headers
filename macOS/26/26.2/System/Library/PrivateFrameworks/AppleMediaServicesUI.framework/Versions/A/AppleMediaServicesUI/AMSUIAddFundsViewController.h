@class AMSUIWebViewController, NSDictionary, ACAccount, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSUIAddFundsViewController : AMSUICommonViewController

@property (readonly) AMSUIWebViewController *webViewController;
@property (retain) ACAccount *account;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property (retain) NSDictionary *metricsOverlay;

+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)createBagForSubProfile;
+ (id)bagKeySet;

- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 bag:(id)a1;
- (id)initWithAccount:(id)a0 bag:(id)a1 clientInfo:(id)a2;

@end
