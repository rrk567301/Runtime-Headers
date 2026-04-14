@class NSString, AMSAuthenticateRequest;

@interface AMSUIWebAuthenticateAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property BOOL pauseTimeouts;
@property BOOL isAuthenticatingCloud;
@property BOOL makeCurrentAccount;
@property (retain) AMSAuthenticateRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;
- (void)_updateContextWithAccountIfNeeded:(id)a0;
- (id)_responseForAccount:(id)a0;

@end
