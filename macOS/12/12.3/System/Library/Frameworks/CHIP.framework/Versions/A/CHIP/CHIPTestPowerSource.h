@interface CHIPTestPowerSource : CHIPPowerSource

@property (readonly) struct PowerSourceClusterTest { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<chip::SessionHandle> { BOOL mHasValue; union Value { struct SessionHandle { unsigned long long mPeerNodeId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mLocalSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mPeerSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; unsigned char mFabric; struct Optional<chip::ReferenceCountedHandle<chip::Transport::UnauthenticatedSession>> { BOOL mHasValue; union Value { struct ReferenceCountedHandle<chip::Transport::UnauthenticatedSession> { struct UnauthenticatedSession *mTarget; } mData; } mValue; } mUnauthenticatedSessionHandle; } mData; } mValue; } mSessionHandle; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)writeAttributeAttributeListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClusterRevisionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeFeatureMapWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeDescriptionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeStatusWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeOrderWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeBatteryVoltageWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeBatteryPercentRemainingWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeBatteryTimeRemainingWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeBatteryChargeLevelWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeActiveBatteryFaultsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeBatteryChargeStateWithValue:(id)a0 completionHandler:(id /* block */)a1;

@end
