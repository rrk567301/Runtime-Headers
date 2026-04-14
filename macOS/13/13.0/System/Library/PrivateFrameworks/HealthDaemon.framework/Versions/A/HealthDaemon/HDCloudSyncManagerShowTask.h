@class NSArray, NSMutableArray;

@interface HDCloudSyncManagerShowTask : HDCloudSyncManagerPipelineTask {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_allRepositoryDescriptions;
    NSArray *_repositoryDescriptions;
}

@property (readonly, copy) NSArray *repositoryDescriptions;

- (void).cxx_destruct;
- (id)pipelineForRepository:(id)a0;
- (void)didFinishWithSuccess;
- (void)didFailWithErrors:(id)a0;
- (id)initWithManager:(id)a0 context:(id)a1 accessibilityAssertion:(id)a2 completion:(id /* block */)a3;

@end
