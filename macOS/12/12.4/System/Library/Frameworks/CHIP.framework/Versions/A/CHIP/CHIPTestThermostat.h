@interface CHIPTestThermostat : CHIPThermostat

@property (readonly) struct ThermostatClusterTest { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { BOOL mHasValue; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mData; } mValue; } mTimeout; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)writeAttributeAttributeListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClusterRevisionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeFeatureMapWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeLocalTemperatureWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeAbsMinHeatSetpointLimitWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeAbsMaxHeatSetpointLimitWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeAbsMinCoolSetpointLimitWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeAbsMaxCoolSetpointLimitWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeStartOfWeekWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeNumberOfWeeklyTransitionsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeNumberOfDailyTransitionsWithValue:(id)a0 completionHandler:(id /* block */)a1;

@end
