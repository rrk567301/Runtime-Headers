@interface MTRClusterClosureDimension : MTRGenericCluster

- (void)stepWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeCurrentStateWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeLatchControlModesWithParams:(id)a0;
- (id)readAttributeLimitRangeWithParams:(id)a0;
- (id)readAttributeModulationTypeWithParams:(id)a0;
- (id)readAttributeOverflowWithParams:(id)a0;
- (id)readAttributeResolutionWithParams:(id)a0;
- (id)readAttributeRotationAxisWithParams:(id)a0;
- (id)readAttributeStepValueWithParams:(id)a0;
- (id)readAttributeTargetStateWithParams:(id)a0;
- (id)readAttributeTranslationDirectionWithParams:(id)a0;
- (id)readAttributeUnitRangeWithParams:(id)a0;
- (id)readAttributeUnitWithParams:(id)a0;
- (void)setTargetWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)setTargetWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;

@end
