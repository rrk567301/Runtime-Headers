@interface CHIPOperationalCredentials : CHIPCluster

@property (readonly) struct OperationalCredentialsCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<chip::SessionHandle> { BOOL mHasValue; union Value { struct SessionHandle { unsigned long long mPeerNodeId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mLocalSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mPeerSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; unsigned char mFabric; struct Optional<chip::ReferenceCountedHandle<chip::Transport::UnauthenticatedSession>> { BOOL mHasValue; union Value { struct ReferenceCountedHandle<chip::Transport::UnauthenticatedSession> { struct UnauthenticatedSession *mTarget; } mData; } mValue; } mUnauthenticatedSessionHandle; } mData; } mValue; } mSessionHandle; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)addNOCWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)addTrustedRootCertificateWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)attestationRequestWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)certificateChainRequestWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)opCSRRequestWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeFabricWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeTrustedRootCertificateWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateFabricLabelWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateNOCWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)readAttributeFabricsListWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeFabricsListWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeSupportedFabricsWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeSupportedFabricsWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeCommissionedFabricsWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeCommissionedFabricsWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeTrustedRootCertificatesWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeTrustedRootCertificatesWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeCurrentFabricIndexWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeCurrentFabricIndexWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;

@end
