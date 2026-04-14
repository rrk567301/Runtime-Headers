@class MTRDevice;

@interface MTRClusterSampleMEI : MTRCluster

@property (readonly, nonatomic) MTRDevice *device;

- (void).cxx_destruct;
- (void)pingWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)addArgumentsWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (void)pingWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeEventListWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeFlipFlopWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (void)writeAttributeFlipFlopWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeFlipFlopWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
