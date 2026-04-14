@interface CHIPOnOff : CHIPCluster

@property (readonly) struct OnOffCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<chip::SessionHandle> { BOOL mHasValue; union Value { struct SessionHandle { unsigned long long mPeerNodeId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mLocalSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mPeerSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; unsigned char mFabric; struct Optional<chip::ReferenceCountedHandle<chip::Transport::UnauthenticatedSession>> { BOOL mHasValue; union Value { struct ReferenceCountedHandle<chip::Transport::UnauthenticatedSession> { struct UnauthenticatedSession *mTarget; } mData; } mValue; } mUnauthenticatedSessionHandle; } mData; } mValue; } mSessionHandle; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeFeatureMapWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeFeatureMapWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)offWithCompletionHandler:(id /* block */)a0;
- (void)offWithEffectWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)onWithCompletionHandler:(id /* block */)a0;
- (void)onWithRecallGlobalSceneWithCompletionHandler:(id /* block */)a0;
- (void)onWithTimedOffWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)toggleWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeOnOffWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeOnOffWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeGlobalSceneControlWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeGlobalSceneControlWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeOnTimeWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeOnTimeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeOnTimeWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeOffWaitTimeWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeOffWaitTimeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeOffWaitTimeWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeStartUpOnOffWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeStartUpOnOffWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeStartUpOnOffWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;

@end
