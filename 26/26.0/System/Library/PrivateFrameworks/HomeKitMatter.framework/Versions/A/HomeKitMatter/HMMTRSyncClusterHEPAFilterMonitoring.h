@class NSString;

@interface HMMTRSyncClusterHEPAFilterMonitoring : MTRClusterHEPAFilterMonitoring <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)readAttributePluginConditionWithParams:(id)a0;
- (void)updatedValuePluginConditionForAttributeReport:(id)a0 responseHandler:(id /* block */)a1;

@end
