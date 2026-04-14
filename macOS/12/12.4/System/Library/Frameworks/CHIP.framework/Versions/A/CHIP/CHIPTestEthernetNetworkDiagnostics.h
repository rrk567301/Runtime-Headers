@interface CHIPTestEthernetNetworkDiagnostics : CHIPEthernetNetworkDiagnostics

@property (readonly) struct EthernetNetworkDiagnosticsClusterTest { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { BOOL mHasValue; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mData; } mValue; } mTimeout; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)writeAttributeServerGeneratedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClientGeneratedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeAttributeListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClusterRevisionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePHYRateWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeFullDuplexWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePacketRxCountWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePacketTxCountWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeTxErrCountWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCollisionCountWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeOverrunCountWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCarrierDetectWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeTimeSinceResetWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeFeatureMapWithValue:(id)a0 completionHandler:(id /* block */)a1;

@end
