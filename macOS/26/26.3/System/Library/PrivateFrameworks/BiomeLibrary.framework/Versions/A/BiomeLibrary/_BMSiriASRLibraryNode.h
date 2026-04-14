@interface _BMSiriASRLibraryNode : _BMLibraryNode

+ (id)sublibraries;
+ (id)identifier;
+ (id)validKeyPaths;
+ (id)streamWithName:(id)a0;
+ (id)streamNames;
+ (id)RequestMetricsRecord;
+ (id)ContextualReplayRecord;
+ (id)configurationForContextualReplayRecord;
+ (id)configurationForRequestMetricsRecord;
+ (id)storeConfigurationForContextualReplayRecord;
+ (id)storeConfigurationForRequestMetricsRecord;
+ (id)syncPolicyForContextualReplayRecord;
+ (id)syncPolicyForRequestMetricsRecord;

@end
