@class NSURLSessionTask, AMSAuthenticateResult, NSError, AMSURLSession, AMSAuthenticateRequest;

@interface AppleMediaServicesUI.ReviewProtocolDelegate : NSObject <AMSURLProtocolDelegate, NSURLSessionDelegate>

- (id)init;
- (void)AMSURLSession:(AMSURLSession *)a0 task:(NSURLSessionTask *)a1 handleAuthenticateRequest:(AMSAuthenticateRequest *)a2 completion:(void (^)(AMSAuthenticateResult *, NSError *))a3;

@end
