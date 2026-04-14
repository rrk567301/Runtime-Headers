@interface CHIPScenes : CHIPCluster

@property (readonly) struct ScenesCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<chip::SessionHandle> { BOOL mHasValue; union Value { struct SessionHandle { unsigned long long mPeerNodeId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mLocalSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mPeerSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; unsigned char mFabric; struct Optional<chip::ReferenceCountedHandle<chip::Transport::UnauthenticatedSession>> { BOOL mHasValue; union Value { struct ReferenceCountedHandle<chip::Transport::UnauthenticatedSession> { struct UnauthenticatedSession *mTarget; } mData; } mValue; } mUnauthenticatedSessionHandle; } mData; } mValue; } mSessionHandle; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeNameSupportWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeNameSupportWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)addSceneWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)getSceneMembershipWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)recallSceneWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllScenesWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeSceneWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)storeSceneWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)viewSceneWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)readAttributeSceneCountWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeSceneCountWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeCurrentSceneWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeCurrentSceneWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeCurrentGroupWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeCurrentGroupWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeSceneValidWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeSceneValidWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;

@end
