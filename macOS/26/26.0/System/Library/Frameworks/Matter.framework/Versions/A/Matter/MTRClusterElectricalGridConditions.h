@interface MTRClusterElectricalGridConditions : MTRGenericCluster

- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeCurrentConditionsWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeForecastConditionsWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeLocalGenerationAvailableWithParams:(id)a0;
- (void)writeAttributeLocalGenerationAvailableWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeLocalGenerationAvailableWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
