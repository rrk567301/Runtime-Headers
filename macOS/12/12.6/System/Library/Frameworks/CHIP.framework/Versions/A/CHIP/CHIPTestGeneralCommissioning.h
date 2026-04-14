@interface CHIPTestGeneralCommissioning : CHIPGeneralCommissioning

@property (readonly) struct GeneralCommissioningClusterTest { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { BOOL mHasValue; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mData; } mValue; } mTimeout; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)writeAttributeGeneratedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeAcceptedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeAttributeListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClusterRevisionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeBasicCommissioningInfoWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeRegulatoryConfigWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeLocationCapabilityWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeSupportsConcurrentConnectionWithValue:(id)a0 completionHandler:(id /* block */)a1;

@end
