@interface NWSMetricReporter : NWSClientConnection

- (void)sendStreamMetrics:(id)a0 onQueue:(id)a1;
- (void)sendHTTPMetrics:(id)a0 onQueue:(id)a1;

@end
