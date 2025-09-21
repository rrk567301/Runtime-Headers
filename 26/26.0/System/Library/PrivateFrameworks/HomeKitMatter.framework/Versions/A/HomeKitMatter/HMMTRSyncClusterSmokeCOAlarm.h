@interface HMMTRSyncClusterSmokeCOAlarm : MTRClusterSmokeCOAlarm

+ (id)logCategory;

- (id)readAttributePluginStatusActiveWithParams:(id)a0;
- (void)updatedValuePluginStatusActiveForAttributeReport:(id)a0 responseHandler:(id /* block */)a1;

@end
