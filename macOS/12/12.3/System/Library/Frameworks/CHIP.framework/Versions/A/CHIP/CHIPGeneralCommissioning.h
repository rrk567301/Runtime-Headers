@interface CHIPGeneralCommissioning : CHIPCluster

@property (readonly) struct GeneralCommissioningCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<chip::SessionHandle> { BOOL mHasValue; union Value { struct SessionHandle { unsigned long long mPeerNodeId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mLocalSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mPeerSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; unsigned char mFabric; struct Optional<chip::ReferenceCountedHandle<chip::Transport::UnauthenticatedSession>> { BOOL mHasValue; union Value { struct ReferenceCountedHandle<chip::Transport::UnauthenticatedSession> { struct UnauthenticatedSession *mTarget; } mData; } mValue; } mUnauthenticatedSessionHandle; } mData; } mValue; } mSessionHandle; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)armFailSafeWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)commissioningCompleteWithCompletionHandler:(id /* block */)a0;
- (void)setRegulatoryConfigWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)readAttributeBreadcrumbWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeBreadcrumbWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeBreadcrumbWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeBasicCommissioningInfoListWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeBasicCommissioningInfoListWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeRegulatoryConfigWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeLocationCapabilityWithCompletionHandler:(id /* block */)a0;

@end
