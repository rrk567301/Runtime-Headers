@interface CHIPTestBasic : CHIPBasic

@property (readonly) struct BasicClusterTest { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { BOOL mHasValue; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mData; } mValue; } mTimeout; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)writeAttributeGeneratedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeAcceptedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeAttributeListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClusterRevisionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeVendorNameWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeVendorIDWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeProductIDWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeDataModelRevisionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeProductNameWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeHardwareVersionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeHardwareVersionStringWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeSoftwareVersionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeSoftwareVersionStringWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeManufacturingDateWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePartNumberWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeProductURLWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeProductLabelWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeSerialNumberWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeReachableWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeUniqueIDWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCapabilityMinimaWithValue:(id)a0 completionHandler:(id /* block */)a1;

@end
