@class MTRDevice;

@interface MTRClusterOtaSoftwareUpdateRequestor : MTRCluster

@property (readonly, nonatomic) unsigned short endpoint;
@property (readonly, nonatomic) MTRDevice *device;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (void)announceOtaProviderWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)readAttributeDefaultOtaProvidersWithParams:(id)a0;
- (void)writeAttributeDefaultOtaProvidersWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeDefaultOtaProvidersWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (id)readAttributeUpdatePossibleWithParams:(id)a0;
- (id)readAttributeUpdateStateWithParams:(id)a0;
- (id)readAttributeUpdateStateProgressWithParams:(id)a0;

@end
