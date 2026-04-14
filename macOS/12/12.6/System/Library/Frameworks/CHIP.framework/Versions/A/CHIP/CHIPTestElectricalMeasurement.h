@interface CHIPTestElectricalMeasurement : CHIPElectricalMeasurement

@property (readonly) struct ElectricalMeasurementClusterTest { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { BOOL mHasValue; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mData; } mValue; } mTimeout; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)writeAttributeGeneratedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeAcceptedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeAttributeListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClusterRevisionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMeasurementTypeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeTotalActivePowerWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeRmsVoltageWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeRmsVoltageMinWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeRmsVoltageMaxWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeRmsCurrentWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeRmsCurrentMinWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeRmsCurrentMaxWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeActivePowerWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeActivePowerMinWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeActivePowerMaxWithValue:(id)a0 completionHandler:(id /* block */)a1;

@end
