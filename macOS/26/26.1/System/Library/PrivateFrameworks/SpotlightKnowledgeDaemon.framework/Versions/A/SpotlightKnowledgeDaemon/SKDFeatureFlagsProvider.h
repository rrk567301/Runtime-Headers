@interface SKDFeatureFlagsProvider : NSObject <SKDFeatureFlagsProviding>

@property (nonatomic, readonly) BOOL appEntitiesEnabled;
@property (nonatomic, readonly) BOOL embeddingCacheDiagnosticsEnabled;
@property (nonatomic, readonly) BOOL offlineLocationLookupEnabled;
@property (nonatomic, readonly) BOOL pirLocationLookupEnabled;
@property (nonatomic, readonly) BOOL pipelineEnabled;
@property (nonatomic, readonly) BOOL pipelineDebugEnabled;
@property (nonatomic, readonly) BOOL pipelineKeyphrasesEnabled;
@property (nonatomic, readonly) BOOL preExtractionScanningEnabled;
@property (nonatomic, readonly) BOOL scheduledReceiverDebugEnabled;
@property (nonatomic, readonly) BOOL schedulerEnabled;

- (BOOL)isPipelineEnabled;
- (id)init;
- (BOOL)isScheduledReceiverDebugEnabled;
- (BOOL)isAppEntitiesEnabled;
- (BOOL)isEmbeddingCacheDiagnosticsEnabled;
- (BOOL)isOfflineLocationLookupEnabled;
- (BOOL)isPIRLocationLookupEnabled;
- (BOOL)isPipelineDebugEnabled;
- (BOOL)isPipelineKeyphrasesEnabled;
- (BOOL)isPreExtractionScanningEnabled;
- (BOOL)isSchedulerEnabled;

@end
