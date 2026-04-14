@interface GKMetricsReportingSessionDelegate : NSObject <NSURLSessionTaskDelegate> {
    void /* unknown type, empty encoding */ reporter;
}

- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void).cxx_destruct;
- (id)initWithReporter:(id)a0;
- (id)init;

@end
