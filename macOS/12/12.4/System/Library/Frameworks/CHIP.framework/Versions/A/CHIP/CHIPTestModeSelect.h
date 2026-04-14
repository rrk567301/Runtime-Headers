@interface CHIPTestModeSelect : CHIPModeSelect

@property (readonly) struct ModeSelectClusterTest { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { BOOL mHasValue; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mData; } mValue; } mTimeout; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)writeAttributeServerGeneratedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClientGeneratedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeAttributeListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClusterRevisionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCurrentModeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeSupportedModesWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeStartUpModeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeDescriptionWithValue:(id)a0 completionHandler:(id /* block */)a1;

@end
