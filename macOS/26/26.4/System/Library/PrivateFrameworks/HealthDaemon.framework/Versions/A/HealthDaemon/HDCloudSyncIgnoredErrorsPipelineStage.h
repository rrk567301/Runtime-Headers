@class HDCloudSyncPipelineStage;

@interface HDCloudSyncIgnoredErrorsPipelineStage : HDCloudSyncPipelineStage

@property (retain) HDCloudSyncPipelineStage *stage;

- (void)main;
- (void).cxx_destruct;
- (id)description;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 stage:(id)a2;

@end
