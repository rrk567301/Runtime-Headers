@class NSTextField, NSViewController, NSString, AMSUISpyglassPurchasesAccount;

@interface AMSUISpyglassViewController : NSViewController <AMSRequestPresentationDelegate, AMSUISpyglassPurchasesAccountViewDelegate, AMSUISpyglassPurchasesHeaderViewDelegate, AMSURLProtocolDelegate, NSURLSessionDelegate>

@property (retain) AMSUISpyglassPurchasesAccount *currentAccount;
@property (retain) NSTextField *noAccountLabel;
@property (retain) NSViewController *wrapperController;
@property (getter=isVisible) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewWillLayout;
- (id)bag;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleDialogRequest:(id)a2 completion:(id /* block */)a3;
- (void)handleAuthenticateRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleDialogRequest:(id)a0 completion:(id /* block */)a1;
- (void)accountChanged:(id)a0;
- (void)toggleBiometricsTokenForAccount:(id)a0 enabled:(BOOL)a1 completion:(id /* block */)a2;
- (void)showSubscriptions;
- (void)syncPasswordSettingsForAccount:(id)a0 freeSetting:(unsigned long long)a1 paidSetting:(unsigned long long)a2;
- (void)presentAccountSummary;
- (BOOL)_useNewUI;
- (void)createViewWithAccounts:(id)a0;
- (void)_disableBiometricsTokenForAccount:(id)a0 completion:(id /* block */)a1;
- (void)_enableBiometricsTokenForAccount:(id)a0 completion:(id /* block */)a1;

@end
