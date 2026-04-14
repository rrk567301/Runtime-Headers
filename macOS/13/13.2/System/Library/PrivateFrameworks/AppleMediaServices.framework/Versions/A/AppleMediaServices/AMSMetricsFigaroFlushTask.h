@class NSString, AMSURLSession, AMSPromise;
@protocol AMSBagProtocol, AMSMetricsDataSource;

@interface AMSMetricsFigaroFlushTask : AMSTask <AMSMetricsFlushStrategy>

@property (retain) AMSPromise *currentCancellablePromise;
@property int requestCount;
@property (readonly) AMSURLSession *URLSession;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) id<AMSMetricsDataSource> dataSource;
@property long long maxRequestCount;
@property long long maxBatchSize;
@property (retain) NSString *topic;
@property (readonly) BOOL cancelled;

- (void).cxx_destruct;
- (void)cancel;
- (id)performFlush;
- (id)initWithDataSource:(id)a0 bag:(id)a1;
- (id)_mescalSignatureWithBodyData:(id)a0 error:(id *)a1;
- (id)_nextBatchWithConfig:(id)a0 error:(id *)a1;
- (id)_postBatch:(id)a0 error:(id *)a1;
- (BOOL)_shouldClearEventsDespiteError:(id)a0 result:(id)a1;

@end
