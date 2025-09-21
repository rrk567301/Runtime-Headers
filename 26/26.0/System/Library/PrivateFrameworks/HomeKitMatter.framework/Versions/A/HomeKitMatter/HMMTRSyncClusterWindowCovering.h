@interface HMMTRSyncClusterWindowCovering : MTRClusterWindowCovering

+ (id)logCategory;

- (id)readAttributePluginCurrentPositionLiftPercent100thsWithParams:(id)a0;
- (id)readAttributePluginTargetPositionLiftPercent100thsWithParams:(id)a0;
- (void)sendUpOrDownCommand:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributePluginTargetPositionTiltWithSetValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributePluginTargetPositionWithSetValue:(id)a0 expectedValueInterval:(id)a1;

@end
