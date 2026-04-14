@interface MTRBaseClusterZoneManagement : MTRGenericBaseCluster

+ (void)readAttributeAcceptedCommandListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeAttributeListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeClusterRevisionWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeFeatureMapWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeGeneratedCommandListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeMaxUserDefinedZonesWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeMaxZonesWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeSensitivityMaxWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeSensitivityWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeTriggersWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeTwoDCartesianMaxWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeZonesWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;

- (void)createOrUpdateTriggerWithParams:(id)a0 completion:(id /* block */)a1;
- (void)createTwoDCartesianZoneWithParams:(id)a0 completion:(id /* block */)a1;
- (void)readAttributeAcceptedCommandListWithCompletion:(id /* block */)a0;
- (void)readAttributeAttributeListWithCompletion:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletion:(id /* block */)a0;
- (void)readAttributeFeatureMapWithCompletion:(id /* block */)a0;
- (void)readAttributeGeneratedCommandListWithCompletion:(id /* block */)a0;
- (void)readAttributeMaxUserDefinedZonesWithCompletion:(id /* block */)a0;
- (void)readAttributeMaxZonesWithCompletion:(id /* block */)a0;
- (void)readAttributeSensitivityMaxWithCompletion:(id /* block */)a0;
- (void)readAttributeSensitivityWithCompletion:(id /* block */)a0;
- (void)readAttributeTriggersWithCompletion:(id /* block */)a0;
- (void)readAttributeTwoDCartesianMaxWithCompletion:(id /* block */)a0;
- (void)readAttributeZonesWithCompletion:(id /* block */)a0;
- (void)removeTriggerWithParams:(id)a0 completion:(id /* block */)a1;
- (void)removeZoneWithParams:(id)a0 completion:(id /* block */)a1;
- (void)subscribeAttributeAcceptedCommandListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeAttributeListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeClusterRevisionWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeFeatureMapWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeGeneratedCommandListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeMaxUserDefinedZonesWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeMaxZonesWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeSensitivityMaxWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeSensitivityWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeTriggersWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeTwoDCartesianMaxWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeZonesWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)updateTwoDCartesianZoneWithParams:(id)a0 completion:(id /* block */)a1;
- (void)writeAttributeSensitivityWithValue:(id)a0 completion:(id /* block */)a1;
- (void)writeAttributeSensitivityWithValue:(id)a0 params:(id)a1 completion:(id /* block */)a2;

@end
