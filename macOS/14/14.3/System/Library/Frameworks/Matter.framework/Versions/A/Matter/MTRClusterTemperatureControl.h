@class MTRDevice;

@interface MTRClusterTemperatureControl : MTRCluster

@property (readonly, nonatomic) MTRDevice *device;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeEventListWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeMaxTemperatureWithParams:(id)a0;
- (id)readAttributeMinTemperatureWithParams:(id)a0;
- (id)readAttributeSelectedTemperatureLevelWithParams:(id)a0;
- (id)readAttributeStepWithParams:(id)a0;
- (id)readAttributeSupportedTemperatureLevelsWithParams:(id)a0;
- (id)readAttributeTemperatureSetpointWithParams:(id)a0;
- (void)setTemperatureWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;

@end
