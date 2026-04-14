@interface CHIPLevelControl : CHIPCluster

@property (readonly) struct LevelControlCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<chip::SessionHandle> { BOOL mHasValue; union Value { struct SessionHandle { unsigned long long mPeerNodeId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mLocalSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mPeerSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; unsigned char mFabric; struct Optional<chip::ReferenceCountedHandle<chip::Transport::UnauthenticatedSession>> { BOOL mHasValue; union Value { struct ReferenceCountedHandle<chip::Transport::UnauthenticatedSession> { struct UnauthenticatedSession *mTarget; } mData; } mValue; } mUnauthenticatedSessionHandle; } mData; } mValue; } mSessionHandle; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeRemainingTimeWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeRemainingTimeWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)moveWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)moveToLevelWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)moveToLevelWithOnOffWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)moveWithOnOffWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)stepWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)stepWithOnOffWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopWithOnOffWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeCurrentLevelWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeCurrentLevelWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeMinLevelWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeMinLevelWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeMaxLevelWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeMaxLevelWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeCurrentFrequencyWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeCurrentFrequencyWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeMinFrequencyWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeMinFrequencyWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeMaxFrequencyWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeMaxFrequencyWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeOptionsWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeOptionsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeOptionsWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeOnOffTransitionTimeWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeOnOffTransitionTimeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeOnOffTransitionTimeWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeOnLevelWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeOnLevelWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeOnLevelWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeOnTransitionTimeWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeOnTransitionTimeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeOnTransitionTimeWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeOffTransitionTimeWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeOffTransitionTimeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeOffTransitionTimeWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeDefaultMoveRateWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeDefaultMoveRateWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeDefaultMoveRateWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeStartUpCurrentLevelWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeStartUpCurrentLevelWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeStartUpCurrentLevelWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;

@end
