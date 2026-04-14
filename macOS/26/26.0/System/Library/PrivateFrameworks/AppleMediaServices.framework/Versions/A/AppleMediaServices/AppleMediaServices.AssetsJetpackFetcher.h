@class AMSAuthenticateRequest, NSURLSessionTask, _TtC18AppleMediaServices20AssetsJetpackFetcher, AMSAuthenticateResult, NSError, AMSURLSession;

@interface AppleMediaServices.AssetsJetpackFetcher : NSObject <AMSURLProtocolDelegate, NSURLSessionDelegate> {
    void /* unknown type, empty encoding */ kJetpackURLBagKey;
    void /* unknown type, empty encoding */ outputFileURL;
    void /* unknown type, empty encoding */ dateFormatter;
}

@property (class, nonatomic, readonly) _TtC18AppleMediaServices20AssetsJetpackFetcher *shared;

- (id)init;
- (void)AMSURLSession:(AMSURLSession *)a0 task:(NSURLSessionTask *)a1 handleAuthenticateRequest:(AMSAuthenticateRequest *)a2 completion:(void (^)(AMSAuthenticateResult *, NSError *))a3;
- (void).cxx_destruct;

@end
