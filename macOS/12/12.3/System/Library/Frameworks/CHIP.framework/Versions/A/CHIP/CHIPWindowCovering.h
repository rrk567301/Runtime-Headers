@interface CHIPWindowCovering : CHIPCluster

@property (readonly) struct WindowCoveringCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<chip::SessionHandle> { BOOL mHasValue; union Value { struct SessionHandle { unsigned long long mPeerNodeId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mLocalSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mPeerSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; unsigned char mFabric; struct Optional<chip::ReferenceCountedHandle<chip::Transport::UnauthenticatedSession>> { BOOL mHasValue; union Value { struct ReferenceCountedHandle<chip::Transport::UnauthenticatedSession> { struct UnauthenticatedSession *mTarget; } mData; } mValue; } mUnauthenticatedSessionHandle; } mData; } mValue; } mSessionHandle; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeFeatureMapWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeFeatureMapWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)downOrCloseWithCompletionHandler:(id /* block */)a0;
- (void)goToLiftPercentageWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)goToLiftValueWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)goToTiltPercentageWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)goToTiltValueWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopMotionWithCompletionHandler:(id /* block */)a0;
- (void)upOrOpenWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeTypeWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeTypeWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeCurrentPositionLiftWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeCurrentPositionLiftWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeCurrentPositionTiltWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeCurrentPositionTiltWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeConfigStatusWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeConfigStatusWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeCurrentPositionLiftPercentageWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeCurrentPositionLiftPercentageWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeCurrentPositionTiltPercentageWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeCurrentPositionTiltPercentageWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeOperationalStatusWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeOperationalStatusWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeTargetPositionLiftPercent100thsWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeTargetPositionLiftPercent100thsWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeTargetPositionTiltPercent100thsWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeTargetPositionTiltPercent100thsWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeEndProductTypeWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeEndProductTypeWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeCurrentPositionLiftPercent100thsWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeCurrentPositionLiftPercent100thsWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeCurrentPositionTiltPercent100thsWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeCurrentPositionTiltPercent100thsWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeInstalledOpenLimitLiftWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeInstalledOpenLimitLiftWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeInstalledClosedLimitLiftWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeInstalledClosedLimitLiftWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeInstalledOpenLimitTiltWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeInstalledOpenLimitTiltWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeInstalledClosedLimitTiltWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeInstalledClosedLimitTiltWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeModeWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeModeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeModeWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeSafetyStatusWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeSafetyStatusWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;

@end
