@interface CHIPTestLevelControl : CHIPLevelControl

@property (readonly) struct LevelControlClusterTest { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { BOOL mHasValue; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mData; } mValue; } mTimeout; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)writeAttributeGeneratedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeAcceptedCommandListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeAttributeListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClusterRevisionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeRemainingTimeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeFeatureMapWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCurrentLevelWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMinLevelWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMaxLevelWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCurrentFrequencyWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMinFrequencyWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeMaxFrequencyWithValue:(id)a0 completionHandler:(id /* block */)a1;

@end
