@interface SequentialIdleLatencyURLSessionDelegate : LatencyURLSessionDelegate {
    unsigned long long _currentProbeIndex;
    unsigned long long _totalProbes;
}

- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)executeNextProbe;
- (void)executeTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithConfiguration:(id)a0 testName:(id)a1 queue:(id)a2 testEndpoint:(id)a3 resultsObject:(id)a4 resultsDelegate:(id)a5 tcpKey:(id)a6 tlsKey:(id)a7 reqrespKey:(id)a8 selfKey:(id)a9;

@end
