@interface CloudSubscriptionFeatures.CertificatePinner : NSObject <NSURLConnectionDelegate, NSURLSessionDelegate> {
    void /* unknown type, empty encoding */ hostName;
}

- (void)connection:(id)a0 willSendRequestForAuthenticationChallenge:(id)a1;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;

@end
