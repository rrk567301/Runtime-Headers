@interface MTRClusterJointFabricAdministrator : MTRGenericCluster

- (void)ICACCSRRequestWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)ICACCSRRequestWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)addICACWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)announceJointFabricAdministratorWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)openJointCommissioningWindowWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAdministratorFabricIndexWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (void)transferAnchorCompleteWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)transferAnchorCompleteWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)transferAnchorRequestWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)transferAnchorRequestWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;

@end
