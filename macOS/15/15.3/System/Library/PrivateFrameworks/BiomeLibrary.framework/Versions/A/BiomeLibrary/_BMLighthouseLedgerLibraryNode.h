@interface _BMLighthouseLedgerLibraryNode : _BMLibraryNode

+ (id)identifier;
+ (id)validKeyPaths;
+ (id)streamWithName:(id)a0;
+ (id)streamNames;
+ (id)sublibraries;
+ (id)MlruntimedEvent;
+ (id)configurationForMlruntimedEvent;
+ (id)configurationForTaskCustomEvent;
+ (id)DeviceTelemetry;
+ (id)DediscoPrivacyEvent;
+ (id)LighthousePluginEvent;
+ (id)TaskCustomEvent;
+ (id)configurationForDeviceTelemetry;
+ (id)storeConfigurationForTaskStatus;
+ (id)TaskError;
+ (id)TaskStatus;
+ (id)TaskTelemetry;
+ (id)TrialdEvent;
+ (id)configurationForDediscoPrivacyEvent;
+ (id)configurationForLighthousePluginEvent;
+ (id)configurationForTaskError;
+ (id)configurationForTaskStatus;
+ (id)configurationForTaskTelemetry;
+ (id)configurationForTrialdEvent;
+ (id)storeConfigurationForDediscoPrivacyEvent;
+ (id)storeConfigurationForDeviceTelemetry;
+ (id)storeConfigurationForLighthousePluginEvent;
+ (id)storeConfigurationForMlruntimedEvent;
+ (id)storeConfigurationForTaskCustomEvent;
+ (id)storeConfigurationForTaskError;
+ (id)storeConfigurationForTaskTelemetry;
+ (id)storeConfigurationForTrialdEvent;
+ (id)syncPolicyForDediscoPrivacyEvent;
+ (id)syncPolicyForDeviceTelemetry;
+ (id)syncPolicyForLighthousePluginEvent;
+ (id)syncPolicyForMlruntimedEvent;
+ (id)syncPolicyForTaskCustomEvent;
+ (id)syncPolicyForTaskError;
+ (id)syncPolicyForTaskStatus;
+ (id)syncPolicyForTaskTelemetry;
+ (id)syncPolicyForTrialdEvent;

@end
