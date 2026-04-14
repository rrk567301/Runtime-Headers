@class NSString, AMSURLSession, AMSPromise;
@protocol AMSBagProtocol, AMSMetricsDataSource;

@interface AMSMetricsFigaroFlushTask : AMSTask <AMSMetricsFlushTask> {
    AMSPromise *_currentCancellableDataTaskPromise;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _currentCancellableDataTaskPromiseLock;
}

@property (readonly, nonatomic) AMSURLSession *URLSession;
@property (readonly) id<AMSBagProtocol> bag;
@property (readonly) id<AMSMetricsDataSource> dataSource;
@property (nonatomic) long long maxRequestCount;
@property (nonatomic) long long maxBatchSize;
@property (copy, nonatomic) NSString *topic;
@property (nonatomic) BOOL includeMMeClientInfoAndDeviceHeaders;
@property (nonatomic) unsigned long long metricsSigningFlavour;
@property (readonly, getter=isCancelled) BOOL cancelled;

- (void).cxx_destruct;
- (BOOL)cancel;
- (id)_flushNextBatchWithMaxRequestCount:(unsigned long long)a0 topic:(id)a1 maxBatchSize:(long long)a2 requestCount:(unsigned long long)a3 flushedEventCount:(unsigned long long)a4 config:(id)a5;
- (id)_mescalSignatureWithBodyData:(id)a0 error:(id *)a1;
- (id)_nextBatchWithConfig:(id)a0 topic:(id)a1 maxBatchSize:(long long)a2;
- (id)_postBatch:(id)a0;
- (BOOL)_shouldClearEventsDespiteError:(id)a0 result:(id)a1;
- (id)initWithDataSource:(id)a0 bag:(id)a1;
- (id)performFlush;

@end
