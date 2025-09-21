@class NSURLSession, NSURLSessionTask, NSURLCredential, NSURLAuthenticationChallenge;

@interface CTLazuliSupport.AuthTaskDelegate : NSObject <NSURLSessionTaskDelegate> {
    void /* unknown type, empty encoding */ challengeHandler;
}

- (void)URLSession:(NSURLSession *)a0 task:(NSURLSessionTask *)a1 didReceiveChallenge:(NSURLAuthenticationChallenge *)a2 completionHandler:(void (^)(long long, NSURLCredential *))a3;
- (id)init;
- (void).cxx_destruct;

@end
