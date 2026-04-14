@interface CHIPTestGeneralDiagnostics : CHIPGeneralDiagnostics

@property (readonly) struct GeneralDiagnosticsClusterTest { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { BOOL mHasValue; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mData; } mValue; } mTimeout; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)writeAttributeServerGeneratedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClientGeneratedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeAttributeListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClusterRevisionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeNetworkInterfacesWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeRebootCountWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeUpTimeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeTotalOperationalHoursWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeBootReasonsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeActiveHardwareFaultsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeActiveRadioFaultsWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeActiveNetworkFaultsWithValue:(id)a0 completionHandler:(id /* block */)a1;

@end
