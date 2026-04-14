@interface CHIPTestWindowCovering : CHIPWindowCovering

@property (readonly) struct WindowCoveringClusterTest { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { BOOL mHasValue; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mData; } mValue; } mTimeout; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)writeAttributeServerGeneratedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClientGeneratedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeAttributeListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClusterRevisionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeFeatureMapWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeTypeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCurrentPositionLiftWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCurrentPositionTiltWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeConfigStatusWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCurrentPositionLiftPercentageWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCurrentPositionTiltPercentageWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeOperationalStatusWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeTargetPositionLiftPercent100thsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeTargetPositionTiltPercent100thsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeEndProductTypeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCurrentPositionLiftPercent100thsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCurrentPositionTiltPercent100thsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeInstalledOpenLimitLiftWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeInstalledClosedLimitLiftWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeInstalledOpenLimitTiltWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeInstalledClosedLimitTiltWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeSafetyStatusWithValue:(id)a0 completionHandler:(id /* block */)a1;

@end
