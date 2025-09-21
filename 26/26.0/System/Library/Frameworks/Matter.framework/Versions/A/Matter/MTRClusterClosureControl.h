@interface MTRClusterClosureControl : MTRGenericCluster

- (void)stopWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)calibrateWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)calibrateWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)moveToWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)moveToWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeCountdownTimeWithParams:(id)a0;
- (id)readAttributeCurrentErrorListWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeLatchControlModesWithParams:(id)a0;
- (id)readAttributeMainStateWithParams:(id)a0;
- (id)readAttributeOverallCurrentStateWithParams:(id)a0;
- (id)readAttributeOverallTargetStateWithParams:(id)a0;
- (void)stopWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;

@end
