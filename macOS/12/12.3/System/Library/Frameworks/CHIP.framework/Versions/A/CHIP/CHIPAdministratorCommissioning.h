@interface CHIPAdministratorCommissioning : CHIPCluster

@property (readonly) struct AdministratorCommissioningCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<chip::SessionHandle> { BOOL mHasValue; union Value { struct SessionHandle { unsigned long long mPeerNodeId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mLocalSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mPeerSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; unsigned char mFabric; struct Optional<chip::ReferenceCountedHandle<chip::Transport::UnauthenticatedSession>> { BOOL mHasValue; union Value { struct ReferenceCountedHandle<chip::Transport::UnauthenticatedSession> { struct UnauthenticatedSession *mTarget; } mData; } mValue; } mUnauthenticatedSessionHandle; } mData; } mValue; } mSessionHandle; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)openBasicCommissioningWindowWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)openCommissioningWindowWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)revokeCommissioningWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeWindowStatusWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeAdminFabricIndexWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeAdminVendorIdWithCompletionHandler:(id /* block */)a0;

@end
