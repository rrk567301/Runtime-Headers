@interface UploadThroughputDelegate : ThroughputDelegate

- (void)URLSession:(id)a0 task:(id)a1 needNewBodyStream:(id /* block */)a2;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (id)createTaskWithRequest:(id)a0 session:(id)a1;
- (id)amendRequest:(id)a0;
- (void)updateResultsWithThroughput:(long long)a0 confidence:(long long)a1;
- (BOOL)checkLimits;
- (long long)minFlows;
- (long long)maxFlows;

@end
