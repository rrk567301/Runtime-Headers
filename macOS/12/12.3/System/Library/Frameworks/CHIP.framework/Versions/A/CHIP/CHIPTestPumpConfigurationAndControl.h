@interface CHIPTestPumpConfigurationAndControl : CHIPPumpConfigurationAndControl

@property (readonly) struct PumpConfigurationAndControlClusterTest { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<chip::SessionHandle> { BOOL mHasValue; union Value { struct SessionHandle { unsigned long long mPeerNodeId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mLocalSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mPeerSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; unsigned char mFabric; struct Optional<chip::ReferenceCountedHandle<chip::Transport::UnauthenticatedSession>> { BOOL mHasValue; union Value { struct ReferenceCountedHandle<chip::Transport::UnauthenticatedSession> { struct UnauthenticatedSession *mTarget; } mData; } mValue; } mUnauthenticatedSessionHandle; } mData; } mValue; } mSessionHandle; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)writeAttributeAttributeListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClusterRevisionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeFeatureMapWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMaxPressureWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMaxSpeedWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMaxFlowWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMinConstPressureWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMaxConstPressureWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMinCompPressureWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMaxCompPressureWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMinConstSpeedWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMaxConstSpeedWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMinConstFlowWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMaxConstFlowWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMinConstTempWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMaxConstTempWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePumpStatusWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeEffectiveOperationModeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeEffectiveControlModeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCapacityWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeSpeedWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePowerWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeAlarmMaskWithValue:(id)a0 completionHandler:(id /* block */)a1;

@end
