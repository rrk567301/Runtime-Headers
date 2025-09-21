@class NSURLSessionTask, AMSAuthenticateResult, NSError, AMSURLSession, AMSAuthenticateRequest;

@interface _TtC18AppleMediaServicesP33_68239C40601534D7947471707625281632DeveloperSilentAuthTokenDelegate : NSObject <AMSDeveloperSilentAuthTokenDelegateProtocol, AMSURLProtocolDelegate, NSURLSessionDelegate> {
    void /* unknown type, empty encoding */ bag;
}

- (id)init;
- (void)AMSURLSession:(AMSURLSession *)a0 task:(NSURLSessionTask *)a1 handleAuthenticateRequest:(AMSAuthenticateRequest *)a2 completion:(void (^)(AMSAuthenticateResult *, NSError *))a3;
- (void).cxx_destruct;

@end
