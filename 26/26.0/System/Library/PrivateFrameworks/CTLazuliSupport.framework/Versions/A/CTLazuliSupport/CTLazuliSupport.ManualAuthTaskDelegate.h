@class NSURLSession, NSURLSessionTask, NSURLCredential, NSURLAuthenticationChallenge;

@interface CTLazuliSupport.ManualAuthTaskDelegate : NSObject <NSURLSessionTaskDelegate> {
    void /* unknown type, empty encoding */ task;
    void /* unknown type, empty encoding */ failureResponse;
}

- (void)URLSession:(NSURLSession *)a0 task:(NSURLSessionTask *)a1 didReceiveChallenge:(NSURLAuthenticationChallenge *)a2 completionHandler:(void (^)(long long, NSURLCredential *))a3;
- (void)URLSession:(id)a0 didCreateTask:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
