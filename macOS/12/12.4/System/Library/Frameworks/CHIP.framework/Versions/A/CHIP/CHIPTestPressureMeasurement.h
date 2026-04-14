@interface CHIPTestPressureMeasurement : CHIPPressureMeasurement

@property (readonly) struct PressureMeasurementClusterTest { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { BOOL mHasValue; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mData; } mValue; } mTimeout; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)writeAttributeAttributeListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClusterRevisionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMeasuredValueWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMinMeasuredValueWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMaxMeasuredValueWithValue:(id)a0 completionHandler:(id /* block */)a1;

@end
