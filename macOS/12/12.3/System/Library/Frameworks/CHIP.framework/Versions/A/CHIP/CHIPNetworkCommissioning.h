@interface CHIPNetworkCommissioning : CHIPCluster

@property (readonly) struct NetworkCommissioningCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<chip::SessionHandle> { BOOL mHasValue; union Value { struct SessionHandle { unsigned long long mPeerNodeId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mLocalSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mPeerSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; unsigned char mFabric; struct Optional<chip::ReferenceCountedHandle<chip::Transport::UnauthenticatedSession>> { BOOL mHasValue; union Value { struct ReferenceCountedHandle<chip::Transport::UnauthenticatedSession> { struct UnauthenticatedSession *mTarget; } mData; } mValue; } mUnauthenticatedSessionHandle; } mData; } mValue; } mSessionHandle; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeFeatureMapWithCompletionHandler:(id /* block */)a0;
- (void)addThreadNetworkWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)addWiFiNetworkWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)disableNetworkWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)enableNetworkWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeNetworkWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)scanNetworksWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateThreadNetworkWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateWiFiNetworkWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeFeatureMapWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;

@end
