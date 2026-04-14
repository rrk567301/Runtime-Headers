@interface CHIPBasic : CHIPCluster

@property (readonly) struct BasicCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<chip::SessionHandle> { BOOL mHasValue; union Value { struct SessionHandle { unsigned long long mPeerNodeId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mLocalSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mPeerSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; unsigned char mFabric; struct Optional<chip::ReferenceCountedHandle<chip::Transport::UnauthenticatedSession>> { BOOL mHasValue; union Value { struct ReferenceCountedHandle<chip::Transport::UnauthenticatedSession> { struct UnauthenticatedSession *mTarget; } mData; } mValue; } mUnauthenticatedSessionHandle; } mData; } mValue; } mSessionHandle; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeVendorNameWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeVendorNameWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)mfgSpecificPingWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeInteractionModelVersionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeInteractionModelVersionWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeVendorIDWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeVendorIDWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeProductNameWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeProductNameWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeProductIDWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeProductIDWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeNodeLabelWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeNodeLabelWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeNodeLabelWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeLocationWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeLocationWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeLocationWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeHardwareVersionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeHardwareVersionWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeHardwareVersionStringWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeHardwareVersionStringWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeSoftwareVersionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeSoftwareVersionWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeSoftwareVersionStringWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeSoftwareVersionStringWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeManufacturingDateWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeManufacturingDateWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributePartNumberWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributePartNumberWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeProductURLWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeProductURLWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeProductLabelWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeProductLabelWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeSerialNumberWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeSerialNumberWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeLocalConfigDisabledWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeLocalConfigDisabledWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeLocalConfigDisabledWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeReachableWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeReachableWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeUniqueIDWithCompletionHandler:(id /* block */)a0;

@end
