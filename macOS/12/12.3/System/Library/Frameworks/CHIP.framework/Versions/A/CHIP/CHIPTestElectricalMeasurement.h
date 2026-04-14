@interface CHIPTestElectricalMeasurement : CHIPElectricalMeasurement

@property (readonly) struct ElectricalMeasurementClusterTest { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<chip::SessionHandle> { BOOL mHasValue; union Value { struct SessionHandle { unsigned long long mPeerNodeId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mLocalSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mPeerSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; unsigned char mFabric; struct Optional<chip::ReferenceCountedHandle<chip::Transport::UnauthenticatedSession>> { BOOL mHasValue; union Value { struct ReferenceCountedHandle<chip::Transport::UnauthenticatedSession> { struct UnauthenticatedSession *mTarget; } mData; } mValue; } mUnauthenticatedSessionHandle; } mData; } mValue; } mSessionHandle; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)writeAttributeAttributeListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClusterRevisionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMeasurementTypeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeTotalActivePowerWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeRmsVoltageWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeRmsVoltageMinWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeRmsVoltageMaxWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeRmsCurrentWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeRmsCurrentMinWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeRmsCurrentMaxWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeActivePowerWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeActivePowerMinWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeActivePowerMaxWithValue:(id)a0 completionHandler:(id /* block */)a1;

@end
