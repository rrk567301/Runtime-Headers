@interface PegasusKit.FeedbackReportingURLSessionDelegate : NSObject <NSURLSessionTaskDelegate> {
    void /* unknown type, empty encoding */ requestContextMap;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ allowedServices;
}

- (void)URLSession:(id)a0 didCreateTask:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;

@end
