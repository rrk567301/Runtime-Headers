@class HDCloudSyncOperation;

@interface HDCloudSyncOperationPipelineStage : HDCloudSyncPipelineStage

@property (readonly, nonatomic) HDCloudSyncOperation *operation;

- (void)main;
- (id)initWithOperation:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;

@end
