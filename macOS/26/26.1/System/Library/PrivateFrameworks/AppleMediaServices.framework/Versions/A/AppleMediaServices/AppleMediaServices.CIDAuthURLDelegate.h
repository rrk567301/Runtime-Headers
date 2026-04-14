@class NSURLSessionTask, AMSAuthenticateResult, NSError, AMSURLSession, AMSAuthenticateRequest;

@interface AppleMediaServices.CIDAuthURLDelegate : NSObject <NSURLSessionDelegate, AMSURLProtocolDelegate>

- (void)AMSURLSession:(AMSURLSession *)a0 task:(NSURLSessionTask *)a1 handleAuthenticateRequest:(AMSAuthenticateRequest *)a2 completion:(void (^)(AMSAuthenticateResult *, NSError *))a3;
- (id)init;

@end
