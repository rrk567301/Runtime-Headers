@interface CHIPTestWindowCovering : CHIPWindowCovering

@property (readonly) struct WindowCoveringClusterTest { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<chip::SessionHandle> { BOOL mHasValue; union Value { struct SessionHandle { unsigned long long mPeerNodeId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mLocalSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mPeerSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; unsigned char mFabric; struct Optional<chip::ReferenceCountedHandle<chip::Transport::UnauthenticatedSession>> { BOOL mHasValue; union Value { struct ReferenceCountedHandle<chip::Transport::UnauthenticatedSession> { struct UnauthenticatedSession *mTarget; } mData; } mValue; } mUnauthenticatedSessionHandle; } mData; } mValue; } mSessionHandle; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)writeAttributeAttributeListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClusterRevisionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeFeatureMapWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeTypeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCurrentPositionLiftWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCurrentPositionTiltWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeConfigStatusWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCurrentPositionLiftPercentageWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCurrentPositionTiltPercentageWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeOperationalStatusWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeTargetPositionLiftPercent100thsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeTargetPositionTiltPercent100thsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeEndProductTypeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCurrentPositionLiftPercent100thsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCurrentPositionTiltPercent100thsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeInstalledOpenLimitLiftWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeInstalledClosedLimitLiftWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeInstalledOpenLimitTiltWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeInstalledClosedLimitTiltWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeSafetyStatusWithValue:(id)a0 completionHandler:(id /* block */)a1;

@end
