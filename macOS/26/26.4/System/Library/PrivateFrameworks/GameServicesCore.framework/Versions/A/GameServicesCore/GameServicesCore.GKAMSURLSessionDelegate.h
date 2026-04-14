@class NSError, AMSDialogRequest, AMSAuthenticateResult, AMSEngagementRequest, AMSAuthenticateRequest, AMSDialogResult, AMSURLSession, AMSEngagementResult, NSURLSessionTask;

@interface GameServicesCore.GKAMSURLSessionDelegate : NSObject <AMSURLProtocolDelegate, NSURLSessionDelegate> {
    void /* unknown type, empty encoding */ support;
}

- (void)AMSURLSession:(AMSURLSession *)a0 task:(NSURLSessionTask *)a1 handleAuthenticateRequest:(AMSAuthenticateRequest *)a2 completion:(void (^)(AMSAuthenticateResult *, NSError *))a3;
- (void).cxx_destruct;
- (void)AMSURLSession:(AMSURLSession *)a0 task:(NSURLSessionTask *)a1 handleDialogRequest:(AMSDialogRequest *)a2 completion:(void (^)(AMSDialogResult *, NSError *))a3;
- (id)init;
- (void)AMSURLSession:(AMSURLSession *)a0 task:(NSURLSessionTask *)a1 handleEngagementRequest:(AMSEngagementRequest *)a2 completion:(void (^)(AMSEngagementResult *, NSError *))a3;

@end
