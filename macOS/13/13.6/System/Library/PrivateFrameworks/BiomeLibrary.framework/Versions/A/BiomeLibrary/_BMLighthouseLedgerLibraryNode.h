@interface _BMLighthouseLedgerLibraryNode : _BMLibraryNode

+ (id)identifier;
+ (id)validKeyPaths;
+ (id)streamWithName:(id)a0;
+ (id)streamNames;
+ (id)sublibraries;
+ (id)configurationForMlruntimedEvent;
+ (id)MlruntimedEvent;
+ (id)LighthousePluginEvent;
+ (id)TrialdEvent;
+ (id)configurationForLighthousePluginEvent;
+ (id)configurationForTrialdEvent;
+ (id)storeConfigurationForLighthousePluginEvent;
+ (id)storeConfigurationForMlruntimedEvent;
+ (id)storeConfigurationForTrialdEvent;
+ (id)syncPolicyForLighthousePluginEvent;
+ (id)syncPolicyForMlruntimedEvent;
+ (id)syncPolicyForTrialdEvent;

@end
