@class AMSURLRequestEncoder, NSString, NSOperationQueue, NSURL, AMSURLSession, AMSBag;

@interface FigPWDKeyExchangeSenderServerHelperProd : NSObject <FigPWDKeyExchangeSenderServerHelper, NSURLSessionDelegate, AMSURLProtocolDelegate> {
    AMSURLSession *_urlSession;
    AMSBag *_pwdBag;
    AMSURLRequestEncoder *_requestEncoder;
    NSOperationQueue *_opQueue;
    NSURL *_endpointURL;
    NSURL *_certURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)InitializeAMS;

- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)dealloc;
- (id)init;
- (BOOL)AMSURLSession:(id)a0 task:(id)a1 shouldFailWithServerError:(id)a2;
- (void)requestCertDataFromServer:(id /* block */)a0;
- (int)requestCertURL;
- (int)requestEndpointURL;
- (void)requestKeyDataFromServer:(id)a0 completionHandler:(id /* block */)a1;

@end
