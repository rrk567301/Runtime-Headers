@interface CHIPThermostatUserInterfaceConfiguration : CHIPCluster

@property (readonly) struct ThermostatUserInterfaceConfigurationCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<chip::SessionHandle> { BOOL mHasValue; union Value { struct SessionHandle { unsigned long long mPeerNodeId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mLocalSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mPeerSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; unsigned char mFabric; struct Optional<chip::ReferenceCountedHandle<chip::Transport::UnauthenticatedSession>> { BOOL mHasValue; union Value { struct ReferenceCountedHandle<chip::Transport::UnauthenticatedSession> { struct UnauthenticatedSession *mTarget; } mData; } mValue; } mUnauthenticatedSessionHandle; } mData; } mValue; } mSessionHandle; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeTemperatureDisplayModeWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeTemperatureDisplayModeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeTemperatureDisplayModeWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeKeypadLockoutWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeKeypadLockoutWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeKeypadLockoutWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeScheduleProgrammingVisibilityWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeScheduleProgrammingVisibilityWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeScheduleProgrammingVisibilityWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;

@end
