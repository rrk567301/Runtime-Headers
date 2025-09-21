@class NSURLSession, NSURL, NSURLComponents, NSURLSessionDataTask;

@interface _SWCChatterboxResolver : NSObject {
    NSURLComponents *_URLComponents;
    NSURLSessionDataTask *_task;
    NSURLSession *_session;
    id /* block */ _completionHandler;
}

@property (readonly, copy) NSURL *originalURL;

+ (id)new;
+ (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
+ (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
+ (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
+ (id)_queue;
+ (void)_invokeCompletionHandlerForTask:(id)a0 result:(id)a1 error:(id)a2;
+ (char)_looksLikeAppleErrorPageURLResponse:(id)a0;
+ (char)_looksLikeChatterboxURLComponents:(id)a0;
+ (id)_resolverForTask:(id)a0;
+ (id)_session;
+ (void)_setResolver:(id)a0 forTask:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)resolveWithCompletionHandler:(id /* block */)a0;

@end
