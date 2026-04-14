@interface MTRBaseClusterClosureControl : MTRGenericBaseCluster

+ (void)readAttributeAcceptedCommandListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeAttributeListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeClusterRevisionWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeCountdownTimeWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeCurrentErrorListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeFeatureMapWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeGeneratedCommandListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeLatchControlModesWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeMainStateWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeOverallCurrentStateWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeOverallTargetStateWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;

- (void)stopWithCompletion:(id /* block */)a0;
- (void)calibrateWithParams:(id)a0 completion:(id /* block */)a1;
- (void)calibrateWithCompletion:(id /* block */)a0;
- (void)moveToWithCompletion:(id /* block */)a0;
- (void)moveToWithParams:(id)a0 completion:(id /* block */)a1;
- (void)readAttributeAcceptedCommandListWithCompletion:(id /* block */)a0;
- (void)readAttributeAttributeListWithCompletion:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletion:(id /* block */)a0;
- (void)readAttributeCountdownTimeWithCompletion:(id /* block */)a0;
- (void)readAttributeCurrentErrorListWithCompletion:(id /* block */)a0;
- (void)readAttributeFeatureMapWithCompletion:(id /* block */)a0;
- (void)readAttributeGeneratedCommandListWithCompletion:(id /* block */)a0;
- (void)readAttributeLatchControlModesWithCompletion:(id /* block */)a0;
- (void)readAttributeMainStateWithCompletion:(id /* block */)a0;
- (void)readAttributeOverallCurrentStateWithCompletion:(id /* block */)a0;
- (void)readAttributeOverallTargetStateWithCompletion:(id /* block */)a0;
- (void)stopWithParams:(id)a0 completion:(id /* block */)a1;
- (void)subscribeAttributeAcceptedCommandListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeAttributeListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeClusterRevisionWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeCountdownTimeWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeCurrentErrorListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeFeatureMapWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeGeneratedCommandListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeLatchControlModesWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeMainStateWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeOverallCurrentStateWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeOverallTargetStateWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;

@end
