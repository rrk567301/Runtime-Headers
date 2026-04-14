@interface MTRClusterPowerTopology : MTRGenericCluster

- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeActiveEndpointsWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeAvailableEndpointsWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeElectricalCircuitNodesWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (void)writeAttributeElectricalCircuitNodesWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeElectricalCircuitNodesWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
