@class NSArray, HDCloudSyncPipelineStageFetchShares;

@interface HDCloudSyncManagerFetchShareParticipantsTask : HDCloudSyncManagerPipelineTask {
    char _fetchAllShares;
    HDCloudSyncPipelineStageFetchShares *_fetchSharesStage;
}

@property (readonly, copy, nonatomic) NSArray *shares;

- (void).cxx_destruct;
- (id)initWithManager:(id)a0 context:(id)a1 fetchAllShares:(char)a2 accessibilityAssertion:(id)a3 completion:(id /* block */)a4;
- (id)pipelineForRepository:(id)a0;

@end
