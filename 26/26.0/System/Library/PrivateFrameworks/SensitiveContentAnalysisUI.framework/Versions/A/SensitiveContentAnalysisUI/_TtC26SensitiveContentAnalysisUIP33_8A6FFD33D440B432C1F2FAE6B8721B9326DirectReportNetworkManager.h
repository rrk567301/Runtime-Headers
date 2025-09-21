@class NSURLAuthenticationChallenge, NSURLSession, NSURLCredential;

@interface _TtC26SensitiveContentAnalysisUIP33_8A6FFD33D440B432C1F2FAE6B8721B9326DirectReportNetworkManager : NSObject <NSURLSessionDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_session;
    void /* unknown type, empty encoding */ pinnedCertificateURL;
}

- (void)URLSession:(NSURLSession *)a0 didReceiveChallenge:(NSURLAuthenticationChallenge *)a1 completionHandler:(void (^)(long long, NSURLCredential *))a2;
- (id)init;
- (void).cxx_destruct;

@end
