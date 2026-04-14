@class NSURLSession;

@interface JEURLSessionPreconnecter : NSObject {
    NSURLSession *_session;
}

- (id)initWithURLSession:(id)a0;
- (void).cxx_destruct;
- (BOOL)preconnectWithRequest:(id)a0 completionHandler:(id /* block */)a1 error:(id *)a2;

@end
