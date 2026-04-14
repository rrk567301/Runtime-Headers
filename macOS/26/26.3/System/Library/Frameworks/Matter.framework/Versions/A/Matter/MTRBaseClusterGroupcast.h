@interface MTRBaseClusterGroupcast : MTRGenericBaseCluster

+ (void)readAttributeAcceptedCommandListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeAttributeListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeClusterRevisionWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeFeatureMapWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeGeneratedCommandListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeMaxMembershipCountWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeMembershipWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;

- (void)joinGroupWithParams:(id)a0 completion:(id /* block */)a1;
- (void)configureAuxiliaryACLWithParams:(id)a0 completion:(id /* block */)a1;
- (void)expireGracePeriodWithParams:(id)a0 completion:(id /* block */)a1;
- (void)leaveGroupWithParams:(id)a0 completion:(id /* block */)a1;
- (void)readAttributeAcceptedCommandListWithCompletion:(id /* block */)a0;
- (void)readAttributeAttributeListWithCompletion:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletion:(id /* block */)a0;
- (void)readAttributeFeatureMapWithCompletion:(id /* block */)a0;
- (void)readAttributeGeneratedCommandListWithCompletion:(id /* block */)a0;
- (void)readAttributeMaxMembershipCountWithCompletion:(id /* block */)a0;
- (void)readAttributeMembershipWithParams:(id)a0 completion:(id /* block */)a1;
- (void)subscribeAttributeAcceptedCommandListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeAttributeListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeClusterRevisionWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeFeatureMapWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeGeneratedCommandListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeMaxMembershipCountWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeMembershipWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)updateGroupKeyWithParams:(id)a0 completion:(id /* block */)a1;

@end
