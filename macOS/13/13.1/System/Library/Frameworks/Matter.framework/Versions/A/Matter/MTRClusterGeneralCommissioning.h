@class MTRDevice;

@interface MTRClusterGeneralCommissioning : MTRCluster

@property (readonly, nonatomic) unsigned short endpoint;
@property (readonly, nonatomic) MTRDevice *device;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (void)armFailSafeWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)setRegulatoryConfigWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)commissioningCompleteWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completionHandler:(id /* block */)a2;
- (void)commissioningCompleteWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)readAttributeBreadcrumbWithParams:(id)a0;
- (void)writeAttributeBreadcrumbWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeBreadcrumbWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (id)readAttributeBasicCommissioningInfoWithParams:(id)a0;
- (id)readAttributeRegulatoryConfigWithParams:(id)a0;
- (id)readAttributeLocationCapabilityWithParams:(id)a0;
- (id)readAttributeSupportsConcurrentConnectionWithParams:(id)a0;

@end
