@interface CHIPDoorLock : CHIPCluster

@property (readonly) struct DoorLockCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<chip::SessionHandle> { BOOL mHasValue; union Value { struct SessionHandle { unsigned long long mPeerNodeId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mLocalSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mPeerSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; unsigned char mFabric; struct Optional<chip::ReferenceCountedHandle<chip::Transport::UnauthenticatedSession>> { BOOL mHasValue; union Value { struct ReferenceCountedHandle<chip::Transport::UnauthenticatedSession> { struct UnauthenticatedSession *mTarget; } mData; } mValue; } mUnauthenticatedSessionHandle; } mData; } mValue; } mSessionHandle; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)clearAllPINCodesWithCompletionHandler:(id /* block */)a0;
- (void)clearAllRFIDCodesWithCompletionHandler:(id /* block */)a0;
- (void)clearHolidayScheduleWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearPINCodeWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearRFIDCodeWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearWeekDayScheduleWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearYearDayScheduleWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)getHolidayScheduleWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)getLogRecordWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)getPINCodeWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)getRFIDCodeWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)getUserTypeWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)getWeekDayScheduleWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)getYearDayScheduleWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)lockDoorWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)setHolidayScheduleWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)setPINCodeWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)setRFIDCodeWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)setUserTypeWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)setWeekDayScheduleWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)setYearDayScheduleWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)unlockDoorWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)unlockWithTimeoutWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)readAttributeLockStateWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeLockStateWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeLockTypeWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeLockTypeWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;
- (void)readAttributeActuatorEnabledWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeActuatorEnabledWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 subscriptionEstablished:(id /* block */)a2 reportHandler:(id /* block */)a3;

@end
