@interface MTRClusterZoneManagement : MTRGenericCluster

- (void)createOrUpdateTriggerWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)createTwoDCartesianZoneWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeMaxUserDefinedZonesWithParams:(id)a0;
- (id)readAttributeMaxZonesWithParams:(id)a0;
- (id)readAttributeSensitivityMaxWithParams:(id)a0;
- (id)readAttributeSensitivityWithParams:(id)a0;
- (id)readAttributeTriggersWithParams:(id)a0;
- (id)readAttributeTwoDCartesianMaxWithParams:(id)a0;
- (id)readAttributeZonesWithParams:(id)a0;
- (void)removeTriggerWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)removeZoneWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)updateTwoDCartesianZoneWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)writeAttributeSensitivityWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeSensitivityWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
