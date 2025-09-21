@interface _BMSiriMetricsLibraryNode : _BMLibraryNode

+ (id)identifier;
+ (id)validKeyPaths;
+ (id)streamWithName:(id)a0;
+ (id)streamNames;
+ (id)sublibraries;
+ (id)OnDeviceDigestUsageMetrics;
+ (id)OnDeviceDigestExperimentMetrics;
+ (id)OnDeviceDigestSegmentsCohorts;
+ (id)configurationForOnDeviceDigestExperimentMetrics;
+ (id)configurationForOnDeviceDigestSegmentsCohorts;
+ (id)configurationForOnDeviceDigestUsageMetrics;
+ (id)storeConfigurationForOnDeviceDigestExperimentMetrics;
+ (id)storeConfigurationForOnDeviceDigestSegmentsCohorts;
+ (id)storeConfigurationForOnDeviceDigestUsageMetrics;
+ (id)syncPolicyForOnDeviceDigestExperimentMetrics;
+ (id)syncPolicyForOnDeviceDigestSegmentsCohorts;
+ (id)syncPolicyForOnDeviceDigestUsageMetrics;

@end
