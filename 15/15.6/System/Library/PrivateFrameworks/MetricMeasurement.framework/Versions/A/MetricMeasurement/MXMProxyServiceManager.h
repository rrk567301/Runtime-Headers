@class NSXPCConnection;
@protocol MetricMeasurementHelperProtocol_Internal;

@interface MXMProxyServiceManager : NSObject

@property (class, readonly) MXMProxyServiceManager *shared;

@property (readonly) id<MetricMeasurementHelperProtocol_Internal> _proxyObject;
@property (readonly) NSXPCConnection *_serviceConnection;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initInternal;
- (char)wake;
- (void)_quiesceBeforeIteration:(double)a0 timeout:(double)a1 response:(id /* block */)a2;
- (id)_sampleWithProxyMetric:(id)a0 timeout:(double)a1 stopReason:(unsigned long long *)a2;
- (void)_startPerformanceTrace:(id)a0 response:(id /* block */)a1;
- (void)_stopPerformanceTrace:(id /* block */)a0;
- (void)_terminateProcessesBeforeIteration:(id)a0 response:(id /* block */)a1;
- (void)_uncacheBeforeIteration:(id)a0 response:(id /* block */)a1;

@end
