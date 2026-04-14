@class NSError, AMSDialogRequest, AMSAuthenticateResult, AMSEngagementRequest, AMSAuthenticateRequest, AMSDialogResult, AMSURLSession, AMSEngagementResult, NSURLSessionTask;

@interface AMSUISpyglassWrapperViewController : NSViewController <NSURLSessionDelegate, AMSURLProtocolDelegate, AMSRequestPresentationDelegate> {
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ delegateWrapper;
    void /* unknown type, empty encoding */ hostingController;
}

- (void)AMSURLSession:(AMSURLSession *)a0 task:(NSURLSessionTask *)a1 handleAuthenticateRequest:(AMSAuthenticateRequest *)a2 completion:(void (^)(AMSAuthenticateResult *, NSError *))a3;
- (void)AMSURLSession:(AMSURLSession *)a0 task:(NSURLSessionTask *)a1 handleDialogRequest:(AMSDialogRequest *)a2 completion:(void (^)(AMSDialogResult *, NSError *))a3;
- (void)AMSURLSession:(AMSURLSession *)a0 task:(NSURLSessionTask *)a1 handleEngagementRequest:(AMSEngagementRequest *)a2 completion:(void (^)(AMSEngagementResult *, NSError *))a3;
- (void)handleAuthenticateRequest:(AMSAuthenticateRequest *)a0 completion:(void (^)(AMSAuthenticateResult *, NSError *))a1;
- (void)handleDialogRequest:(AMSDialogRequest *)a0 completion:(void (^)(AMSDialogResult *, NSError *))a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewWillLayout;
- (void)viewDidLoad;
- (id)initWithAccounts:(id)a0;

@end
