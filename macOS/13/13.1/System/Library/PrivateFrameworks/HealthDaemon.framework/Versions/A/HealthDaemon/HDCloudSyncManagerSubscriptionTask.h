@class NSDictionary;

@interface HDCloudSyncManagerSubscriptionTask : HDCloudSyncManagerPipelineTask {
    NSDictionary *_subscriptions;
}

- (void).cxx_destruct;
- (id)pipelineForRepository:(id)a0;
- (id)initWithManager:(id)a0 context:(id)a1 subscriptions:(id)a2 accessibilityAssertion:(id)a3 completion:(id /* block */)a4;

@end
