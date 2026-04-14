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
@property (nonatomic, readonly) BOOL pipelineGLPEmbeddingsEnabled;
@property (nonatomic, readonly) BOOL pipelineKeyphrasesEnabled;
@property (nonatomic, readonly) BOOL pipelineDummyEnabled;
@property (nonatomic, readonly) BOOL pipelineLegacySSREnabled;
@property (nonatomic, readonly) BOOL preExtractionScanningEnabled;
@property (nonatomic, readonly) BOOL scheduledReceiverDebugEnabled;
@property (nonatomic, readonly) BOOL metricsJobRefactorEnabled;
@property (nonatomic, readonly) BOOL historicalReportsOnRefactorEnabled;
@property (nonatomic, readonly) BOOL instantProcessingEnabled;
@property (nonatomic, readonly) BOOL priorityProcessingRefactor;
@property (nonatomic, readonly) BOOL smarterReindexSchedulingEnabled;
@property (nonatomic, readonly) BOOL orderedReindexingEnabled;
@property (nonatomic, readonly) BOOL vectorIndexEnabled;
@property (nonatomic, readonly) BOOL embeddingGenerationEnabled;
@property (nonatomic, readonly) BOOL fullTextEmbeddingEnabled;

- (BOOL)isPipelineEnabled;
- (id)init;
- (BOOL)isScheduledReceiverDebugEnabled;
- (BOOL)isAppEntitiesEnabled;
- (BOOL)isEmbeddingCacheDiagnosticsEnabled;
- (BOOL)isEmbeddingGenerationEnabled;
- (BOOL)isFullTextEmbeddingEnabled;
- (BOOL)isHistoricalReportsOnRefactorEnabled;
- (BOOL)isInstantProcessingEnabled;
- (BOOL)isMailClassCEnabled;
- (BOOL)isMetricsJobRefactorEnabled;
- (BOOL)isOfflineLocationLookupEnabled;
- (BOOL)isOrderedReindexingEnabled;
- (BOOL)isPIRLocationLookupEnabled;
- (BOOL)isPipelineDebugEnabled;
- (BOOL)isPipelineDummyEnabled;
- (BOOL)isPipelineEmbeddingsEnabled;
- (BOOL)isPipelineGLPEmbeddingsEnabled;
- (BOOL)isPipelineKeyphrasesEnabled;
- (BOOL)isPipelineLegacySSREnabled;
- (BOOL)isPipelineRefactorStandalone;
- (BOOL)isPreExtractionScanningEnabled;
- (BOOL)isPriorityIndexEnabled;
- (BOOL)isPriorityProcessingRefactorEnabled;
- (BOOL)isSmarterReindexSchedulingEnabled;
- (BOOL)isVectorIndexEnabled;

@end
