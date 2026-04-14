@class NSString;

@interface HMMTRFanControl : MTRBaseClusterFanControl <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)readAttributePluginRockSettingWithCompletionHandler:(id /* block */)a0;
- (void)updatedValuePluginRockSettingForAttributeReport:(id)a0 responseHandler:(id /* block */)a1;
- (void)writeAttributePluginRockSettingWithValue:(id)a0 completionHandler:(id /* block */)a1;

@end
