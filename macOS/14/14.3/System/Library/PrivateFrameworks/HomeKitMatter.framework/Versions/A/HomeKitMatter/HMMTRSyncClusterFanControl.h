@class NSString;

@interface HMMTRSyncClusterFanControl : MTRClusterFanControl <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)writeAttributePluginRockSettingWithValue:(id)a0 expectedValueInterval:(id)a1;
- (id)readAttributePluginRockSettingWithParams:(id)a0;
- (void)updatedValuePluginRockSettingForAttributeReport:(id)a0 responseHandler:(id /* block */)a1;

@end
