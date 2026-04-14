@interface _BMLighthouseLedgerLibraryNode : _BMLibraryNode

+ (id)identifier;
+ (id)validKeyPaths;
+ (id)streamNames;
+ (id)streamWithName:(id)a0;
+ (id)sublibraries;
+ (id)MlruntimedEvent;
+ (id)TrialdEvent;
+ (id)LighthousePluginEvent;
+ (id)storeConfigurationForMlruntimedEvent;
+ (id)syncPolicyForMlruntimedEvent;
+ (id)configurationForMlruntimedEvent;
+ (id)storeConfigurationForTrialdEvent;
+ (id)syncPolicyForTrialdEvent;
+ (id)configurationForTrialdEvent;
+ (id)storeConfigurationForLighthousePluginEvent;
+ (id)syncPolicyForLighthousePluginEvent;
+ (id)configurationForLighthousePluginEvent;

@end
