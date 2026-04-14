@class NSString, NSDictionary, ACAccount;

@interface AMSUIWebBuyAction : AMSUIWebAction <AMSPurchaseDelegate, AMSUIWebActionRunnable>

@property (retain) NSString *contentType;
@property BOOL makeCurrentAccount;
@property BOOL requiresAccount;
@property (retain) NSDictionary *metricsOverlay;
@property (retain) ACAccount *account;
@property (retain) NSString *buyParams;
@property BOOL legacyBuy;
@property long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_iTunesAccount;
- (void)purchase:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleEngagementRequest:(id)a1 completion:(id /* block */)a2;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;
- (id)_runBuy;
- (id)_runBuyWithContentType:(id)a0;
- (void)_makeCurrentAccountIfNeeded:(id)a0;
- (id)_purchasePluginIdentifierForContentType:(id)a0;
- (id)purchaseContentWithType:(id)a0;

@end
