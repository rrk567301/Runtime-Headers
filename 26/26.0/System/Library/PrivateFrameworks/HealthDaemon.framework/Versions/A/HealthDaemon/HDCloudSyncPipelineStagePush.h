@class NSString, HDSyncIdentity;
@protocol HDHDCloudSyncPipelineStagePushFullSyncMetricStorage;

@interface HDCloudSyncPipelineStagePush : HDCloudSyncPipelineStage <HDSyncSessionDelegate> {
    HDSyncIdentity *_currentSyncIdentity;
}

@property (retain, nonatomic) id<HDHDCloudSyncPipelineStagePushFullSyncMetricStorage> fullSyncMetricsStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operationTagDependencies;

- (void)main;
- (void)syncSession:(id)a0 sendChanges:(id)a1 completion:(id /* block */)a2;
- (void)syncSessionWillBegin:(id)a0;
- (void)syncSession:(id)a0 didFinishSuccessfully:(BOOL)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;

@end
