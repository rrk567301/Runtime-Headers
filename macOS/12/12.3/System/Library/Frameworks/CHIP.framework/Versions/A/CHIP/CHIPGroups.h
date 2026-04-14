@interface CHIPGroups : CHIPCluster

@property (readonly) struct GroupsCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<chip::SessionHandle> { BOOL mHasValue; union Value { struct SessionHandle { unsigned long long mPeerNodeId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mLocalSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mPeerSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; unsigned char mFabric; struct Optional<chip::ReferenceCountedHandle<chip::Transport::UnauthenticatedSession>> { BOOL mHasValue; union Value { struct ReferenceCountedHandle<chip::Transport::UnauthenticatedSession> { struct UnauthenticatedSession *mTarget; } mData; } mValue; } mUnauthenticatedSessionHandle; } mData; } mValue; } mSessionHandle; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)addGroupWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)addGroupIfIdentifyingWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)getGroupMembershipWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllGroupsWithCompletionHandler:(id /* block */)a0;
- (void)removeGroupWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)viewGroupWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)readAttributeNameSupportWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeNameSupportWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;

@end
