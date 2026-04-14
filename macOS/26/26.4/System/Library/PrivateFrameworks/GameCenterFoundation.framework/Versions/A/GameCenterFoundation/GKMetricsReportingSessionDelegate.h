@interface GKMetricsReportingSessionDelegate : NSObject <NSURLSessionTaskDelegate> {
    void /* unknown type, empty encoding */ reporter;
}

- (void).cxx_destruct;
- (id)init;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (id)initWithReporter:(id)a0;

@end
