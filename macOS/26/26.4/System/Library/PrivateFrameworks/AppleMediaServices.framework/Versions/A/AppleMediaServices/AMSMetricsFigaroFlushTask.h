@class NSString, AMSPromise, AMSURLSession, NSNumber;
@protocol AMSBagProtocol, AMSMetricsRegexCacheProtocol, AMSPrivateIdentifiersAutoDecorationProtocol, AMSMetricsDataSource;

@interface AMSMetricsFigaroFlushTask : AMSTask <AMSMetricsFlushTask> {
    AMSPromise *_currentCancellableDataTaskPromise;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _currentCancellableDataTaskPromiseLock;
    id /* block */ _postBatchBlock;
}

@property (readonly, nonatomic) AMSURLSession *URLSession;
@property (retain, nonatomic) id<AMSPrivateIdentifiersAutoDecorationProtocol> autoDecoration;
@property (readonly, nonatomic) id<AMSMetricsDataSource> dataSource;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, nonatomic) unsigned long long maxRequestCount;
@property (readonly, nonatomic) unsigned long long maxEventsPerBatch;
@property (readonly, nonatomic) NSString *topic;
@property (readonly, nonatomic) id<AMSMetricsRegexCacheProtocol> regexCache;
@property (readonly, nonatomic) BOOL includeMMeClientInfoAndDeviceHeaders;
@property (readonly, nonatomic) unsigned long long metricsSigningFlavour;
@property (readonly, nonatomic) NSNumber *maxBatchSizeOverride;
@property (readonly, getter=isCancelled) BOOL cancelled;

+ (BOOL)_shouldStartNewBatchForAccountIdentifierChange:(id)a0 current:(id)a1 existingBatchSize:(unsigned long long)a2;
+ (BOOL)_shouldClearEventsDespiteError:(id)a0 result:(id)a1;

- (id)_mescalSignaturePromiseWithBodyData:(id)a0;
- (id)initWithDataSource:(id)a0 bag:(id)a1 maxRequestCount:(unsigned long long)a2 maxEventsPerBatch:(unsigned long long)a3 topic:(id)a4 regexCache:(id)a5 includeMMeClientInfoAndDeviceHeaders:(BOOL)a6 metricsSigningFlavour:(unsigned long long)a7 urlSession:(id)a8;
- (id)performFlush;
- (id)_flushNextBatchWithRequestCount:(unsigned long long)a0 flushedEventCount:(unsigned long long)a1 config:(id)a2;
- (BOOL)cancel;
- (void)_sortEvents:(id)a0;
- (void).cxx_destruct;
- (id)_postBatch:(id)a0;
- (id)_nextBatchWithConfig:(id)a0 topic:(id)a1;
- (id)initWithDataSource:(id)a0 bag:(id)a1 maxRequestCount:(unsigned long long)a2 maxEventsPerBatch:(unsigned long long)a3 topic:(id)a4 regexCache:(id)a5 includeMMeClientInfoAndDeviceHeaders:(BOOL)a6 metricsSigningFlavour:(unsigned long long)a7 maxBatchSizeOverride:(id)a8 urlSession:(id)a9 postBatchBlock:(id /* block */)a10;

@end
