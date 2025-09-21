@class HDCloudSyncPipelineStageDescription;

@interface HDCloudSyncManagerShowTask : HDCloudSyncManagerPipelineTask {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HDCloudSyncPipelineStageDescription *_intermediateRepositoryDescription;
    BOOL _updateCacheAndPrepareForSync;
    HDCloudSyncPipelineStageDescription *_repositoryDescription;
}

@property (readonly, copy) HDCloudSyncPipelineStageDescription *repositoryDescription;

- (void).cxx_destruct;
- (void)didFailWithErrors:(id)a0;
- (void)didFinishWithSuccess;
- (id)initWithManager:(id)a0 context:(id)a1;
- (id)initWithManager:(id)a0 context:(id)a1 accessibilityAssertion:(id)a2 completion:(id /* block */)a3;
- (id)initWithManager:(id)a0 context:(id)a1 accessibilityAssertion:(id)a2 updateCacheAndPrepareForSync:(BOOL)a3 completion:(id /* block */)a4;
- (id)pipelineForRepository:(id)a0;

@end
