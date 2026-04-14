@interface CHIPWiFiNetworkDiagnostics : CHIPCluster

@property (readonly) struct WiFiNetworkDiagnosticsCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<chip::SessionHandle> { BOOL mHasValue; union Value { struct SessionHandle { unsigned long long mPeerNodeId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mLocalSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mPeerSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; unsigned char mFabric; struct Optional<chip::ReferenceCountedHandle<chip::Transport::UnauthenticatedSession>> { BOOL mHasValue; union Value { struct ReferenceCountedHandle<chip::Transport::UnauthenticatedSession> { struct UnauthenticatedSession *mTarget; } mData; } mValue; } mUnauthenticatedSessionHandle; } mData; } mValue; } mSessionHandle; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)resetCountsWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeOverrunCountWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeOverrunCountWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeFeatureMapWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeBssidWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeBssidWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeSecurityTypeWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeSecurityTypeWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeWiFiVersionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeWiFiVersionWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeChannelNumberWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeChannelNumberWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeRssiWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeRssiWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeBeaconLostCountWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeBeaconLostCountWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeBeaconRxCountWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeBeaconRxCountWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributePacketMulticastRxCountWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributePacketMulticastRxCountWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributePacketMulticastTxCountWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributePacketMulticastTxCountWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributePacketUnicastRxCountWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributePacketUnicastRxCountWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributePacketUnicastTxCountWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributePacketUnicastTxCountWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeCurrentMaxRateWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeCurrentMaxRateWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;

@end
