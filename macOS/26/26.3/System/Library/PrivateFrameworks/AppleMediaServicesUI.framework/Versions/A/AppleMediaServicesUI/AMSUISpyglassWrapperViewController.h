@interface AMSUISpyglassWrapperViewController : NSViewController <AMSUIWebDelegate, AMSRequestPresentationDelegate, AMSURLProtocolDelegate, NSURLSessionDelegate> {
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ delegateWrapper;
    void /* unknown type, empty encoding */ hostingController;
}

- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleDialogRequest:(id)a2 completion:(id /* block */)a3;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleEngagementRequest:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)webViewController:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewWillLayout;
- (id)initWithAccounts:(id)a0;
- (void)handleDialogRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleAuthenticateRequest:(id)a0 completion:(id /* block */)a1;

@end
