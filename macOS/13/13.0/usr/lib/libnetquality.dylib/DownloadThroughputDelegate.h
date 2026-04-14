@interface DownloadThroughputDelegate : ThroughputDelegate

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (id)createTaskWithRequest:(id)a0 session:(id)a1;
- (void)updateResultsWithThroughput:(long long)a0 confidence:(long long)a1;
- (BOOL)checkLimits;
- (long long)minFlows;
- (long long)maxFlows;

@end
