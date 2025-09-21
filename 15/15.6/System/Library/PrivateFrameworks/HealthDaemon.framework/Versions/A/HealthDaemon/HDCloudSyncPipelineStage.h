@interface HDCloudSyncPipelineStage : HDCloudSyncOperation

@property (nonatomic) char criticalFailureOnError;
@property (nonatomic) long long expectedSendSize;
@property (nonatomic) long long expectedReceiveSize;

+ (char)shouldProduceOperationAnalytics;
+ (char)shouldLogAtOperationEnd;
+ (char)shouldLogAtOperationStart;

- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)pipelineStageIgnoringErrors;

@end
