@interface CHIPTestDoorLock : CHIPDoorLock

@property (readonly) struct DoorLockClusterTest { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { BOOL mHasValue; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mData; } mValue; } mTimeout; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)writeAttributeServerGeneratedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClientGeneratedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeAttributeListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClusterRevisionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeLockStateWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeLockTypeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeActuatorEnabledWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeDoorStateWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeNumberOfTotalUsersSupportedWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeNumberOfPINUsersSupportedWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeNumberOfRFIDUsersSupportedWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeNumberOfWeekDaySchedulesSupportedPerUserWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeNumberOfYearDaySchedulesSupportedPerUserWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMaxPINCodeLengthWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMinPINCodeLengthWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMaxRFIDCodeLengthWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMinRFIDCodeLengthWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeSupportedOperatingModesWithValue:(id)a0 completionHandler:(id /* block */)a1;

@end
