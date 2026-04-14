@interface CHIPTestNetworkCommissioning : CHIPNetworkCommissioning

@property (readonly) struct NetworkCommissioningClusterTest { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { BOOL mHasValue; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mData; } mValue; } mTimeout; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)writeAttributeServerGeneratedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClientGeneratedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClusterRevisionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeFeatureMapWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMaxNetworksWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeNetworksWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeScanMaxTimeSecondsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeConnectMaxTimeSecondsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeLastNetworkingStatusWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeLastNetworkIDWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeLastConnectErrorValueWithValue:(id)a0 completionHandler:(id /* block */)a1;

@end
