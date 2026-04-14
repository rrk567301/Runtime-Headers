@interface CHIPTestPowerSource : CHIPPowerSource

@property (readonly) struct PowerSourceClusterTest { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { BOOL mHasValue; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mData; } mValue; } mTimeout; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)writeAttributeServerGeneratedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClientGeneratedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeAttributeListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClusterRevisionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeStatusWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeFeatureMapWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeDescriptionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeOrderWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeBatteryVoltageWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeBatteryPercentRemainingWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeBatteryTimeRemainingWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeBatteryChargeLevelWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeActiveBatteryFaultsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeBatteryChargeStateWithValue:(id)a0 completionHandler:(id /* block */)a1;

@end
