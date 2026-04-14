@interface MTRBaseClusterServiceArea : MTRGenericBaseCluster

+ (void)readAttributeAcceptedCommandListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeAttributeListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeClusterRevisionWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeCurrentLocationWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeEstimatedEndTimeWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeEventListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeFeatureMapWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeGeneratedCommandListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeProgressWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeSelectedLocationsWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeSupportedLocationsWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeSupportedMapsWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;

- (void)readAttributeAcceptedCommandListWithCompletion:(id /* block */)a0;
- (void)readAttributeAttributeListWithCompletion:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletion:(id /* block */)a0;
- (void)readAttributeCurrentLocationWithCompletion:(id /* block */)a0;
- (void)readAttributeEstimatedEndTimeWithCompletion:(id /* block */)a0;
- (void)readAttributeEventListWithCompletion:(id /* block */)a0;
- (void)readAttributeFeatureMapWithCompletion:(id /* block */)a0;
- (void)readAttributeGeneratedCommandListWithCompletion:(id /* block */)a0;
- (void)readAttributeProgressWithCompletion:(id /* block */)a0;
- (void)readAttributeSelectedLocationsWithCompletion:(id /* block */)a0;
- (void)readAttributeSupportedLocationsWithCompletion:(id /* block */)a0;
- (void)readAttributeSupportedMapsWithCompletion:(id /* block */)a0;
- (void)selectLocationsWithParams:(id)a0 completion:(id /* block */)a1;
- (void)skipCurrentLocationWithCompletion:(id /* block */)a0;
- (void)skipCurrentLocationWithParams:(id)a0 completion:(id /* block */)a1;
- (void)subscribeAttributeAcceptedCommandListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeAttributeListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeClusterRevisionWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeCurrentLocationWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeEstimatedEndTimeWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeEventListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeFeatureMapWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeGeneratedCommandListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeProgressWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeSelectedLocationsWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeSupportedLocationsWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeSupportedMapsWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;

@end
