@interface CHIPGeneralDiagnostics : CHIPCluster

@property (readonly) struct GeneralDiagnosticsCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<chip::SessionHandle> { BOOL mHasValue; union Value { struct SessionHandle { unsigned long long mPeerNodeId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mLocalSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mPeerSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; unsigned char mFabric; struct Optional<chip::ReferenceCountedHandle<chip::Transport::UnauthenticatedSession>> { BOOL mHasValue; union Value { struct ReferenceCountedHandle<chip::Transport::UnauthenticatedSession> { struct UnauthenticatedSession *mTarget; } mData; } mValue; } mUnauthenticatedSessionHandle; } mData; } mValue; } mSessionHandle; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeNetworkInterfacesWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeNetworkInterfacesWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeRebootCountWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeRebootCountWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeUpTimeWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeUpTimeWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeTotalOperationalHoursWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeTotalOperationalHoursWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeBootReasonsWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeBootReasonsWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeActiveHardwareFaultsWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeActiveHardwareFaultsWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeActiveRadioFaultsWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeActiveRadioFaultsWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeActiveNetworkFaultsWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeActiveNetworkFaultsWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;

@end
