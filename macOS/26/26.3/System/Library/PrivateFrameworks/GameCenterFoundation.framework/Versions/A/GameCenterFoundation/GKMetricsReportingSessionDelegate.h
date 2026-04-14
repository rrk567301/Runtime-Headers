@interface GKMetricsReportingSessionDelegate : NSObject <NSURLSessionTaskDelegate> {
    void /* unknown type, empty encoding */ reporter;
}

- (id)initWithReporter:(id)a0;
- (id)init;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void).cxx_destruct;

@end
