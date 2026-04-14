@interface SKDFeatureFlagsProvider : NSObject <SKDFeatureFlagsProviding>

@property (nonatomic, readonly) BOOL appEntitiesEnabled;
@property (nonatomic, readonly) BOOL embeddingCacheDiagnosticsEnabled;
@property (nonatomic, readonly) BOOL offlineLocationLookupEnabled;
@property (nonatomic, readonly) BOOL pirLocationLookupEnabled;
@property (nonatomic, readonly) BOOL priorityIndexEnabled;
@property (nonatomic, readonly) BOOL mailClassCEnabled;
@property (nonatomic, readonly) BOOL pipelineEnabled;
@property (nonatomic, readonly) BOOL pipelineRefactorStandalone;
@property (nonatomic, readonly) BOOL pipelineDebugEnabled;
@property (nonatomic, readonly) BOOL pipelineEmbeddingsEnabled;
@property (nonatomic, readonly) BOOL pipelineKeyphrasesEnabled;
@property (nonatomic, readonly) BOOL pipelineDummyEnabled;
@property (nonatomic, readonly) BOOL preExtractionScanningEnabled;
@property (nonatomic, readonly) BOOL scheduledReceiverDebugEnabled;
@property (nonatomic, readonly) BOOL metricsJobRefactorEnabled;
@property (nonatomic, readonly) BOOL historicalReportsOnRefactorEnabled;

- (id)init;
- (BOOL)isPipelineEnabled;
- (BOOL)isScheduledReceiverDebugEnabled;
- (BOOL)isAppEntitiesEnabled;
- (BOOL)isEmbeddingCacheDiagnosticsEnabled;
- (BOOL)isHistoricalReportsOnRefactorEnabled;
- (BOOL)isMailClassCEnabled;
- (BOOL)isMetricsJobRefactorEnabled;
- (BOOL)isOfflineLocationLookupEnabled;
- (BOOL)isPIRLocationLookupEnabled;
- (BOOL)isPipelineDebugEnabled;
- (BOOL)isPipelineDummyEnabled;
- (BOOL)isPipelineEmbeddingsEnabled;
- (BOOL)isPipelineKeyphrasesEnabled;
- (BOOL)isPipelineRefactorStandalone;
- (BOOL)isPreExtractionScanningEnabled;
- (BOOL)isPriorityIndexEnabled;

@end
