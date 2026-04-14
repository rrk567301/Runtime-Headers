@interface CHIPTestWiFiNetworkDiagnostics : CHIPWiFiNetworkDiagnostics

@property (readonly) struct WiFiNetworkDiagnosticsClusterTest { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { BOOL mHasValue; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mData; } mValue; } mTimeout; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)writeAttributeGeneratedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeAcceptedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeAttributeListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClusterRevisionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeOverrunCountWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeFeatureMapWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeBssidWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeSecurityTypeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeWiFiVersionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeChannelNumberWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeRssiWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeBeaconLostCountWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeBeaconRxCountWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePacketMulticastRxCountWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePacketMulticastTxCountWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePacketUnicastRxCountWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePacketUnicastTxCountWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCurrentMaxRateWithValue:(id)a0 completionHandler:(id /* block */)a1;

@end
