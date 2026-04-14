@class HDCloudSyncOperation;

@interface HDCloudSyncOperationPipelineStage : HDCloudSyncPipelineStage

@property (readonly, nonatomic) HDCloudSyncOperation *operation;

- (id)initWithOperation:(id)a0;
- (id)description;
- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;

@end
