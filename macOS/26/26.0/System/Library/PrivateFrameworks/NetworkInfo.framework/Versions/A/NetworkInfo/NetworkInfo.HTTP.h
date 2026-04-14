@interface NetworkInfo.HTTP : NSObject <NSURLSessionTaskDelegate> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ metrics;
}

- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (id)init;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void).cxx_destruct;

@end
