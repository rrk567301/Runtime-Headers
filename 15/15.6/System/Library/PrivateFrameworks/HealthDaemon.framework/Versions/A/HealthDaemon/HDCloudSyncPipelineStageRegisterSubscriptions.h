@class NSDictionary;

@interface HDCloudSyncPipelineStageRegisterSubscriptions : HDCloudSyncPipelineStage

@property (readonly, copy, nonatomic) NSDictionary *subscriptions;
@property (nonatomic) char includeSecondaryContainers;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 subscriptions:(id)a2;

@end
