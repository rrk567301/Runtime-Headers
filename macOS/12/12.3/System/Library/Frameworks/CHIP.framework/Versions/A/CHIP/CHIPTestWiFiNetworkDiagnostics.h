@interface CHIPTestWiFiNetworkDiagnostics : CHIPWiFiNetworkDiagnostics

@property (readonly) struct WiFiNetworkDiagnosticsClusterTest { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<chip::SessionHandle> { BOOL mHasValue; union Value { struct SessionHandle { unsigned long long mPeerNodeId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mLocalSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mPeerSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; unsigned char mFabric; struct Optional<chip::ReferenceCountedHandle<chip::Transport::UnauthenticatedSession>> { BOOL mHasValue; union Value { struct ReferenceCountedHandle<chip::Transport::UnauthenticatedSession> { struct UnauthenticatedSession *mTarget; } mData; } mValue; } mUnauthenticatedSessionHandle; } mData; } mValue; } mSessionHandle; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
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
