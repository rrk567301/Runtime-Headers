@interface CHIPTestBasic : CHIPBasic

@property (readonly) struct BasicClusterTest { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<chip::SessionHandle> { BOOL mHasValue; union Value { struct SessionHandle { unsigned long long mPeerNodeId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mLocalSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mPeerSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; unsigned char mFabric; struct Optional<chip::ReferenceCountedHandle<chip::Transport::UnauthenticatedSession>> { BOOL mHasValue; union Value { struct ReferenceCountedHandle<chip::Transport::UnauthenticatedSession> { struct UnauthenticatedSession *mTarget; } mData; } mValue; } mUnauthenticatedSessionHandle; } mData; } mValue; } mSessionHandle; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)writeAttributeAttributeListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClusterRevisionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeVendorNameWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeInteractionModelVersionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeVendorIDWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeProductNameWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeProductIDWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeHardwareVersionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeHardwareVersionStringWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeSoftwareVersionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeSoftwareVersionStringWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeManufacturingDateWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePartNumberWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeProductURLWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeProductLabelWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeSerialNumberWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeReachableWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeUniqueIDWithValue:(id)a0 completionHandler:(id /* block */)a1;

@end
