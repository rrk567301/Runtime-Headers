@interface CHIPMediaPlayback : CHIPCluster

@property (readonly) struct MediaPlaybackCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<chip::SessionHandle> { BOOL mHasValue; union Value { struct SessionHandle { unsigned long long mPeerNodeId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mLocalSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mPeerSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; unsigned char mFabric; struct Optional<chip::ReferenceCountedHandle<chip::Transport::UnauthenticatedSession>> { BOOL mHasValue; union Value { struct ReferenceCountedHandle<chip::Transport::UnauthenticatedSession> { struct UnauthenticatedSession *mTarget; } mData; } mValue; } mUnauthenticatedSessionHandle; } mData; } mValue; } mSessionHandle; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)mediaFastForwardWithCompletionHandler:(id /* block */)a0;
- (void)mediaNextWithCompletionHandler:(id /* block */)a0;
- (void)mediaPauseWithCompletionHandler:(id /* block */)a0;
- (void)mediaPlayWithCompletionHandler:(id /* block */)a0;
- (void)mediaPreviousWithCompletionHandler:(id /* block */)a0;
- (void)mediaRewindWithCompletionHandler:(id /* block */)a0;
- (void)mediaSeekWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)mediaSkipBackwardWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)mediaSkipForwardWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)mediaStartOverWithCompletionHandler:(id /* block */)a0;
- (void)mediaStopWithCompletionHandler:(id /* block */)a0;
- (void)readAttributePlaybackStateWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributePlaybackStateWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeStartTimeWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeStartTimeWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeDurationWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeDurationWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributePositionUpdatedAtWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributePositionUpdatedAtWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributePositionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributePositionWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributePlaybackSpeedWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributePlaybackSpeedWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeSeekRangeEndWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeSeekRangeEndWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeSeekRangeStartWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeSeekRangeStartWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;

@end
