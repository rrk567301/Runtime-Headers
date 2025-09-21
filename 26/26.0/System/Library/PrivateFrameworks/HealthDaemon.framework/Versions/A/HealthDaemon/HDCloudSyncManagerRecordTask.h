@class NSArray;

@interface HDCloudSyncManagerRecordTask : HDCloudSyncManagerPipelineTask {
    void /* function */ recordsToCreate;
    void /* function */ recordsToDelete;
}

@property (nonatomic, copy) NSArray *recordsToCreate;
@property (nonatomic, copy) NSArray *recordsToDelete;

- (void).cxx_destruct;
- (id)initWithManager:(id)a0 context:(id)a1 accessibilityAssertion:(id)a2 completion:(id /* block */)a3;
- (id)initWithManager:(id)a0 context:(id)a1 accessibilityAssertion:(id)a2 recordsToCreate:(id)a3 recordsToDelete:(id)a4 completion:(id /* block */)a5;
- (id)pipelineForRepository:(id)a0;

@end
