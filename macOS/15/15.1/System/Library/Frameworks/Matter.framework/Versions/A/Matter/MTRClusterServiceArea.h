@interface MTRClusterServiceArea : MTRGenericCluster

- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeCurrentLocationWithParams:(id)a0;
- (id)readAttributeEstimatedEndTimeWithParams:(id)a0;
- (id)readAttributeEventListWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeProgressWithParams:(id)a0;
- (id)readAttributeSelectedLocationsWithParams:(id)a0;
- (id)readAttributeSupportedLocationsWithParams:(id)a0;
- (id)readAttributeSupportedMapsWithParams:(id)a0;
- (void)selectLocationsWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)skipCurrentLocationWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)skipCurrentLocationWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;

@end
