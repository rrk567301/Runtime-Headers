@interface CHIPTestGeneralDiagnostics : CHIPGeneralDiagnostics

@property (readonly) struct GeneralDiagnosticsClusterTest { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<chip::SessionHandle> { BOOL mHasValue; union Value { struct SessionHandle { unsigned long long mPeerNodeId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mLocalSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mPeerSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; unsigned char mFabric; struct Optional<chip::ReferenceCountedHandle<chip::Transport::UnauthenticatedSession>> { BOOL mHasValue; union Value { struct ReferenceCountedHandle<chip::Transport::UnauthenticatedSession> { struct UnauthenticatedSession *mTarget; } mData; } mValue; } mUnauthenticatedSessionHandle; } mData; } mValue; } mSessionHandle; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)writeAttributeAttributeListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClusterRevisionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeNetworkInterfacesWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeRebootCountWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeUpTimeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeTotalOperationalHoursWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeBootReasonsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeActiveHardwareFaultsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeActiveRadioFaultsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeActiveNetworkFaultsWithValue:(id)a0 completionHandler:(id /* block */)a1;

@end
